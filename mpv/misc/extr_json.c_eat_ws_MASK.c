
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char **VAR_0)
{
    while (1) {
        char VAR_1 = **VAR_0;
        if (VAR_1 != ' ' && VAR_1 != '\t' && VAR_1 != '\n' && VAR_1 != '\r')
            return;
        *VAR_0 += 1;
    }
}
