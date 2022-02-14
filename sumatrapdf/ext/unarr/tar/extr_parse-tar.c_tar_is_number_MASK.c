
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(const char *VAR_0, size_t VAR_1)
{
    size_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        if ((VAR_0[VAR_2] < '0' || '7' < VAR_0[VAR_2]) && VAR_0[VAR_2] != ' ' && VAR_0[VAR_2] != '\0')
            return 0;
    }

    return 1;
}
