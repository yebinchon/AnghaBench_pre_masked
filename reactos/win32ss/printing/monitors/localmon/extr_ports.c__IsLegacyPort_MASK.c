
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int*,int const) ;

__attribute__((used)) static __inline BOOL
FUNC_1(PCWSTR VAR_1, PCWSTR VAR_2)
{
    const DWORD VAR_3 = 3;
    PCWSTR VAR_4 = VAR_1;


    if (FUNC_0(VAR_4, VAR_2, VAR_3) != 0)
        return VAR_0;

    VAR_4 += VAR_3;


    while (*VAR_4 >= L'0' && *VAR_4 <= L'9')
        VAR_4++;


    if (*VAR_4 != ':')
        return VAR_0;


    VAR_4++;
    return (*VAR_4 == L'\0');
}
