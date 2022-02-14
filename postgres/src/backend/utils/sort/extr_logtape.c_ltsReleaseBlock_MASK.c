
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nFreeBlocks; int freeBlocksLen; long* freeBlocks; int blocksSorted; scalar_t__ forgetFreeSpace; } ;
typedef TYPE_1__ LogicalTapeSet ;


 scalar_t__ FUNC_0 (long*,int) ;

__attribute__((used)) static void
FUNC_1(LogicalTapeSet *VAR_0, long VAR_1)
{
 int VAR_2;




 if (VAR_0->forgetFreeSpace)
  return;




 if (VAR_0->nFreeBlocks >= VAR_0->freeBlocksLen)
 {
  VAR_0->freeBlocksLen *= 2;
  VAR_0->freeBlocks = (long *) FUNC_0(VAR_0->freeBlocks,
           VAR_0->freeBlocksLen * sizeof(long));
 }





 VAR_2 = VAR_0->nFreeBlocks++;
 VAR_0->freeBlocks[VAR_2] = VAR_1;
 if (VAR_2 > 0 && VAR_0->freeBlocks[VAR_2 - 1] < VAR_1)
  VAR_0->blocksSorted = 0;
}
