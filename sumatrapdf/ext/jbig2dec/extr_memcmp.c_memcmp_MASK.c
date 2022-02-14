
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
    unsigned char *VAR_3, *VAR_4;
    size_t VAR_5;

    VAR_3 = (unsigned char *)VAR_0;
    VAR_4 = (unsigned char *)VAR_1;
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        if (*VAR_3 != *VAR_4) {

            return (*VAR_3 < *VAR_4) ? -1 : 1;
        }
        VAR_3++;
        VAR_4++;
    }


    return 0;
}
