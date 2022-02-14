
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;

uint64_t FUNC_0(unsigned char *VAR_1) {
    uint64_t VAR_2 = 0;
    uint64_t VAR_3 = 0;
    do {
        VAR_2 |= (uint64_t)(VAR_1[0] & 127) << VAR_3;
        if (!(VAR_1[0] & 128)) break;
        VAR_3 += 7;
        VAR_1--;
        if (VAR_3 > 28) return VAR_0;
    } while(1);
    return VAR_2;
}
