
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ l_i_file_acl_high; } ;
struct TYPE_6__ {TYPE_1__ linux2; } ;
struct ext2_inode {int i_file_acl; TYPE_2__ osd2; } ;
typedef TYPE_3__* ext2_filsys ;
typedef int blk64_t ;
typedef int __u64 ;
struct TYPE_7__ {int super; } ;


 scalar_t__ FUNC_0 (int ) ;

blk64_t FUNC_1(ext2_filsys VAR_0, const struct ext2_inode *VAR_1)
{
 blk64_t VAR_2 = VAR_1->i_file_acl;

 if (VAR_0 && FUNC_0(VAR_0->super))
  VAR_2 |= ((__u64) VAR_1->osd2.linux2.l_i_file_acl_high) << 32;
 return VAR_2;
}
