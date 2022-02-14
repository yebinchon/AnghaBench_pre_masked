
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

uint32_t FUNC_0(size_t VAR_1, int VAR_2, uint32_t *VAR_3) {

    if (VAR_2 == 1 && (VAR_0 & 0xFFFFF000)) {
        VAR_0 &= 0xFFFFF000;
        VAR_0 += 0x1000;
    }

    if (VAR_3) *VAR_3 = VAR_0;

    uint32_t VAR_4 = VAR_0;
    VAR_0 += VAR_1;
    return VAR_4;
}
