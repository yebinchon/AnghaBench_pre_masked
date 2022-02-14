
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode {int dummy; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int __u32 ;


 int FUNC_0 (struct ext2_inode*) ;
 scalar_t__ FUNC_1 (int ,int ,struct ext2_inode*) ;

__attribute__((used)) static errcode_t FUNC_2(ext2_filsys VAR_0, ext2_ino_t VAR_1, __u32 *VAR_2)
{
 struct ext2_inode VAR_3;
 errcode_t VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;
 *VAR_2 = FUNC_0(&VAR_3);
 return 0;
}
