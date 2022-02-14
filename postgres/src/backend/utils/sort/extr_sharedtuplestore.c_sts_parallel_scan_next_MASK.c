
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ read_ntuples; scalar_t__ read_ntuples_available; size_t read_participant; scalar_t__ read_next_page; int participant; TYPE_1__* sts; int * read_file; scalar_t__ read_bytes; int fileset; } ;
struct TYPE_11__ {int overflow; scalar_t__ ntuples; } ;
struct TYPE_10__ {scalar_t__ read_page; scalar_t__ npages; int lock; } ;
struct TYPE_9__ {int nparticipants; TYPE_2__* participants; } ;
typedef TYPE_2__ SharedTuplestoreParticipant ;
typedef TYPE_3__ SharedTuplestoreChunk ;
typedef TYPE_4__ SharedTuplestoreAccessor ;
typedef int * MinimalTuple ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,TYPE_4__*,size_t) ;
 int * FUNC_11 (TYPE_4__*,void*) ;

MinimalTuple
FUNC_12(SharedTuplestoreAccessor *VAR_5, void *VAR_6)
{
 SharedTuplestoreParticipant *VAR_7;
 BlockNumber VAR_8;
 bool VAR_9;

 for (;;)
 {

  if (VAR_5->read_ntuples < VAR_5->read_ntuples_available)
   return FUNC_11(VAR_5, VAR_6);


  VAR_7 = &VAR_5->sts->participants[VAR_5->read_participant];

  FUNC_4(&VAR_7->lock, VAR_1);

  if (VAR_7->read_page < VAR_5->read_next_page)
   VAR_7->read_page = VAR_5->read_next_page;
  VAR_9 = VAR_7->read_page >= VAR_7->npages;
  if (!VAR_9)
  {

   VAR_8 = VAR_7->read_page;

   VAR_7->read_page += VAR_4;
   VAR_5->read_next_page = VAR_7->read_page;
  }
  FUNC_5(&VAR_7->lock);

  if (!VAR_9)
  {
   SharedTuplestoreChunk VAR_10;


   if (VAR_5->read_file == ((void*)0))
   {
    char VAR_11[VAR_2];

    FUNC_10(VAR_11, VAR_5, VAR_5->read_participant);
    VAR_5->read_file =
     FUNC_1(VAR_5->fileset, VAR_11);
   }


   if (FUNC_3(VAR_5->read_file, VAR_8) != 0)
    FUNC_6(VAR_0,
      (FUNC_7(),
       FUNC_9("could not read from shared tuplestore temporary file"),
       FUNC_8("Could not seek to next block.")));
   if (FUNC_2(VAR_5->read_file, &VAR_10,
       VAR_3) != VAR_3)
    FUNC_6(VAR_0,
      (FUNC_7(),
       FUNC_9("could not read from shared tuplestore temporary file"),
       FUNC_8("Short read while reading chunk header.")));





   if (VAR_10.overflow > 0)
   {
    VAR_5->read_next_page = VAR_8 +
     VAR_10.overflow * VAR_4;
    continue;
   }

   VAR_5->read_ntuples = 0;
   VAR_5->read_ntuples_available = VAR_10.ntuples;
   VAR_5->read_bytes = VAR_3;


  }
  else
  {
   if (VAR_5->read_file != ((void*)0))
   {
    FUNC_0(VAR_5->read_file);
    VAR_5->read_file = ((void*)0);
   }





   VAR_5->read_participant = (VAR_5->read_participant + 1) %
    VAR_5->sts->nparticipants;
   if (VAR_5->read_participant == VAR_5->participant)
    break;
   VAR_5->read_next_page = 0;


  }
 }

 return ((void*)0);
}
