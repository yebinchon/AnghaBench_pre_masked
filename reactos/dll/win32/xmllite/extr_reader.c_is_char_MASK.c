
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL FUNC_0(WCHAR VAR_0)
{
    return (VAR_0 == '\t') || (VAR_0 == '\r') || (VAR_0 == '\n') ||
           (VAR_0 >= 0x20 && VAR_0 <= 0xd7ff) ||
           (VAR_0 >= 0xd800 && VAR_0 <= 0xdbff) ||
           (VAR_0 >= 0xdc00 && VAR_0 <= 0xdfff) ||
           (VAR_0 >= 0xe000 && VAR_0 <= 0xfffd);
}
