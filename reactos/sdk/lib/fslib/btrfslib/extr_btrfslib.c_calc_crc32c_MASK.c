
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t ULONG ;


 int* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_1, uint8_t* VAR_2, ULONG VAR_3) {
    uint32_t VAR_4;
    ULONG VAR_5;

    VAR_4 = VAR_1;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        VAR_4 = VAR_0[(VAR_4 ^ VAR_2[VAR_5]) & 0xff] ^ (VAR_4 >> 8);
    }

    return VAR_4;
}
