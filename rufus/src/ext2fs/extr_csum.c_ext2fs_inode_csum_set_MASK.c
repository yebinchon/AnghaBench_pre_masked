
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_inode_large {scalar_t__ i_extra_isize; void* i_checksum_hi; void* i_checksum_lo; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int __u32 ;
struct TYPE_4__ {int super; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,struct ext2_inode_large*,int*,int) ;

errcode_t FUNC_4(ext2_filsys VAR_2, ext2_ino_t VAR_3,
      struct ext2_inode_large *VAR_4)
{
 errcode_t VAR_5;
 __u32 VAR_6;
 int VAR_7;

 if (!FUNC_2(VAR_2->super))
  return 0;

 VAR_7 = (FUNC_0(VAR_2->super) > VAR_0 &&
    VAR_4->i_extra_isize >= VAR_1);

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_6, VAR_7);
 if (VAR_5)
  return VAR_5;
 VAR_4->i_checksum_lo = FUNC_1(VAR_6 & 0xFFFF);
 if (VAR_7)
  VAR_4->i_checksum_hi = FUNC_1(VAR_6 >> 16);
 return 0;
}
