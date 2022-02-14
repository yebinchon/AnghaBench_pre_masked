
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const*) ;

uint32_t FUNC_1(const uint32_t *VAR_0) {
    const uint8_t *VAR_1 = (const uint8_t *)VAR_0;
    return FUNC_0(VAR_1) | (FUNC_0(VAR_1 + 1) << 8) | (FUNC_0(VAR_1 + 2) << 16) | (FUNC_0(VAR_1 + 3) << 24);
}
