
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(uint8_t* VAR_0, uint32_t VAR_1) {
    while (VAR_1 > sizeof(uint32_t)) {
        uint32_t VAR_2 = *((uint32_t*)VAR_0), VAR_3;

        VAR_3 = (VAR_2 << 1) & 0xfefefefe;
        VAR_3 ^= FUNC_0(VAR_2) & 0x1d1d1d1d;
        *((uint32_t*)VAR_0) = VAR_3;

        VAR_0 += sizeof(uint32_t);
        VAR_1 -= sizeof(uint32_t);
    }


    while (VAR_1 > 0) {
        VAR_0[0] = (VAR_0[0] << 1) ^ ((VAR_0[0] & 0x80) ? 0x1d : 0);
        VAR_0++;
        VAR_1--;
    }
}
