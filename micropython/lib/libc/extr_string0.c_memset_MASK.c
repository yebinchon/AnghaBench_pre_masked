
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;



void *FUNC_0(void *VAR_0, int VAR_1, size_t VAR_2) {
    if (VAR_1 == 0 && ((uintptr_t)VAR_0 & 3) == 0) {

        uint32_t *VAR_3 = VAR_0;
        for (size_t VAR_4 = VAR_2 >> 2; VAR_4 > 0; VAR_4--) {
            *VAR_3++ = 0;
        }
        if (VAR_2 & 2) {
            *((uint16_t*)VAR_3) = 0;
            VAR_3 = (uint32_t*)((uint16_t*)VAR_3 + 1);
        }
        if (VAR_2 & 1) {
            *((uint8_t*)VAR_3) = 0;
        }
    } else {
        uint8_t *VAR_5 = VAR_0;
        for (; VAR_2 > 0; VAR_2--) {
            *VAR_5++ = VAR_1;
        }
    }
    return VAR_0;
}
