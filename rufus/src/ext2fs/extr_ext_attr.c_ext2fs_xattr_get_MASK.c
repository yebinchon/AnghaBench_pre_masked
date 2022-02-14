
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_handle {int count; int flags; struct ext2_xattr* attrs; } ;
struct ext2_xattr {char const* name; size_t value_len; int value; } ;
typedef scalar_t__ errcode_t ;


 int FUNC_0 (struct ext2_xattr_handle*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,size_t,void**,size_t*) ;
 scalar_t__ FUNC_2 (size_t,char**) ;
 int FUNC_3 (char*,int ,size_t) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

errcode_t FUNC_5(struct ext2_xattr_handle *VAR_3, const char *VAR_4,
      void **VAR_5, size_t *VAR_6)
{
 struct ext2_xattr *VAR_7;
 char *VAR_8;
 errcode_t VAR_9;

 FUNC_0(VAR_3, VAR_1);
 for (VAR_7 = VAR_3->attrs; VAR_7 < VAR_3->attrs + VAR_3->count; VAR_7++) {
  if (FUNC_4(VAR_7->name, VAR_4))
   continue;

  if (!(VAR_3->flags & VAR_2) &&
      ((FUNC_4(VAR_4, "system.posix_acl_default") == 0) ||
       (FUNC_4(VAR_4, "system.posix_acl_access") == 0))) {
   VAR_9 = FUNC_1(VAR_7->value, VAR_7->value_len,
              VAR_5, VAR_6);
   return VAR_9;
  } else {
   VAR_9 = FUNC_2(VAR_7->value_len, &VAR_8);
   if (VAR_9)
    return VAR_9;
   FUNC_3(VAR_8, VAR_7->value, VAR_7->value_len);
   *VAR_5 = VAR_8;
   *VAR_6 = VAR_7->value_len;
   return 0;
  }
 }

 return VAR_0;
}
