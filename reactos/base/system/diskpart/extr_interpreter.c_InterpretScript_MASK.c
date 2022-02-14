
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int args_vector ;
typedef int* LPWSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int**) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int**,int ,int) ;

BOOL
FUNC_3(LPWSTR VAR_3)
{
    LPWSTR VAR_4[VAR_1];
    INT VAR_5 = 0;
    BOOL VAR_6 = VAR_2;
    LPWSTR VAR_7;

    FUNC_2(VAR_4, 0, sizeof(VAR_4));

    VAR_7 = VAR_3;
    while (*VAR_7 != 0)
    {
        if (FUNC_1(*VAR_7) || *VAR_7 == L'\n')
        {
            *VAR_7 = 0;
            VAR_6 = VAR_2;
        }
        else
        {
            if ((VAR_6 != VAR_0) && (VAR_5 < VAR_1))
            {
                VAR_4[VAR_5] = VAR_7;
                VAR_5++;
            }

            VAR_6 = VAR_0;
        }

        VAR_7++;
    }


    return FUNC_0(VAR_5, VAR_4);
}
