
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0 (const char *VAR_1, size_t VAR_2)
{
    int VAR_3;
    size_t VAR_4;

    VAR_3 = 0;
    for (VAR_4 = 0; VAR_4 != VAR_2; ++VAR_4) {
        if (VAR_1 [VAR_4] < '0' || VAR_1 [VAR_4] > '9')
            return -VAR_0;
        VAR_3 *= 10;
        VAR_3 += VAR_1 [VAR_4] - '0';
        if (VAR_3 > 0xffff)
            return -VAR_0;
    }



    if (VAR_3 == 0)
        return -VAR_0;

    return VAR_3;
}
