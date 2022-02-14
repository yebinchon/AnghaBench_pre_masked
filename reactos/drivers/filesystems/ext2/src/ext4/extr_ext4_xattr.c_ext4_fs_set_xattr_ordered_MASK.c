
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_ref {int dummy; } ;
struct ext4_xattr_item {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 struct ext4_xattr_item* FUNC_0 (struct ext4_xattr_ref*,int ,char const*,size_t,void const*,size_t,int*) ;
 struct ext4_xattr_item* FUNC_1 (struct ext4_xattr_ref*,int ,char const*,size_t) ;

int FUNC_2(struct ext4_xattr_ref *VAR_1, __u8 VAR_2,
 const char *VAR_3, size_t VAR_4, const void *VAR_5,
 size_t VAR_6)
{
 int VAR_7 = 0;
 struct ext4_xattr_item *VAR_8 =
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_8) {
  VAR_7 = -VAR_0;
  goto Finish;
 }
 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
  VAR_5, VAR_6, &VAR_7);
Finish:
 return VAR_7;
}
