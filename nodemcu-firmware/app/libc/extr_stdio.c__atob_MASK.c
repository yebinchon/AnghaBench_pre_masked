
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_quad_t ;
typedef int tmp ;


 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2 (u_quad_t *VAR_0, char *VAR_1, int VAR_2)
{
    u_quad_t VAR_3, VAR_4, VAR_5;
    char *VAR_6, VAR_7[20];
    int VAR_8;

    if (VAR_1[0] == '0' && (VAR_1[1] == 'x' || VAR_1[1] == 'X')) {
        VAR_2 = 16;
        VAR_1 += 2;
    }

    if (VAR_2 == 16 && (VAR_6 = FUNC_0 (VAR_1, '.')) != 0) {
        if (VAR_6 - VAR_1 > sizeof(VAR_7) - 1)
            return (0);

        FUNC_1 (VAR_7, VAR_1, VAR_6 - VAR_1);
        VAR_7[VAR_6 - VAR_1] = '\0';
        if (!FUNC_2 (&VAR_4, VAR_7, 16))
            return (0);

        VAR_6++;
        if (FUNC_0 (VAR_6, '.'))
            return (0);

        if (!FUNC_2 (&VAR_5, VAR_6, 16))
            return (0);
        *VAR_0 = (VAR_4 << 16) + VAR_5;
        return (1);
    }

    VAR_3 = *VAR_0 = 0;
    for (; *VAR_1; VAR_1++) {
        if (*VAR_1 >= '0' && *VAR_1 <= '9')
            VAR_8 = *VAR_1 - '0';
        else if (*VAR_1 >= 'a' && *VAR_1 <= 'f')
            VAR_8 = *VAR_1 - 'a' + 10;
        else if (*VAR_1 >= 'A' && *VAR_1 <= 'F')
            VAR_8 = *VAR_1 - 'A' + 10;
        else
            return (0);

        if (VAR_8 >= VAR_2)
            return (0);
        VAR_3 *= VAR_2;
        VAR_3 += VAR_8;
    }
    *VAR_0 = VAR_3;
    return (1);
}
