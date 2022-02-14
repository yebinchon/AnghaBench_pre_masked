
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext4_group_desc {int bg_inode_bitmap; scalar_t__ bg_inode_bitmap_hi; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
typedef int blk64_t ;
typedef int __u64 ;
struct TYPE_4__ {int super; int group_desc; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct ext4_group_desc* FUNC_1 (TYPE_1__*,int ,int ) ;

blk64_t FUNC_2(ext2_filsys VAR_0, dgrp_t VAR_1)
{
 struct ext4_group_desc *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_0->group_desc, VAR_1);
 return VAR_2->bg_inode_bitmap |
  (FUNC_0(VAR_0->super) ?
   (__u64) VAR_2->bg_inode_bitmap_hi << 32 : 0);
}
