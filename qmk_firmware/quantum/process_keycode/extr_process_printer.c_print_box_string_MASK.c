
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (char const*) ;

void FUNC_2(const char VAR_0[]) {
    size_t VAR_1 = FUNC_1(VAR_0);
    char VAR_2[VAR_1 * 3 + 8];
    VAR_2[0] = 0xDA;
    for (uint8_t VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2[VAR_3 + 1] = 0xC4;
    }
    VAR_2[VAR_1 + 1] = 0xBF;
    VAR_2[VAR_1 + 2] = '\n';

    VAR_2[VAR_1 + 3] = 0xB3;
    for (uint8_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        VAR_2[VAR_1 + 4 + VAR_4] = VAR_0[VAR_4];
    }
    VAR_2[VAR_1 * 2 + 4] = 0xB3;
    VAR_2[VAR_1 * 2 + 5] = '\n';

    VAR_2[VAR_1 * 2 + 6] = 0xC0;
    for (uint8_t VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        VAR_2[VAR_1 * 2 + 7 + VAR_5] = 0xC4;
    }
    VAR_2[VAR_1 * 3 + 7] = 0xD9;
    VAR_2[VAR_1 * 3 + 8] = '\n';

    FUNC_0(VAR_2);
}
