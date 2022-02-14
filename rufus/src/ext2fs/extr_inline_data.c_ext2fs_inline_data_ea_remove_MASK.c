
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_handle {int dummy; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;


 scalar_t__ FUNC_0 (struct ext2_xattr_handle*,char*) ;
 int FUNC_1 (struct ext2_xattr_handle**) ;
 scalar_t__ FUNC_2 (int ,int ,struct ext2_xattr_handle**) ;
 scalar_t__ FUNC_3 (struct ext2_xattr_handle*) ;

errcode_t FUNC_4(ext2_filsys VAR_0, ext2_ino_t VAR_1)
{
 struct ext2_xattr_handle *VAR_2;
 errcode_t VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_0(VAR_2, "system.data");
err:
 (void) FUNC_1(&VAR_2);
 return VAR_3;
}
