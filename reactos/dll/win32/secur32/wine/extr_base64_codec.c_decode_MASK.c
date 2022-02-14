
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char BYTE ;



__attribute__((used)) static inline BYTE FUNC_0(char VAR_0)
{
    if( VAR_0 >= 'A' && VAR_0 <= 'Z')
        return VAR_0 - 'A';
    if( VAR_0 >= 'a' && VAR_0 <= 'z')
        return VAR_0 - 'a' + 26;
    if( VAR_0 >= '0' && VAR_0 <= '9')
        return VAR_0 - '0' + 52;
    if( VAR_0 == '+')
        return 62;
    if( VAR_0 == '/')
        return 63;
    else
        return 64;
}
