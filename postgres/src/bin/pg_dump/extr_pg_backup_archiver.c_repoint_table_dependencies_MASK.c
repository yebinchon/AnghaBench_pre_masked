
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ section; int nDeps; size_t* dependencies; int dumpId; int dataLength; struct TYPE_4__* next; } ;
typedef TYPE_1__ TocEntry ;
struct TYPE_5__ {size_t maxDumpId; scalar_t__* tableDataId; TYPE_1__** tocsByDumpId; TYPE_1__* toc; } ;
typedef size_t DumpId ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,size_t,size_t) ;

__attribute__((used)) static void
FUNC_2(ArchiveHandle *VAR_1)
{
 TocEntry *VAR_2;
 int VAR_3;
 DumpId VAR_4;

 for (VAR_2 = VAR_1->toc->next; VAR_2 != VAR_1->toc; VAR_2 = VAR_2->next)
 {
  if (VAR_2->section != VAR_0)
   continue;
  for (VAR_3 = 0; VAR_3 < VAR_2->nDeps; VAR_3++)
  {
   VAR_4 = VAR_2->dependencies[VAR_3];
   if (VAR_4 <= VAR_1->maxDumpId &&
    VAR_1->tableDataId[VAR_4] != 0)
   {
    DumpId VAR_5 = VAR_1->tableDataId[VAR_4];
    TocEntry *VAR_6 = VAR_1->tocsByDumpId[VAR_5];

    VAR_2->dependencies[VAR_3] = VAR_5;
    VAR_2->dataLength = FUNC_0(VAR_2->dataLength, VAR_6->dataLength);
    FUNC_1("transferring dependency %d -> %d to %d",
        VAR_2->dumpId, VAR_4, VAR_5);
   }
  }
 }
}
