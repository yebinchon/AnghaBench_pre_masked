
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1(
    LPTSTR VAR_0,
    LPTSTR VAR_1,
    LPTSTR VAR_2)
{

    while (*VAR_1 != 0)
    {
        if (*VAR_1 == FUNC_0('*'))
        {
            VAR_1++;
            while ((*VAR_0 != 0) && (*VAR_0 != *VAR_1))
            {
                *VAR_2++ = *VAR_0++;
            }
        }
        else if (*VAR_1 == FUNC_0('?'))
        {
            VAR_1++;
            if (*VAR_0 != 0)
            {
                *VAR_2++ = *VAR_0++;
            }
        }
        else
        {
            *VAR_2++ = *VAR_1++;
            if (*VAR_0 != 0)
                VAR_0++;
        }
    }

    *VAR_2 = 0;
}
