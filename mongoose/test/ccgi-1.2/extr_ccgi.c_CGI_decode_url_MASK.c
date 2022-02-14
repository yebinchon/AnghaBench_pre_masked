
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_0) {
    char *VAR_1;
    int VAR_2, VAR_3, VAR_4, VAR_5;

    if (VAR_0 == 0) {
        return 0;
    }
    VAR_1 = (char *) FUNC_1(FUNC_2(VAR_0) + 1);
    for (VAR_2 = VAR_3 = 0; VAR_0[VAR_2] != 0; VAR_2++) {
        switch(VAR_0[VAR_2]) {

        case '+':
            VAR_1[VAR_3++] = ' ';
            continue;

        case '%':
            if ((VAR_4 = FUNC_0(VAR_0[VAR_2 + 1])) >= 0 &&
                (VAR_5 = FUNC_0(VAR_0[VAR_2 + 2])) >= 0)
            {
                VAR_1[VAR_3++] = (VAR_4 << 4) + VAR_5;
                VAR_2 += 2;
                continue;
            }
            break;
        }
        VAR_1[VAR_3++] = VAR_0[VAR_2];
    }
    VAR_1[VAR_3] = 0;
    return VAR_1;
}
