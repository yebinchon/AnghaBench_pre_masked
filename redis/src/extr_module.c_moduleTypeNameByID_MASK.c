
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 char* VAR_0 ;

void FUNC_0(char *VAR_1, uint64_t VAR_2) {
    const char *VAR_3 = VAR_0;

    VAR_1[9] = '\0';
    char *VAR_4 = VAR_1+8;
    VAR_2 >>= 10;
    for (int VAR_5 = 0; VAR_5 < 9; VAR_5++) {
        *VAR_4-- = VAR_3[VAR_2 & 63];
        VAR_2 >>= 6;
    }
}
