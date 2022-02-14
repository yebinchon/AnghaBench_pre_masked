
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (scalar_t__,int *) ;
 scalar_t__* FUNC_1 (scalar_t__**,scalar_t__* (*) (scalar_t__,int *)) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__* FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;

BOOL
FUNC_5(TCHAR *VAR_3, TCHAR *VAR_4)
{
    TCHAR *VAR_5 = &VAR_4[VAR_0 - 1];
    while (*VAR_3)
    {
        if (VAR_3[0] == FUNC_2('%'))
        {
            BOOL VAR_6;
            LPTSTR VAR_7 = &VAR_3[2];
            LPTSTR VAR_8 = ((void*)0);

            if (VAR_3[1] == FUNC_2('~'))
                VAR_8 = FUNC_1(&VAR_7, FUNC_0);

            if (!VAR_8)
                VAR_8 = FUNC_0(VAR_3[1], &VAR_6);

            if (VAR_8)
            {
                if (VAR_4 + FUNC_4(VAR_8) > VAR_5)
                    return VAR_1;
                VAR_4 = FUNC_3(VAR_4, VAR_8);
                VAR_3 = VAR_7;
                continue;
            }
        }

        if (VAR_4 >= VAR_5)
            return VAR_1;
        *VAR_4++ = *VAR_3++;
    }
    *VAR_4 = FUNC_2('\0');
    return VAR_2;
}
