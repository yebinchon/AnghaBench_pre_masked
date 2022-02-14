
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char INT ;



__attribute__((used)) static INT FUNC_0(WCHAR VAR_0)
{
    if('0' <= VAR_0 && VAR_0 <= '9')
        return VAR_0 - '0';
    if('a' <= VAR_0 && VAR_0 <= 'z')
        return VAR_0 - 'a' + 10;
    if('A' <= VAR_0 && VAR_0 <= 'Z')
        return VAR_0 - 'A' + 10;
    return 100;
}
