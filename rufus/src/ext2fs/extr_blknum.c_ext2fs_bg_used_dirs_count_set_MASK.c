
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext4_group_desc {int bg_used_dirs_count; int bg_used_dirs_count_hi; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
typedef int __u32 ;
struct TYPE_4__ {int super; int group_desc; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct ext4_group_desc* FUNC_1 (TYPE_1__*,int ,int ) ;

void FUNC_2(ext2_filsys VAR_0, dgrp_t VAR_1, __u32 VAR_2)
{
 struct ext4_group_desc *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_0->group_desc, VAR_1);
 VAR_3->bg_used_dirs_count = VAR_2;
 if (FUNC_0(VAR_0->super))
  VAR_3->bg_used_dirs_count_hi = (__u32) VAR_2 >> 16;
}
