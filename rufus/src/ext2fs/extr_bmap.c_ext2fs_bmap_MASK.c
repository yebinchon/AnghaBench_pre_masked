
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode {int dummy; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef long long blk_t ;
typedef long long blk64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct ext2_inode*,char*,int,long long,int ,long long*) ;

errcode_t FUNC_1(ext2_filsys VAR_1, ext2_ino_t VAR_2, struct ext2_inode *VAR_3,
        char *VAR_4, int VAR_5, blk_t VAR_6,
        blk_t *VAR_7)
{
 errcode_t VAR_8;
 blk64_t VAR_9 = *VAR_7;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
       0, &VAR_9);
 if (VAR_8)
  return VAR_8;
 if (VAR_9 >= ((long long) 1 << 32))
  return VAR_0;
 *VAR_7 = VAR_9;
 return 0;
}
