
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int A ;


 int FUNC_0 (int) ;
 int FUNC_1 (int**) ;
 int FUNC_2 (int) ;

size_t FUNC_3(uint64_t VAR_0[5][5], const unsigned char *VAR_1, size_t VAR_2,
                   size_t VAR_3)
{
    uint64_t *VAR_4 = (uint64_t *)VAR_0;
    size_t VAR_5, VAR_6 = VAR_3 / 8;

    FUNC_2(VAR_3 < (25 * sizeof(VAR_0[0][0])) && (VAR_3 % 8) == 0);

    while (VAR_2 >= VAR_3) {
        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
            uint64_t VAR_7 = (uint64_t)VAR_1[0] | (uint64_t)VAR_1[1] << 8 |
                          (uint64_t)VAR_1[2] << 16 | (uint64_t)VAR_1[3] << 24 |
                          (uint64_t)VAR_1[4] << 32 | (uint64_t)VAR_1[5] << 40 |
                          (uint64_t)VAR_1[6] << 48 | (uint64_t)VAR_1[7] << 56;
            VAR_1 += 8;

            VAR_4[VAR_5] ^= FUNC_0(VAR_7);
        }
        FUNC_1(VAR_0);
        VAR_2 -= VAR_3;
    }

    return VAR_2;
}
