
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* PDWORD ;
typedef int const* LPCWSTR ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int const*,char) ;

void FUNC_2(LPCWSTR VAR_0, PDWORD VAR_1, PDWORD VAR_2)
{
    const WCHAR *VAR_3;
    int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;

    VAR_4 = FUNC_0(VAR_0);
    VAR_3 = FUNC_1(VAR_0, '.');
    if (VAR_3)
    {
        VAR_5 = FUNC_0(VAR_3 + 1);
        VAR_3 = FUNC_1(VAR_3 + 1, '.');
    }
    if (VAR_3)
    {
        VAR_6 = FUNC_0(VAR_3 + 1);
        VAR_3 = FUNC_1(VAR_3 + 1, '.');
    }
    if (VAR_3)
        VAR_7 = FUNC_0(VAR_3 + 1);

    *VAR_1 = VAR_4 << 16 | VAR_5;
    if (VAR_2) *VAR_2 = VAR_6 << 16 | VAR_7;
}
