
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0, int VAR_1)
{
    int VAR_2;

    switch(VAR_1)
    {
        case 16:
        case 32:

            for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
                VAR_0[VAR_2 * (VAR_1 / 8)] = VAR_2;
            break;
        case 24:
            VAR_0[0] = 0;
            VAR_0[3] = 1;

            VAR_0[8] = 2;
            VAR_0[11] = 3;
            break;
    }
}
