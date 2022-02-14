
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int tableoid; int oid; } ;
struct TYPE_10__ {int reqs; int dumpId; char* tag; char* desc; int section; char* defn; char* dropStmt; char* copyStmt; char* namespace; char* tablespace; char* tableam; char* owner; int nDeps; int* dependencies; TYPE_1__ catalogId; scalar_t__ dataDumper; struct TYPE_10__* next; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_11__ {int (* WriteExtraTocPtr ) (TYPE_3__*,TYPE_2__*) ;TYPE_2__* toc; } ;
typedef TYPE_3__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

void
FUNC_4(ArchiveHandle *VAR_3)
{
 TocEntry *VAR_4;
 char VAR_5[32];
 int VAR_6;
 int VAR_7;


 VAR_6 = 0;
 for (VAR_4 = VAR_3->toc->next; VAR_4 != VAR_3->toc; VAR_4 = VAR_4->next)
 {
  if ((VAR_4->reqs & (VAR_1 | VAR_0 | VAR_2)) != 0)
   VAR_6++;
 }



 FUNC_0(VAR_3, VAR_6);

 for (VAR_4 = VAR_3->toc->next; VAR_4 != VAR_3->toc; VAR_4 = VAR_4->next)
 {
  if ((VAR_4->reqs & (VAR_1 | VAR_0 | VAR_2)) == 0)
   continue;

  FUNC_0(VAR_3, VAR_4->dumpId);
  FUNC_0(VAR_3, VAR_4->dataDumper ? 1 : 0);


  FUNC_2(VAR_5, "%u", VAR_4->catalogId.tableoid);
  FUNC_1(VAR_3, VAR_5);
  FUNC_2(VAR_5, "%u", VAR_4->catalogId.oid);
  FUNC_1(VAR_3, VAR_5);

  FUNC_1(VAR_3, VAR_4->tag);
  FUNC_1(VAR_3, VAR_4->desc);
  FUNC_0(VAR_3, VAR_4->section);
  FUNC_1(VAR_3, VAR_4->defn);
  FUNC_1(VAR_3, VAR_4->dropStmt);
  FUNC_1(VAR_3, VAR_4->copyStmt);
  FUNC_1(VAR_3, VAR_4->namespace);
  FUNC_1(VAR_3, VAR_4->tablespace);
  FUNC_1(VAR_3, VAR_4->tableam);
  FUNC_1(VAR_3, VAR_4->owner);
  FUNC_1(VAR_3, "false");


  for (VAR_7 = 0; VAR_7 < VAR_4->nDeps; VAR_7++)
  {
   FUNC_2(VAR_5, "%d", VAR_4->dependencies[VAR_7]);
   FUNC_1(VAR_3, VAR_5);
  }
  FUNC_1(VAR_3, ((void*)0));

  if (VAR_3->WriteExtraTocPtr)
   VAR_3->WriteExtraTocPtr(VAR_3, VAR_4);
 }
}
