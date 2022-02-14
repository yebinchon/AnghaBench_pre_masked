
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ l_i_blocks_hi; } ;
struct TYPE_6__ {TYPE_1__ linux2; } ;
struct ext2_inode {int i_blocks; scalar_t__ i_file_acl; TYPE_2__ osd2; } ;
typedef TYPE_3__* ext2_filsys ;
typedef int blk64_t ;
typedef int __u64 ;
struct TYPE_7__ {int super; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

blk64_t FUNC_2(ext2_filsys VAR_0,
     struct ext2_inode *VAR_1)
{
 return (VAR_1->i_blocks |
  (FUNC_1(VAR_0->super) ?
   (__u64) VAR_1->osd2.linux2.l_i_blocks_hi << 32 : 0)) -
  (VAR_1->i_file_acl ? FUNC_0(VAR_0->super) >> 9 : 0);
}
