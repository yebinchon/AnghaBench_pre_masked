
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int l_i_file_acl_high; } ;
struct TYPE_6__ {TYPE_1__ linux2; } ;
struct ext2_inode {TYPE_2__ osd2; scalar_t__ i_file_acl; } ;
typedef TYPE_3__* ext2_filsys ;
typedef scalar_t__ blk64_t ;
typedef int __u64 ;
struct TYPE_7__ {int super; } ;


 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(ext2_filsys VAR_0, struct ext2_inode *VAR_1,
          blk64_t VAR_2)
{
 VAR_1->i_file_acl = VAR_2;
 if (VAR_0 && FUNC_0(VAR_0->super))
  VAR_1->osd2.linux2.l_i_file_acl_high = (__u64) VAR_2 >> 32;
}
