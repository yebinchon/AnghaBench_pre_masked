
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;

void
FUNC_3(char *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;

    VAR_5 = FUNC_2 (VAR_0);
    switch (VAR_2) {
    case 129:
        for (VAR_3 = VAR_1 - VAR_5; VAR_3 > 0; VAR_3--)
            FUNC_1 (VAR_0, ' ');
        break;
    case 130:
        for (VAR_4 = VAR_1 - VAR_5; VAR_4 > 0; VAR_4--)
            FUNC_0 (VAR_0, " ");
        break;
    case 128:
        for (VAR_3 = VAR_1 - VAR_5; VAR_3 > 0; VAR_3--)
            FUNC_1 (VAR_0, '0');
        break;
    case 131:
        VAR_4 = (VAR_1 - VAR_5) / 2;
        VAR_3 = VAR_1 - (VAR_5 + VAR_4);
        for (; VAR_4 > 0; VAR_4--)
            FUNC_0 (VAR_0, " ");
        for (; VAR_3 > 0; VAR_3--)
            FUNC_1 (VAR_0, ' ');
        break;
    }
}
