
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;

int FUNC_1(void *VAR_0, unsigned char *VAR_1, size_t VAR_2, size_t *VAR_3) {
    uint32_t VAR_4;
    int VAR_5 = 0;
    *VAR_3 = VAR_2;
    while (VAR_2--) {
        if (!VAR_5) {
            VAR_4 = FUNC_0();
            VAR_5 = 4;
        }
        *VAR_1++ = VAR_4;
        VAR_4 >>= 8;
        --VAR_5;
    }
    return 0;
}
