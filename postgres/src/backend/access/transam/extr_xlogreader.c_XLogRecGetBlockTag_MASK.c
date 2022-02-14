
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_4__ {TYPE_2__* blocks; } ;
typedef TYPE_1__ XLogReaderState ;
struct TYPE_5__ {int blkno; int forknum; int rnode; int in_use; } ;
typedef int RelFileNode ;
typedef int ForkNumber ;
typedef TYPE_2__ DecodedBkpBlock ;
typedef int BlockNumber ;



bool
FUNC_0(XLogReaderState *VAR_0, uint8 VAR_1,
       RelFileNode *VAR_2, ForkNumber *VAR_3, BlockNumber *VAR_4)
{
 DecodedBkpBlock *VAR_5;

 if (!VAR_0->blocks[VAR_1].in_use)
  return 0;

 VAR_5 = &VAR_0->blocks[VAR_1];
 if (VAR_2)
  *VAR_2 = VAR_5->rnode;
 if (VAR_3)
  *VAR_3 = VAR_5->forknum;
 if (VAR_4)
  *VAR_4 = VAR_5->blkno;
 return 1;
}
