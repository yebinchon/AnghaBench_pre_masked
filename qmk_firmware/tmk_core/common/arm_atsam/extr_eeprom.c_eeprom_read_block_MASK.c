
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;

void FUNC_1(void *VAR_0, const void *VAR_1, uint32_t VAR_2) {
    const uint8_t *VAR_3 = (const uint8_t *)VAR_1;
    uint8_t * VAR_4 = (uint8_t *)VAR_0;
    while (VAR_2--) {
        *VAR_4++ = FUNC_0(VAR_3++);
    }
}
