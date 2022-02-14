
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_handle {unsigned int flags; } ;
typedef int errcode_t ;


 int FUNC_0 (struct ext2_xattr_handle*,int ) ;
 int VAR_0 ;

errcode_t FUNC_1(struct ext2_xattr_handle *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3)
{
 FUNC_0(VAR_1, VAR_0);
 if (VAR_3)
  *VAR_3 = VAR_1->flags;
 if (VAR_2)
  VAR_1->flags = *VAR_2;
 return 0;
}
