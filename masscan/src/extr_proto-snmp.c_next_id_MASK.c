
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;



__attribute__((used)) static uint64_t
FUNC_0(const unsigned char *VAR_0, unsigned *VAR_1, uint64_t VAR_2)
{
    uint64_t VAR_3 = 0;
    while (*VAR_1 < VAR_2 && (VAR_0[*VAR_1] & 0x80)) {
        VAR_3 <<= 7;
        VAR_3 |= VAR_0[(*VAR_1)++]&0x7F;
    }
    if (*VAR_1 < VAR_2) {
        VAR_3 <<= 7;
        VAR_3 |= VAR_0[(*VAR_1)++]&0x7F;
    }
    return VAR_3;
}
