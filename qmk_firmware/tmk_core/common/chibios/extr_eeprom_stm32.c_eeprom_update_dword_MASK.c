
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(uint32_t *VAR_0, uint32_t VAR_1) {
    uint16_t VAR_2 = (const uint32_t)VAR_0;
    uint32_t VAR_3 = FUNC_0(VAR_2) | (FUNC_0(VAR_2 + 1) << 8) | (FUNC_0(VAR_2 + 2) << 16) | (FUNC_0(VAR_2 + 3) << 24);
    if (VAR_1 != VAR_3) {
        FUNC_1(VAR_2, (uint8_t)VAR_1);
        FUNC_1(VAR_2 + 1, (uint8_t)(VAR_1 >> 8));
        FUNC_1(VAR_2 + 2, (uint8_t)(VAR_1 >> 16));
        FUNC_1(VAR_2 + 3, (uint8_t)(VAR_1 >> 24));
    }
}
