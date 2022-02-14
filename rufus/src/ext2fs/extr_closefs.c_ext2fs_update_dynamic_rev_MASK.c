
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2_super_block {scalar_t__ s_rev_level; int s_inode_size; int s_first_ino; } ;
typedef TYPE_1__* ext2_filsys ;
struct TYPE_3__ {struct ext2_super_block* super; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_0(ext2_filsys VAR_4)
{
 struct ext2_super_block *VAR_5 = VAR_4->super;

 if (VAR_5->s_rev_level > VAR_3)
  return;

 VAR_5->s_rev_level = VAR_0;
 VAR_5->s_first_ino = VAR_1;
 VAR_5->s_inode_size = VAR_2;


}
