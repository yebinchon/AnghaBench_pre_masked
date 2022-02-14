
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nFreeBlocks; int freeBlocksLen; long* freeBlocks; } ;
typedef TYPE_1__ GISTBuildBuffers ;


 scalar_t__ FUNC_0 (long*,int) ;

__attribute__((used)) static void
FUNC_1(GISTBuildBuffers *VAR_0, long VAR_1)
{
 int VAR_2;


 if (VAR_0->nFreeBlocks >= VAR_0->freeBlocksLen)
 {
  VAR_0->freeBlocksLen *= 2;
  VAR_0->freeBlocks = (long *) FUNC_0(VAR_0->freeBlocks,
            VAR_0->freeBlocksLen *
            sizeof(long));
 }


 VAR_2 = VAR_0->nFreeBlocks++;
 VAR_0->freeBlocks[VAR_2] = VAR_1;
}
