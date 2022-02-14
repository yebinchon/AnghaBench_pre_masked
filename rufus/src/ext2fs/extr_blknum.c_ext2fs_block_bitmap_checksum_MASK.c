
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext4_group_desc {int bg_block_bitmap_csum_lo; scalar_t__ bg_block_bitmap_csum_hi; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
typedef int __u32 ;
struct TYPE_4__ {int super; int group_desc; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct ext4_group_desc* FUNC_1 (TYPE_1__*,int ,int ) ;

__u32 FUNC_2(ext2_filsys VAR_1, dgrp_t VAR_2)
{
 struct ext4_group_desc *VAR_3;
 __u32 VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_1->group_desc, VAR_2);
 VAR_4 = VAR_3->bg_block_bitmap_csum_lo;
 if (FUNC_0(VAR_1->super) >= VAR_0)
  VAR_4 |= ((__u32)VAR_3->bg_block_bitmap_csum_hi << 16);
 return VAR_4;
}
