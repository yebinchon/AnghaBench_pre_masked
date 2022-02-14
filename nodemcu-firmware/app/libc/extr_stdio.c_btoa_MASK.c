
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u_int ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

char *
FUNC_2(char *VAR_0, u_int VAR_1, int VAR_2)
{
    char VAR_3[34], VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8;

    if (VAR_1 == 0) {
        VAR_0[0] = '0';
        VAR_0[1] = 0;
        return (VAR_0);
    }

    VAR_8 = 0;
    if (VAR_2 == -10) {
        VAR_2 = 10;
        if (VAR_1 & (1L << 31)) {
            VAR_1 = (~VAR_1) + 1;
            VAR_8 = 1;
        }
    }

    for (VAR_5 = 0; VAR_1 != 0; VAR_5++) {
        VAR_7 = VAR_1 % VAR_2;
        VAR_1 /= VAR_2;
        if (VAR_7 >= 0 && VAR_7 <= 9)
            VAR_4 = VAR_7 + '0';
        else if (VAR_7 >= 10 && VAR_7 <= 36)
            VAR_4 = (VAR_7 - 10) + 'a';
        VAR_3[VAR_5] = VAR_4;
    }

    VAR_3[VAR_5] = 0;
    if (VAR_8)
        FUNC_0 (VAR_3, "-");


    for (VAR_5 = 0, VAR_6 = FUNC_1 (VAR_3) - 1; VAR_6 >= 0; VAR_5++, VAR_6--)
        VAR_0[VAR_5] = VAR_3[VAR_6];
    VAR_0[VAR_5] = 0;
    return (VAR_0);
}
