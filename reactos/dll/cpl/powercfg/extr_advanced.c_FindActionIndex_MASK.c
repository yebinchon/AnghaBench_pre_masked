
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ POWER_ACTION ;
typedef size_t INT ;
typedef scalar_t__ DWORD ;



__attribute__((used)) static INT
FUNC_0(POWER_ACTION * VAR_0, DWORD VAR_1, POWER_ACTION VAR_2)
{
    INT VAR_3;

    for (VAR_3 = 0; VAR_3 < (INT)VAR_1; VAR_3++)
    {
        if (VAR_0[VAR_3] == VAR_2)
            return VAR_3;
    }

    return -1;
}
