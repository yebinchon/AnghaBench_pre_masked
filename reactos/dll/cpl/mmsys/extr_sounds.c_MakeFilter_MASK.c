
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*) ;

LPWSTR FUNC_2(LPWSTR VAR_1)
{
    WCHAR *VAR_2;

    FUNC_0(VAR_1[0] != VAR_0 &&
           VAR_1[FUNC_1(VAR_1) - 1] == L'|');
    for (VAR_2 = VAR_1; *VAR_2 != VAR_0; VAR_2++)
    {

        if (*VAR_2 == L'|')
        {
            *VAR_2 = VAR_0;
        }
    }
    return VAR_1;
}
