
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (char*,int) ;

void FUNC_1(int VAR_0, char VAR_1[]) {
    FUNC_0(VAR_1, '0');
    FUNC_0(VAR_1, 'x');
    char VAR_2 = 0;

    int32_t VAR_3;
    int VAR_4;
    for (VAR_4 = 28; VAR_4 > 0; VAR_4 -= 4) {
        VAR_3 = (VAR_0 >> VAR_4) & 0xF;
        if (VAR_3 == 0 && VAR_2 == 0) continue;
        VAR_2 = 1;
        if (VAR_3 > 0xA) FUNC_0(VAR_1, VAR_3 - 0xA + 'a');
        else FUNC_0(VAR_1, VAR_3 + '0');
    }

    VAR_3 = VAR_0 & 0xF;
    if (VAR_3 >= 0xA) FUNC_0(VAR_1, VAR_3 - 0xA + 'a');
    else FUNC_0(VAR_1, VAR_3 + '0');
}
