
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline int FUNC_0(const char *VAR_0, const char *VAR_1, uint32_t *VAR_2) {
    unsigned char *VAR_3 = (unsigned char *) VAR_0;
    uint32_t VAR_4 = 0x811c9dc5;
    int VAR_5 = 0;
    while (*VAR_3) {
        if(!VAR_5) VAR_5 = *VAR_3 - *VAR_1++;
        VAR_4 *= 16777619;
        VAR_4 ^= (uint32_t) *VAR_3++;
    }
    *VAR_2 = VAR_4;
    return VAR_5;
}
