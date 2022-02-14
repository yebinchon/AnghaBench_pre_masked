
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(const char *VAR_0) {
    unsigned char *VAR_1 = (unsigned char *) VAR_0;
    uint32_t VAR_2 = 0x811c9dc5;
    while (*VAR_1) {
        VAR_2 *= 16777619;
        VAR_2 ^= (uint32_t) *VAR_1++;
    }
    return VAR_2;
}
