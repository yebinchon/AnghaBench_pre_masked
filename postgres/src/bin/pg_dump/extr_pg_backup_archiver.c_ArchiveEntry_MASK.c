
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* dependencies; int nDeps; int hadDumper; scalar_t__ dataLength; int * formatData; int dataDumperArg; scalar_t__ dataDumper; int * copyStmt; int * dropStmt; int * defn; int * desc; int * owner; int * tableam; int * tablespace; int * namespace; int * tag; int section; scalar_t__ dumpId; int catalogId; struct TYPE_8__* prev; struct TYPE_8__* next; } ;
typedef TYPE_1__ TocEntry ;
struct TYPE_10__ {scalar_t__ maxDumpId; int (* ArchiveEntryPtr ) (TYPE_3__*,TYPE_1__*) ;TYPE_1__* toc; int tocCount; } ;
struct TYPE_9__ {int nDeps; scalar_t__ dumpFn; int dumpArg; int deps; scalar_t__ copyStmt; scalar_t__ dropStmt; scalar_t__ createStmt; scalar_t__ description; scalar_t__ owner; scalar_t__ tableam; scalar_t__ tablespace; scalar_t__ namespace; scalar_t__ tag; int section; } ;
typedef scalar_t__ DumpId ;
typedef int CatalogId ;
typedef TYPE_2__ ArchiveOpts ;
typedef TYPE_3__ ArchiveHandle ;
typedef int Archive ;


 int FUNC_0 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*) ;

TocEntry *
FUNC_5(Archive *VAR_0, CatalogId VAR_1, DumpId VAR_2,
    ArchiveOpts *VAR_3)
{
 ArchiveHandle *VAR_4 = (ArchiveHandle *) VAR_0;
 TocEntry *VAR_5;

 VAR_5 = (TocEntry *) FUNC_2(sizeof(TocEntry));

 VAR_4->tocCount++;
 if (VAR_2 > VAR_4->maxDumpId)
  VAR_4->maxDumpId = VAR_2;

 VAR_5->prev = VAR_4->toc->prev;
 VAR_5->next = VAR_4->toc;
 VAR_4->toc->prev->next = VAR_5;
 VAR_4->toc->prev = VAR_5;

 VAR_5->catalogId = VAR_1;
 VAR_5->dumpId = VAR_2;
 VAR_5->section = VAR_3->section;

 VAR_5->tag = FUNC_3(VAR_3->tag);
 VAR_5->namespace = VAR_3->namespace ? FUNC_3(VAR_3->namespace) : ((void*)0);
 VAR_5->tablespace = VAR_3->tablespace ? FUNC_3(VAR_3->tablespace) : ((void*)0);
 VAR_5->tableam = VAR_3->tableam ? FUNC_3(VAR_3->tableam) : ((void*)0);
 VAR_5->owner = VAR_3->owner ? FUNC_3(VAR_3->owner) : ((void*)0);
 VAR_5->desc = FUNC_3(VAR_3->description);
 VAR_5->defn = VAR_3->createStmt ? FUNC_3(VAR_3->createStmt) : ((void*)0);
 VAR_5->dropStmt = VAR_3->dropStmt ? FUNC_3(VAR_3->dropStmt) : ((void*)0);
 VAR_5->copyStmt = VAR_3->copyStmt ? FUNC_3(VAR_3->copyStmt) : ((void*)0);

 if (VAR_3->nDeps > 0)
 {
  VAR_5->dependencies = (DumpId *) FUNC_1(VAR_3->nDeps * sizeof(DumpId));
  FUNC_0(VAR_5->dependencies, VAR_3->deps, VAR_3->nDeps * sizeof(DumpId));
  VAR_5->nDeps = VAR_3->nDeps;
 }
 else
 {
  VAR_5->dependencies = ((void*)0);
  VAR_5->nDeps = 0;
 }

 VAR_5->dataDumper = VAR_3->dumpFn;
 VAR_5->dataDumperArg = VAR_3->dumpArg;
 VAR_5->hadDumper = VAR_3->dumpFn ? 1 : 0;

 VAR_5->formatData = ((void*)0);
 VAR_5->dataLength = 0;

 if (VAR_4->ArchiveEntryPtr != ((void*)0))
  VAR_4->ArchiveEntryPtr(VAR_4, VAR_5);

 return VAR_5;
}
