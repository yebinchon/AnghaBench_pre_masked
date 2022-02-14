
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0, int VAR_1)
{
    int VAR_2, VAR_3;
    if (VAR_0 >= 15360)
        VAR_2 = 256;
    else if (VAR_0 >= 7680)
        VAR_2 = 192;
    else if (VAR_0 >= 3072)
        VAR_2 = 128;
    else if (VAR_0 >= 2048)
        VAR_2 = 112;
    else if (VAR_0 >= 1024)
        VAR_2 = 80;
    else
        return 0;
    if (VAR_1 == -1)
        return VAR_2;
    VAR_3 = VAR_1 / 2;
    if (VAR_3 < 80)
        return 0;
    return VAR_3 >= VAR_2 ? VAR_2 : VAR_3;
}
