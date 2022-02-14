
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int status; int readptrcount; int activeptr; int backward; int eflags; int writepos_offset; int writepos_file; TYPE_2__* readptrs; int myfile; int interXact; int resowner; int memtupsize; int memtupcount; void** memtuples; int tuples; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_9__ {int eof_reached; int offset; int file; int current; } ;
typedef TYPE_2__ TSReadPointer ;
typedef int ResourceOwner ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int VAR_3 ;



 int FUNC_6 (TYPE_1__*,void*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_13(Tuplestorestate *VAR_4, void *VAR_5)
{
 TSReadPointer *VAR_6;
 int VAR_7;
 ResourceOwner VAR_8;

 VAR_4->tuples++;

 switch (VAR_4->status)
 {
  case 130:




   VAR_6 = VAR_4->readptrs;
   for (VAR_7 = 0; VAR_7 < VAR_4->readptrcount; VAR_6++, VAR_7++)
   {
    if (VAR_6->eof_reached && VAR_7 != VAR_4->activeptr)
    {
     VAR_6->eof_reached = 0;
     VAR_6->current = VAR_4->memtupcount;
    }
   }







   if (VAR_4->memtupcount >= VAR_4->memtupsize - 1)
   {
    (void) FUNC_12(VAR_4);
    FUNC_0(VAR_4->memtupcount < VAR_4->memtupsize);
   }


   VAR_4->memtuples[VAR_4->memtupcount++] = VAR_5;




   if (VAR_4->memtupcount < VAR_4->memtupsize && !FUNC_4(VAR_4))
    return;





   FUNC_5();


   VAR_8 = VAR_0;
   VAR_0 = VAR_4->resowner;

   VAR_4->myfile = FUNC_1(VAR_4->interXact);

   VAR_0 = VAR_8;






   VAR_4->backward = (VAR_4->eflags & VAR_2) != 0;
   VAR_4->status = 128;
   FUNC_7(VAR_4);
   break;
  case 128:






   VAR_6 = VAR_4->readptrs;
   for (VAR_7 = 0; VAR_7 < VAR_4->readptrcount; VAR_6++, VAR_7++)
   {
    if (VAR_6->eof_reached && VAR_7 != VAR_4->activeptr)
    {
     VAR_6->eof_reached = 0;
     FUNC_3(VAR_4->myfile,
        &VAR_6->file,
        &VAR_6->offset);
    }
   }

   FUNC_6(VAR_4, VAR_5);
   break;
  case 129:




   if (!VAR_4->readptrs[VAR_4->activeptr].eof_reached)
    FUNC_3(VAR_4->myfile,
       &VAR_4->readptrs[VAR_4->activeptr].file,
       &VAR_4->readptrs[VAR_4->activeptr].offset);
   if (FUNC_2(VAR_4->myfile,
       VAR_4->writepos_file, VAR_4->writepos_offset,
       VAR_3) != 0)
    FUNC_9(VAR_1,
      (FUNC_10(),
       FUNC_11("could not seek in tuplestore temporary file: %m")));
   VAR_4->status = 128;




   VAR_6 = VAR_4->readptrs;
   for (VAR_7 = 0; VAR_7 < VAR_4->readptrcount; VAR_6++, VAR_7++)
   {
    if (VAR_6->eof_reached && VAR_7 != VAR_4->activeptr)
    {
     VAR_6->eof_reached = 0;
     VAR_6->file = VAR_4->writepos_file;
     VAR_6->offset = VAR_4->writepos_offset;
    }
   }

   FUNC_6(VAR_4, VAR_5);
   break;
  default:
   FUNC_8(VAR_1, "invalid tuplestore state");
   break;
 }
}
