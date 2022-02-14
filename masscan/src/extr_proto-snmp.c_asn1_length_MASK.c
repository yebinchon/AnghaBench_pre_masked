
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;



__attribute__((used)) static uint64_t
FUNC_0(const unsigned char *VAR_0, uint64_t VAR_1, uint64_t *VAR_2)
{
    uint64_t VAR_3;


    if ( (*VAR_2 >= VAR_1)
        || ((VAR_0[*VAR_2] & 0x80)
        && ((*VAR_2) + (VAR_0[*VAR_2]&0x7F) >= VAR_1))) {
        *VAR_2 = VAR_1;
        return 0xFFFFffff;
    }


    VAR_3 = VAR_0[(*VAR_2)++];


    if (VAR_3 & 0x80) {
        unsigned VAR_4 = VAR_3 & 0x7F;
        if (VAR_4 == 0) {
            *VAR_2 = VAR_1;
            return 0xFFFFffff;
        }
        VAR_3 = 0;
        while (VAR_4) {
            VAR_3 = VAR_3 * 256 + VAR_0[(*VAR_2)++];
            if (VAR_3 > 0x10000) {
                *VAR_2 = VAR_1;
                return 0xFFFFffff;
            }
            VAR_4--;
        }
    }
    return VAR_3;
}
