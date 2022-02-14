
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t dumpId; scalar_t__ reqs; int tag; } ;
typedef TYPE_1__ TocEntry ;
struct TYPE_6__ {size_t* tableDataId; TYPE_1__** tocsByDumpId; } ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{
 FUNC_0("table \"%s\" could not be created, will not restore its data",
    VAR_1->tag);

 if (VAR_0->tableDataId[VAR_1->dumpId] != 0)
 {
  TocEntry *VAR_2 = VAR_0->tocsByDumpId[VAR_0->tableDataId[VAR_1->dumpId]];

  VAR_2->reqs = 0;
 }
}
