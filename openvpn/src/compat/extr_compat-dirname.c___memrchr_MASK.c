
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(const char *VAR_0, int VAR_1, size_t VAR_2)
{
    const char *VAR_3 = VAR_0;

    VAR_3 += VAR_2 - 1;
    while (VAR_3 >= VAR_0)
    {
        if (VAR_1 == *VAR_3)
        {
            return VAR_3;
        }
        else
        {
            VAR_3--;
        }
    }
    return ((void*)0);
}
