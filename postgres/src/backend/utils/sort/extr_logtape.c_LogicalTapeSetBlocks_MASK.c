
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long nBlocksAllocated; long nHoleBlocks; } ;
typedef TYPE_1__ LogicalTapeSet ;



long
FUNC_0(LogicalTapeSet *VAR_0)
{
 return VAR_0->nBlocksAllocated - VAR_0->nHoleBlocks;
}
