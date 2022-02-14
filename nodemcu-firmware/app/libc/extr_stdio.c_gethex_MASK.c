
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int int32_t ;



int
FUNC_0(int32_t *VAR_0, char *VAR_1, int VAR_2)
{
    u_long VAR_3;
    int VAR_4;

    for (VAR_3 = 0; VAR_2 > 0; VAR_2--) {
        if (*VAR_1 == 0)
            return (0);
        if (*VAR_1 >= '0' && *VAR_1 <= '9')
            VAR_4 = *VAR_1 - '0';
        else if (*VAR_1 >= 'a' && *VAR_1 <= 'f')
            VAR_4 = *VAR_1 - 'a' + 10;
        else if (*VAR_1 >= 'A' && *VAR_1 <= 'F')
            VAR_4 = *VAR_1 - 'A' + 10;
        else
            return (0);

        VAR_3 <<= 4;
        VAR_3 |= VAR_4;
        VAR_1++;
    }
    *VAR_0 = VAR_3;
    return (1);
}
