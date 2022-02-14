
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (unsigned char const*,int,int*) ;

__attribute__((used)) static uint64_t
FUNC_1(const unsigned char *VAR_0, uint64_t VAR_1, uint64_t *VAR_2)
{
    uint64_t VAR_3;
    uint64_t VAR_4;

    if (VAR_0[(*VAR_2)++] != 0x02) {
        *VAR_2 = VAR_1;
        return 0xFFFFffff;
    }

    VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (VAR_3 == 0xFFFFffff) {
        *VAR_2 = VAR_1;
        return 0xFFFFffff;
    }
    if (*VAR_2 + VAR_3 > VAR_1) {
        *VAR_2 = VAR_1;
        return 0xFFFFffff;
    }
    if (VAR_3 > 20) {
        *VAR_2 = VAR_1;
        return 0xFFFFffff;
    }

    VAR_4 = 0;
    while (VAR_3--)
        VAR_4 = VAR_4 * 256 + VAR_0[(*VAR_2)++];

    return VAR_4;
}
