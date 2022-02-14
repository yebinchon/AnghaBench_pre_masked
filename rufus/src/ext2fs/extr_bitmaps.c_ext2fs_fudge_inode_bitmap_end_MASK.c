
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ext2fs_inode_bitmap ;
typedef int ext2fs_generic_bitmap ;
typedef int ext2_ino_t ;
typedef int errcode_t ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;

errcode_t FUNC_1(ext2fs_inode_bitmap VAR_1,
     ext2_ino_t VAR_2, ext2_ino_t *VAR_3)
{
 __u64 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0((ext2fs_generic_bitmap) VAR_1,
            VAR_0,
            VAR_2, &VAR_4);
 if (VAR_3)
  *VAR_3 = VAR_4;
 return VAR_5;
}
