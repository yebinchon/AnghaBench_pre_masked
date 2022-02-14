
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int *,int) ;

uint64_t FUNC_1(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2) {
    uint32_t VAR_3 = 0xffffffff, VAR_4 = 0xffffffff;

    VAR_3 = FUNC_0(VAR_3, (uint8_t*)&VAR_0, sizeof(uint64_t));
    VAR_4 = FUNC_0(VAR_4, (uint8_t*)&VAR_1, sizeof(uint64_t));
    VAR_4 = FUNC_0(VAR_4, (uint8_t*)&VAR_2, sizeof(uint64_t));

    return ((uint64_t)VAR_3 << 31) ^ (uint64_t)VAR_4;
}
