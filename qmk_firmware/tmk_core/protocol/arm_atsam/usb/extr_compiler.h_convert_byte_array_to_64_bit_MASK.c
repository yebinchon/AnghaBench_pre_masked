
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(uint8_t *VAR_0) {
    union {
        uint64_t u64;
        uint8_t u8[8];
    } VAR_1;

    uint8_t VAR_2;

    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        VAR_1.u8[VAR_2] = *VAR_0++;
    }

    return VAR_1.u64;
}
