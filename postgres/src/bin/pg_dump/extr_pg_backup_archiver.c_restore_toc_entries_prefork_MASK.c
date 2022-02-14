
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ section; int tag; int desc; int dumpId; struct TYPE_13__* next; } ;
typedef TYPE_1__ TocEntry ;
struct TYPE_14__ {int * currTableAm; int * currTablespace; int * currSchema; int * currUser; int public; TYPE_1__* toc; scalar_t__ restorePass; } ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_9(ArchiveHandle *VAR_4, TocEntry *VAR_5)
{
 bool VAR_6;
 TocEntry *VAR_7;

 FUNC_5("entering restore_toc_entries_prefork");


 FUNC_2(VAR_4);
 VAR_4->restorePass = VAR_0;
 VAR_6 = 0;
 for (VAR_7 = VAR_4->toc->next; VAR_7 != VAR_4->toc; VAR_7 = VAR_7->next)
 {
  bool VAR_8 = 1;

  if (VAR_7->section != VAR_3)
  {

   if (VAR_7->section == VAR_1 ||
    VAR_7->section == VAR_2)
   {
    VAR_8 = 0;
    VAR_6 = 1;
   }
   else
   {






    if (VAR_6)
     VAR_8 = 0;
   }
  }






  if (FUNC_1(VAR_7) != VAR_0)
   VAR_8 = 0;

  if (VAR_8)
  {

   FUNC_6("processing item %d %s %s",
      VAR_7->dumpId,
      VAR_7->desc, VAR_7->tag);

   (void) FUNC_8(VAR_4, VAR_7, 0);


   FUNC_7(VAR_4, VAR_7, ((void*)0));
  }
  else
  {

   FUNC_4(VAR_5, VAR_7);
  }
 }






 FUNC_0(&VAR_4->public);


 if (VAR_4->currUser)
  FUNC_3(VAR_4->currUser);
 VAR_4->currUser = ((void*)0);
 if (VAR_4->currSchema)
  FUNC_3(VAR_4->currSchema);
 VAR_4->currSchema = ((void*)0);
 if (VAR_4->currTablespace)
  FUNC_3(VAR_4->currTablespace);
 VAR_4->currTablespace = ((void*)0);
 if (VAR_4->currTableAm)
  FUNC_3(VAR_4->currTableAm);
 VAR_4->currTableAm = ((void*)0);
}
