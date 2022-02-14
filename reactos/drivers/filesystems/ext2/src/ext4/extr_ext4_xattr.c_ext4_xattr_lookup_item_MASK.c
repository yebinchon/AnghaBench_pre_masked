
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_ref {int dummy; } ;
struct ext4_xattr_item {scalar_t__ member_2; char* member_3; size_t member_4; int is_data; int member_1; int member_0; } ;
typedef scalar_t__ __u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext4_xattr_item* FUNC_0 (struct ext4_xattr_ref*,struct ext4_xattr_item*) ;
 int FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static struct ext4_xattr_item *
FUNC_2(struct ext4_xattr_ref *VAR_3, __u8 VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct ext4_xattr_item VAR_7 = {
  VAR_1,
  VAR_1,
  VAR_4,
  (char *)VAR_5,
  VAR_6,
 };
 if (VAR_4 == VAR_0 &&
     VAR_6 == 4 &&
     !FUNC_1(VAR_5, "data", 4))
  VAR_7.is_data = VAR_2;

 return FUNC_0(VAR_3, &VAR_7);
}
