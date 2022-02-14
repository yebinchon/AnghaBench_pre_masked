
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char **VAR_0, char *VAR_1[7])
{
    int VAR_2;
    VAR_1[0] = *VAR_0;

    for (VAR_2 = 1; VAR_2 < 7; VAR_2++) {
        for (; (**VAR_0) > 31; (*VAR_0)++);
        if (**VAR_0 == 0)
            return 0;
        (*VAR_0)++;
        if ((*VAR_0)[-1] != 9)
            return 0;
        VAR_1[VAR_2] = (*VAR_0);
    }

    return 1;
}
