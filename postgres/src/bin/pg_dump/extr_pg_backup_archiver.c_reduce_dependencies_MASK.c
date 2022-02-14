
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nRevDeps; size_t* revDeps; scalar_t__ depCount; int * pending_prev; int dumpId; } ;
typedef TYPE_1__ TocEntry ;
struct TYPE_9__ {scalar_t__ restorePass; TYPE_1__** tocsByDumpId; } ;
typedef int ParallelReadyList ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(ArchiveHandle *VAR_0, TocEntry *VAR_1,
     ParallelReadyList *VAR_2)
{
 int VAR_3;

 FUNC_3("reducing dependencies for %d", VAR_1->dumpId);

 for (VAR_3 = 0; VAR_3 < VAR_1->nRevDeps; VAR_3++)
 {
  TocEntry *VAR_4 = VAR_0->tocsByDumpId[VAR_1->revDeps[VAR_3]];

  FUNC_0(VAR_4->depCount > 0);
  VAR_4->depCount--;
  if (VAR_4->depCount == 0 &&
   FUNC_1(VAR_4) == VAR_0->restorePass &&
   VAR_4->pending_prev != ((void*)0) &&
   VAR_2 != ((void*)0))
  {

   FUNC_2(VAR_4);

   FUNC_4(VAR_2, VAR_4);
  }
 }
}
