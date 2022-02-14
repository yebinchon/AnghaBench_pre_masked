
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char *VAR_0)
{
    int VAR_1 = 8;
    unsigned char VAR_2;

    do {
        --VAR_1;
        VAR_2 = VAR_0[VAR_1];
        ++VAR_2;
        VAR_0[VAR_1] = VAR_2;
        if (VAR_2 > 0)
            return;
    } while (VAR_1 > 0);
}
