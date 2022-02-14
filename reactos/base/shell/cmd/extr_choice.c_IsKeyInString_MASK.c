
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef scalar_t__* LPTCH ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static INT
FUNC_1 (LPTSTR VAR_0, TCHAR VAR_1, BOOL VAR_2)
{
    LPTCH VAR_3 = VAR_0;
    INT VAR_4 = 0;

    while (*VAR_3)
    {
        if (VAR_2)
        {
            if (*VAR_3 == VAR_1)
                return VAR_4;
        }
        else
        {
            if (FUNC_0 (*VAR_3) == FUNC_0 (VAR_1))
                return VAR_4;
        }

        VAR_4++;
        VAR_3++;
    }

    return -1;
}
