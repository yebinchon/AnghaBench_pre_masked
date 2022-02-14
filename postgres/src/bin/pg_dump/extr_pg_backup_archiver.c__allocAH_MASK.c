
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int pgoff_t ;
struct TYPE_11__ {struct TYPE_11__* prev; struct TYPE_11__* next; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_10__ {int std_strings; int exit_on_error; scalar_t__ n_errors; scalar_t__ encoding; } ;
struct TYPE_12__ {int intSize; int offSize; int compression; int dosync; scalar_t__ format; int promptPassword; int SetupWorkerPtr; int * fSpec; int OF; scalar_t__ gzOut; int sqlparse; scalar_t__ mode; TYPE_2__* toc; int * currTableAm; int * currTablespace; int * currSchema; int * currUser; int createDate; int archiveDumpVersion; TYPE_1__ public; int version; } ;
typedef int SetupWorkerPtrType ;
typedef scalar_t__ ArchiveMode ;
typedef TYPE_3__ ArchiveHandle ;
typedef scalar_t__ ArchiveFormat ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;


 scalar_t__ VAR_4 ;


 scalar_t__ const VAR_5 ;
 int FUNC_6 (char*,scalar_t__ const) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (char*,char const*,scalar_t__ const) ;
 scalar_t__ FUNC_10 (int) ;
 int * FUNC_11 (char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static ArchiveHandle *
FUNC_14(const char *VAR_8, const ArchiveFormat VAR_9,
   const int VAR_10, bool VAR_11, ArchiveMode VAR_12,
   SetupWorkerPtrType VAR_13)
{
 ArchiveHandle *VAR_14;

 FUNC_9("allocating AH for %s, format %d", VAR_8, VAR_9);

 VAR_14 = (ArchiveHandle *) FUNC_10(sizeof(ArchiveHandle));

 VAR_14->version = VAR_0;


 VAR_14->public.encoding = 0;
 VAR_14->public.std_strings = 0;


 VAR_14->public.exit_on_error = 1;
 VAR_14->public.n_errors = 0;

 VAR_14->archiveDumpVersion = VAR_2;

 VAR_14->createDate = FUNC_13(((void*)0));

 VAR_14->intSize = sizeof(int);
 VAR_14->offSize = sizeof(pgoff_t);
 if (VAR_8)
 {
  VAR_14->fSpec = FUNC_11(VAR_8);







 }
 else
  VAR_14->fSpec = ((void*)0);

 VAR_14->currUser = ((void*)0);
 VAR_14->currSchema = ((void*)0);
 VAR_14->currTablespace = ((void*)0);
 VAR_14->currTableAm = ((void*)0);

 VAR_14->toc = (TocEntry *) FUNC_10(sizeof(TocEntry));

 VAR_14->toc->next = VAR_14->toc;
 VAR_14->toc->prev = VAR_14->toc;

 VAR_14->mode = VAR_12;
 VAR_14->compression = VAR_10;
 VAR_14->dosync = VAR_11;

 FUNC_8(&(VAR_14->sqlparse), 0, sizeof(VAR_14->sqlparse));


 VAR_14->gzOut = 0;
 VAR_14->OF = VAR_7;
 VAR_14->SetupWorkerPtr = VAR_13;

 if (VAR_9 == VAR_5)
  VAR_14->format = FUNC_4(VAR_14);
 else
  VAR_14->format = VAR_9;

 VAR_14->promptPassword = VAR_3;

 switch (VAR_14->format)
 {
  case 131:
   FUNC_0(VAR_14);
   break;

  case 129:
   FUNC_2(VAR_14);
   break;

  case 130:
   FUNC_1(VAR_14);
   break;

  case 128:
   FUNC_3(VAR_14);
   break;

  default:
   FUNC_6("unrecognized file format \"%d\"", VAR_9);
 }

 return VAR_14;
}
