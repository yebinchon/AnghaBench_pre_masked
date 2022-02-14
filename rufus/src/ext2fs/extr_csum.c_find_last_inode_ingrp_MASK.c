
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext2fs_inode_bitmap ;
typedef int ext2_ino_t ;
typedef int dgrp_t ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static __u32 FUNC_1(ext2fs_inode_bitmap VAR_0,
       __u32 VAR_1, dgrp_t VAR_2)
{
 ext2_ino_t VAR_3, VAR_4, VAR_5;

 VAR_4 = VAR_2 * VAR_1 + 1;
 VAR_5 = VAR_4 + VAR_1 - 1;

 for (VAR_3 = VAR_5; VAR_3 >= VAR_4; VAR_3--) {
  if (FUNC_0(VAR_0, VAR_3))
   return VAR_3 - VAR_4 + 1;
 }
 return VAR_1;
}
