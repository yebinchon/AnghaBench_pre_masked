
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint64_t ;


 size_t* VAR_0 ;

uint64_t FUNC_0(uint64_t VAR_1, const unsigned char *VAR_2, uint64_t VAR_3) {
    uint64_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        uint8_t VAR_5 = VAR_2[VAR_4];
        VAR_1 = VAR_0[(uint8_t)VAR_1 ^ VAR_5] ^ (VAR_1 >> 8);
    }
    return VAR_1;
}
