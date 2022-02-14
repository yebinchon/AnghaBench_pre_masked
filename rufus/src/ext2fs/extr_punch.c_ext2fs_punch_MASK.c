
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode {int i_flags; int i_size; int i_blocks; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,struct ext2_inode*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,struct ext2_inode*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int,struct ext2_inode*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int,struct ext2_inode*) ;
 scalar_t__ FUNC_4 (int ,int,struct ext2_inode*) ;
 int FUNC_5 (char*,int,int,int) ;

errcode_t FUNC_6(ext2_filsys VAR_3, ext2_ino_t VAR_4,
         struct ext2_inode *VAR_5,
         char *VAR_6, blk64_t VAR_7,
         blk64_t VAR_8)
{
 errcode_t VAR_9;
 struct ext2_inode VAR_10;

 if (VAR_7 > VAR_8)
  return VAR_0;


 if (!VAR_5) {
  VAR_9 = FUNC_3(VAR_3, VAR_4, &VAR_10);
  if (VAR_9)
   return VAR_9;
  VAR_5 = &VAR_10;
 }
 if (VAR_5->i_flags & VAR_2)
  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8);
 else if (VAR_5->i_flags & VAR_1)
  VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8);
 else
  VAR_9 = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9)
  return VAR_9;





 return FUNC_4(VAR_3, VAR_4, VAR_5);
}
