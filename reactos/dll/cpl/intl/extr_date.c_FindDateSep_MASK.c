
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef size_t UINT ;
typedef int* PWSTR ;
typedef int* LPWSTR ;
typedef int* LPTSTR ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int*,int ) ;
 size_t FUNC_4 (int const*) ;

LPTSTR
FUNC_5(const WCHAR *VAR_2)
{
    PWSTR VAR_3;
    UINT VAR_4=0;
    UINT VAR_5=0;

    VAR_3 = (LPWSTR)FUNC_1(FUNC_0(), 0, VAR_0 * sizeof(WCHAR));
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    FUNC_3(VAR_3,VAR_1);

    while (VAR_4 < FUNC_4(VAR_2))
    {
        if (!FUNC_2(VAR_2[VAR_4]) && (VAR_2[VAR_4] != L'\''))
        {
            while (!FUNC_2(VAR_2[VAR_4]) && (VAR_2[VAR_4] != L'\''))
            {
                VAR_3[VAR_5++] = VAR_2[VAR_4];
                VAR_4++;
            }

            VAR_3[VAR_5] = L'\0';
            return VAR_3;
        }

        VAR_4++;
    }

    return VAR_3;
}
