
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PWSTR ;
typedef scalar_t__* PWCHAR ;
typedef int* PLONG ;
typedef int LONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static
BOOL
FUNC_2(
    PWSTR VAR_3,
    PWSTR *VAR_4,
    PLONG VAR_5)
{
    PWCHAR VAR_6;
    LONG VAR_7 = 0;

    if (!FUNC_1(VAR_3[0]))
        return VAR_0;

    VAR_6 = VAR_3;
    while (FUNC_1(*VAR_6))
    {
        VAR_7 = VAR_7 * 10 + *VAR_6 - L'0';
        VAR_6++;
    }

    if (VAR_7 > 24)
        return VAR_0;

    if (VAR_7 == 24)
        VAR_7 = 0;

    if ((*VAR_6 != VAR_2) &&
        (VAR_7 >= 1) &&
        (VAR_7 <= 12))
    {
        if ((FUNC_0(VAR_6, VAR_4[0]) == 0) ||
            (FUNC_0(VAR_6, VAR_4[1]) == 0))
        {
            if (VAR_7 == 12)
                VAR_7 = 0;
        }
        else if ((FUNC_0(VAR_6, VAR_4[2]) == 0) ||
                 (FUNC_0(VAR_6, VAR_4[3]) == 0))
        {
            if (VAR_7 != 12)
                VAR_7 += 12;
        }
        else
        {
            return VAR_0;
        }
    }

    *VAR_5 = VAR_7;

    return VAR_1;
}
