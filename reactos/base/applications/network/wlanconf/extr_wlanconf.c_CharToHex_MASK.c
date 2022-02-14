
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UCHAR ;



__attribute__((used)) static
UCHAR
FUNC_0(WCHAR VAR_0)
{
    if ((VAR_0 >= L'0') && (VAR_0 <= L'9'))
        return VAR_0 - L'0';

    if ((VAR_0 >= L'a') && (VAR_0 <= L'f'))
        return VAR_0 - L'a' + 10;

    if ((VAR_0 >= L'A') && (VAR_0 <= L'F'))
        return VAR_0 - L'A' + 10;

    return 0;
}
