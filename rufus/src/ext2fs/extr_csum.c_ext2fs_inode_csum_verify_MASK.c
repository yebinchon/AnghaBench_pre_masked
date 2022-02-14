
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_inode_large {scalar_t__ i_extra_isize; int i_checksum_hi; int i_checksum_lo; } ;
struct ext2_inode {int dummy; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int __u32 ;
struct TYPE_4__ {int super; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,struct ext2_inode_large*,int*,unsigned int) ;
 int FUNC_3 (int ) ;

int FUNC_4(ext2_filsys VAR_2, ext2_ino_t VAR_3,
        struct ext2_inode_large *VAR_4)
{
 errcode_t VAR_5;
 __u32 VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;
 char *VAR_10;

 if (!FUNC_1(VAR_2->super))
  return 1;

 VAR_9 = (FUNC_0(VAR_2->super) > VAR_0 &&
    VAR_4->i_extra_isize >= VAR_1);

 VAR_6 = FUNC_3(VAR_4->i_checksum_lo);
 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_7, VAR_9);
 if (VAR_5)
  return 0;
 if (VAR_9) {
  __u32 VAR_11 = FUNC_3(VAR_4->i_checksum_hi);
  VAR_6 |= VAR_11 << 16;
 } else
  VAR_7 &= 0xFFFF;

 if (VAR_6 == VAR_7)
  return 1;
 for (VAR_10 = (char *) VAR_4, VAR_8 = 0;
      VAR_8 < sizeof(struct ext2_inode);
      VAR_10++, VAR_8++)
  if (*VAR_10)
   return 0;
 return 1;
}
