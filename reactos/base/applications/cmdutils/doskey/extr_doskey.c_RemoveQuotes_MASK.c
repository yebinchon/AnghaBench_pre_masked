
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;


 int FUNC_0 (int*) ;

__attribute__((used)) static LPWSTR FUNC_1(LPWSTR VAR_0)
{
    WCHAR *VAR_1;
    if (*VAR_0 == L'"' && *(VAR_1 = VAR_0 + FUNC_0(VAR_0) - 1) == L'"')
    {
        VAR_0++;
        *VAR_1 = L'\0';
    }
    return VAR_0;
}
