
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(int VAR_1)
{
    int VAR_2 = 5;

    if (VAR_1 < 1024)
        VAR_2 = 2;
    else if (VAR_1 < 4096)
        VAR_2 = 3;
    else if (VAR_1 < 8192)
        VAR_2 = 4;

    if (VAR_2 > VAR_0)
        VAR_2 = VAR_0;

    return VAR_2;
}
