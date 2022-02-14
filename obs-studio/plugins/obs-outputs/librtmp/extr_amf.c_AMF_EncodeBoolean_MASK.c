
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

char *
FUNC_0(char *VAR_1, char *VAR_2, int VAR_3)
{
    if (VAR_1+2 > VAR_2)
        return ((void*)0);

    *VAR_1++ = VAR_0;

    *VAR_1++ = VAR_3 ? 0x01 : 0x00;

    return VAR_1;
}
