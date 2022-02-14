
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 size_t FUNC_1 (scalar_t__*) ;

LPTSTR FUNC_2(LPTSTR VAR_1)
{
    size_t VAR_2 = 0;

    if (!VAR_1 || (VAR_2 = FUNC_1(VAR_1)) >= VAR_0)
        return ((void*)0);

    if (VAR_2 >= 1)
    {
        VAR_1 += VAR_2 - 1;
        if (*VAR_1++ != FUNC_0('\\'))
        {
            *VAR_1++ = FUNC_0('\\');
            *VAR_1 = FUNC_0('\0');
        }
    }

    return VAR_1;
}
