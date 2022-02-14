
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned
FUNC_0(const size_t *VAR_0, unsigned VAR_1, size_t VAR_2)
{
    unsigned VAR_3;

    for (VAR_3=0; VAR_3<VAR_1; VAR_3++) {
        if (VAR_0[VAR_3] == VAR_2)
            return 1;
    }
    return 0;
}
