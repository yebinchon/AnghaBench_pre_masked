
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PCWSTR ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static __inline BOOL
FUNC_0(PCWSTR VAR_1)
{
    PCWSTR VAR_2 = VAR_1;


    if (*VAR_2 != L'N' && *VAR_2 != L'n')
        return VAR_0;


    VAR_2++;
    if (*VAR_2 != L'E' && *VAR_2 != L'e')
        return VAR_0;


    VAR_2++;
    if (*VAR_2 == L'-')
        VAR_2++;


    while (*VAR_2 >= L'0' && *VAR_2 <= L'9')
        VAR_2++;


    if (*VAR_2 != ':')
        return VAR_0;


    VAR_2++;
    return (*VAR_2 == L'\0');
}
