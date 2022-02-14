
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, size_t VAR_1, int VAR_2)
{
    size_t VAR_3;
    for (VAR_3=0; VAR_3<VAR_1; VAR_3++) {
        if (VAR_0[VAR_3] == VAR_2)
            return 1;
    }
    return 0;
}
