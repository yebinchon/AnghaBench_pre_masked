
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_super_block {int s_block_group_nr; } ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int dgrp_t ;
typedef int blk64_t ;
struct TYPE_4__ {int io; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct ext2_super_block*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,struct ext2_super_block*) ;

__attribute__((used)) static errcode_t FUNC_3(ext2_filsys VAR_1, dgrp_t VAR_2,
        blk64_t VAR_3,
        struct ext2_super_block *VAR_4)
{
 errcode_t VAR_5;
 dgrp_t VAR_6 = VAR_2;

 if (VAR_6 > ((1 << 16) - 1))
  VAR_6 = (1 << 16) - 1;

 VAR_4->s_block_group_nr = FUNC_0(VAR_6);

 VAR_5 = FUNC_1(VAR_1, VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_1->io, VAR_3, -VAR_0,
        VAR_4);
}
