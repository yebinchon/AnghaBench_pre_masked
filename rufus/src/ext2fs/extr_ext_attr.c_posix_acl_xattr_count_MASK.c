
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int posix_acl_xattr_header ;
typedef int posix_acl_xattr_entry ;



__attribute__((used)) static inline int
FUNC_0(size_t VAR_0)
{
        if (VAR_0 < sizeof(posix_acl_xattr_header))
                return -1;
        VAR_0 -= sizeof(posix_acl_xattr_header);
        if (VAR_0 % sizeof(posix_acl_xattr_entry))
                return -1;
        return VAR_0 / sizeof(posix_acl_xattr_entry);
}
