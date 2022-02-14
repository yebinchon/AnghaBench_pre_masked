
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_handle {struct ext2_xattr_handle* attrs; } ;
typedef int errcode_t ;


 int FUNC_0 (struct ext2_xattr_handle*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ext2_xattr_handle**) ;
 int FUNC_2 (struct ext2_xattr_handle*) ;

errcode_t FUNC_3(struct ext2_xattr_handle **VAR_1)
{
 struct ext2_xattr_handle *VAR_2 = *VAR_1;

 FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_2);
 FUNC_1(&VAR_2->attrs);
 FUNC_1(VAR_1);
 return 0;
}
