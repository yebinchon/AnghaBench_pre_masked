
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL FUNC_0(WCHAR VAR_0)
{
    return (VAR_0 == ':') || (VAR_0 >= 'A' && VAR_0 <= 'Z') ||
           (VAR_0 == '_') || (VAR_0 >= 'a' && VAR_0 <= 'z') ||
           (VAR_0 >= 0xc0 && VAR_0 <= 0xd6) ||
           (VAR_0 >= 0xd8 && VAR_0 <= 0xf6) ||
           (VAR_0 >= 0xf8 && VAR_0 <= 0x2ff) ||
           (VAR_0 >= 0x370 && VAR_0 <= 0x37d) ||
           (VAR_0 >= 0x37f && VAR_0 <= 0x1fff) ||
           (VAR_0 >= 0x200c && VAR_0 <= 0x200d) ||
           (VAR_0 >= 0x2070 && VAR_0 <= 0x218f) ||
           (VAR_0 >= 0x2c00 && VAR_0 <= 0x2fef) ||
           (VAR_0 >= 0x3001 && VAR_0 <= 0xd7ff) ||
           (VAR_0 >= 0xd800 && VAR_0 <= 0xdbff) ||
           (VAR_0 >= 0xdc00 && VAR_0 <= 0xdfff) ||
           (VAR_0 >= 0xf900 && VAR_0 <= 0xfdcf) ||
           (VAR_0 >= 0xfdf0 && VAR_0 <= 0xfffd);
}
