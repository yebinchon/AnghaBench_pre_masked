
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0 (const void *VAR_0,
                  const void *VAR_1)
{
    const unsigned char *VAR_2 = VAR_0;
    const unsigned char *VAR_3 = VAR_1;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < 20; VAR_4++)
        if (VAR_2[VAR_4] != VAR_3[VAR_4])
            return 0;

    return 1;
}
