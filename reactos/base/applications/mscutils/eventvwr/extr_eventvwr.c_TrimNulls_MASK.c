
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;

void
FUNC_2(LPWSTR VAR_0)
{
    WCHAR *VAR_1;

    if (VAR_0 != ((void*)0))
    {
        VAR_1 = VAR_0 + FUNC_1(VAR_0) - 1;
        while (VAR_1 >= VAR_0 && FUNC_0(*VAR_1))
            --VAR_1;
        *++VAR_1 = L'\0';
    }
}
