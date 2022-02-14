
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef unsigned int dgrp_t ;
typedef int blk_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_5__ {int inode_blocks_per_group; int super; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,unsigned int,scalar_t__*,scalar_t__*,scalar_t__*,int*) ;

int FUNC_3(ext2_filsys VAR_0,
        dgrp_t VAR_1,
        blk_t *VAR_2,
        blk_t *VAR_3,
        blk_t *VAR_4,
        int *VAR_5)
{
 blk64_t VAR_6;
 blk64_t VAR_7;
 blk64_t VAR_8;
 blk_t VAR_9;
 blk_t VAR_10;
 unsigned int VAR_11;

 FUNC_2(VAR_0, VAR_1, &VAR_6,
     &VAR_7,
     &VAR_8,
     &VAR_9);

 VAR_10 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2)
  *VAR_2 = (blk_t)VAR_6;
 if (VAR_3)
  *VAR_3 = (blk_t)VAR_7;
 if (VAR_4)
  *VAR_4 = (blk_t)VAR_8;
 if (VAR_5) {
  VAR_11 = FUNC_0(VAR_0->super);
  *VAR_5 = VAR_1 / VAR_11;
 }

 VAR_10 -= 2 + VAR_0->inode_blocks_per_group + VAR_9;

 return VAR_10;
}
