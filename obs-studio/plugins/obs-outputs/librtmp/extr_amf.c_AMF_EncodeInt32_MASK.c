
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0, char *VAR_1, int VAR_2)
{
    if (VAR_0+4 > VAR_1)
        return ((void*)0);

    VAR_0[3] = VAR_2 & 0xff;
    VAR_0[2] = VAR_2 >> 8;
    VAR_0[1] = VAR_2 >> 16;
    VAR_0[0] = VAR_2 >> 24;
    return VAR_0+4;
}
