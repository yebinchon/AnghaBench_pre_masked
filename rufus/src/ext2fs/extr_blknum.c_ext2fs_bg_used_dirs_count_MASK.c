
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext4_group_desc {int bg_used_dirs_count; scalar_t__ bg_used_dirs_count_hi; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
typedef int __u32 ;
struct TYPE_4__ {int super; int group_desc; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct ext4_group_desc* FUNC_1 (TYPE_1__*,int ,int ) ;

__u32 FUNC_2(ext2_filsys VAR_0, dgrp_t VAR_1)
{
 struct ext4_group_desc *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_0->group_desc, VAR_1);
 return VAR_2->bg_used_dirs_count |
  (FUNC_0(VAR_0->super) ?
   (__u32) VAR_2->bg_used_dirs_count_hi << 16 : 0);
}
