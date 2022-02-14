
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext4_group_desc {int bg_inode_bitmap_csum_lo; int bg_inode_bitmap_csum_hi; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef int dgrp_t ;
typedef int __u32 ;
struct TYPE_4__ {int super; int csum_seed; int group_desc; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ) ;

errcode_t FUNC_4(ext2_filsys VAR_1, dgrp_t VAR_2,
           char *VAR_3, int VAR_4)
{
 __u32 VAR_5;
 struct ext4_group_desc *VAR_6 = (struct ext4_group_desc *)
   FUNC_2(VAR_1, VAR_1->group_desc, VAR_2);

 if (!FUNC_3(VAR_1->super))
  return 0;

 VAR_5 = FUNC_1(VAR_1->csum_seed, (unsigned char *)VAR_3, VAR_4);
 VAR_6->bg_inode_bitmap_csum_lo = VAR_5 & 0xFFFF;
 if (FUNC_0(VAR_1->super) >= VAR_0)
  VAR_6->bg_inode_bitmap_csum_hi = VAR_5 >> 16;

 return 0;
}
