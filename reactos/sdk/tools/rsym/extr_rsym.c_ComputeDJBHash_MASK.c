
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int
FUNC_0(const char *VAR_0)
{
    unsigned int VAR_1 = 5381;
    int VAR_2 = 0;

    for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
    {
        VAR_1 = (33 * VAR_1) + VAR_0[VAR_2];
    }

    return VAR_1;
}
