
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;
typedef int * LPCTSTR ;


 scalar_t__ FUNC_0 (scalar_t__) ;

LPTSTR FUNC_1(LPCTSTR VAR_0, LPCTSTR VAR_1)
{
    LPTSTR VAR_2 = (LPTSTR)VAR_0;
    LPTSTR VAR_3, VAR_4;

    if (!*VAR_1)
        return (LPTSTR)VAR_0;

    while (*VAR_2)
    {
        VAR_3 = VAR_2;
        VAR_4 = (LPTSTR)VAR_1;

        while (*VAR_3 && *VAR_4 && (FUNC_0(*VAR_3) == FUNC_0(*VAR_4)))
            ++VAR_3, ++VAR_4;

        if (!*VAR_4)
            return VAR_2;

        ++VAR_2;
    }

    return ((void*)0);
}
