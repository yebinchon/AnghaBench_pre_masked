
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ext2_sb; } ;
struct TYPE_4__ {scalar_t__ s_rev_level; int s_inode_size; int s_first_ino; } ;
typedef TYPE_1__* PEXT2_SUPER_BLOCK ;
typedef TYPE_2__* PEXT2_FILESYS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_0(PEXT2_FILESYS VAR_4)
{
    PEXT2_SUPER_BLOCK VAR_5 = VAR_4->ext2_sb;

    if (VAR_5->s_rev_level > VAR_3)
        return;

    VAR_5->s_rev_level = VAR_0;
    VAR_5->s_first_ino = VAR_1;
    VAR_5->s_inode_size = VAR_2;


}
