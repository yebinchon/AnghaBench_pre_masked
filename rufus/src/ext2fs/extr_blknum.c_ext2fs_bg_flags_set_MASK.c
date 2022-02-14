
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext4_group_desc {int bg_flags; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
typedef int __u16 ;
struct TYPE_4__ {int group_desc; } ;


 struct ext4_group_desc* FUNC_0 (TYPE_1__*,int ,int ) ;

void FUNC_1(ext2_filsys VAR_0, dgrp_t VAR_1, __u16 VAR_2)
{
 struct ext4_group_desc *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_0->group_desc, VAR_1);
 VAR_3->bg_flags |= VAR_2;
 return;
}
