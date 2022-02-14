
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ext2fs_block_bitmap ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ dgrp_t ;
typedef scalar_t__ blk_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_9__ {int s_first_meta_bg; int s_reserved_gdt_blocks; } ;
struct TYPE_8__ {int desc_blocks; int blocksize; scalar_t__ inode_blocks_per_group; TYPE_4__* super; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

int FUNC_7(ext2_filsys VAR_0,
     dgrp_t VAR_1,
     ext2fs_block_bitmap VAR_2)
{
 blk64_t VAR_3, VAR_4, VAR_5;
 blk_t VAR_6;
 int VAR_7, VAR_8;

 FUNC_6(VAR_0, VAR_1, &VAR_3,
      &VAR_4, &VAR_5, &VAR_6);

 if (FUNC_3(VAR_0->super))
  VAR_7 = VAR_0->super->s_first_meta_bg;
 else
  VAR_7 =
   VAR_0->desc_blocks + VAR_0->super->s_reserved_gdt_blocks;

 if (VAR_3 || (VAR_1 == 0))
  FUNC_4(VAR_2, VAR_3);
 if ((VAR_1 == 0) && (VAR_0->blocksize == 1024) &&
     FUNC_0(VAR_0) > 1)
  FUNC_4(VAR_2, 0);

 if (VAR_4) {
  VAR_8 = VAR_7;
  if (VAR_4 + VAR_8 >= FUNC_1(VAR_0->super))
   VAR_8 = FUNC_1(VAR_0->super) -
    VAR_4;
  FUNC_5(VAR_2, VAR_4, VAR_8);
 }
 if (VAR_5)
  FUNC_4(VAR_2, VAR_5);

 VAR_8 = FUNC_2(VAR_0, VAR_1);
 VAR_8 -= 2 + VAR_0->inode_blocks_per_group + VAR_6;

 return VAR_8 ;
}
