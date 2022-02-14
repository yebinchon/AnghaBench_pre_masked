
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nFreeBlocks; int blocksSorted; long* freeBlocks; int nBlocksAllocated; } ;
typedef TYPE_1__ LogicalTapeSet ;


 int VAR_0 ;
 int FUNC_0 (void*,size_t,int,int ) ;

__attribute__((used)) static long
FUNC_1(LogicalTapeSet *VAR_1)
{





 if (VAR_1->nFreeBlocks > 0)
 {
  if (!VAR_1->blocksSorted)
  {
   FUNC_0((void *) VAR_1->freeBlocks, VAR_1->nFreeBlocks,
      sizeof(long), VAR_0);
   VAR_1->blocksSorted = 1;
  }
  return VAR_1->freeBlocks[--VAR_1->nFreeBlocks];
 }
 else
  return VAR_1->nBlocksAllocated++;
}
