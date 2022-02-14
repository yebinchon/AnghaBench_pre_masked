
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int VAR_0, char VAR_1[]) {
    int VAR_2, VAR_3;
    if ((VAR_3 = VAR_0) < 0) VAR_0 = -VAR_0;
    VAR_2 = 0;
    do {
        VAR_1[VAR_2++] = VAR_0 % 10 + '0';
    } while ((VAR_0 /= 10) > 0);

    if (VAR_3 < 0) VAR_1[VAR_2++] = '-';
    VAR_1[VAR_2] = '\0';


}
