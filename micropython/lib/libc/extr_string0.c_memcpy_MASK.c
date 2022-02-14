
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int) ;

void *FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2) {
    if (FUNC_0(!(((uintptr_t)VAR_0) & 3) && !(((uintptr_t)VAR_1) & 3))) {

        uint32_t *VAR_3 = VAR_0;
        const uint32_t *VAR_4 = VAR_1;


        for (size_t VAR_5 = (VAR_2 >> 2); VAR_5; VAR_5--) {
            *VAR_3++ = *VAR_4++;
        }

        if (VAR_2 & 2) {

            *(uint16_t*)VAR_3 = *(const uint16_t*)VAR_4;
            VAR_3 = (uint32_t*)((uint16_t*)VAR_3 + 1);
            VAR_4 = (const uint32_t*)((const uint16_t*)VAR_4 + 1);
        }

        if (VAR_2 & 1) {

            *((uint8_t*)VAR_3) = *((const uint8_t*)VAR_4);
        }
    } else {

        uint8_t *VAR_6 = VAR_0;
        const uint8_t *VAR_7 = VAR_1;

        for (; VAR_2; VAR_2--) {
            *VAR_6++ = *VAR_7++;
        }
    }

    return VAR_0;
}
