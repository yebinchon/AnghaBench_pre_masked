
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* LPWSTR ;
typedef int* LPINT ;
typedef int* LPCWSTR ;
typedef int INT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static void FUNC_2(LPCWSTR VAR_1, INT VAR_2, LPWSTR VAR_3, LPINT VAR_4)
{
    int VAR_5, VAR_6 = 0, VAR_7 = 0;

    while (VAR_6 < VAR_2)
    {
        if (VAR_1[VAR_6] == VAR_0 || (FUNC_0(VAR_1[VAR_6]) && VAR_1[VAR_6] != L' '))
        {
            if (VAR_6 < VAR_2 - 1 && VAR_1[VAR_6 + 1] == VAR_0)
                VAR_3[VAR_7++] = VAR_1[VAR_6++];
            else
                VAR_6++;
        }
        else
        {
            VAR_3[VAR_7++] = VAR_1[VAR_6++];
        }
    }

    VAR_3[VAR_7] = L'\0';
    VAR_5 = FUNC_1(VAR_3);
    *VAR_4 = VAR_5;
}
