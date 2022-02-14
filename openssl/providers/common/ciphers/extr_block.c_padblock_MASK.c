
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned char *VAR_0, size_t *VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    unsigned char VAR_4 = (unsigned char)(VAR_2 - *VAR_1);

    for (VAR_3 = *VAR_1; VAR_3 < VAR_2; VAR_3++)
        VAR_0[VAR_3] = VAR_4;
}
