
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(uint64_t VAR_0) {
    static const uint64_t VAR_1[] = {0x5555555555555555ULL, 0x3333333333333333ULL,
                                 0x0F0F0F0F0F0F0F0FULL, 0x00FF00FF00FF00FFULL,
                                 0x0000FFFF0000FFFFULL, 0x00000000FFFFFFFFULL};
    static const unsigned int VAR_2[] = {0, 1, 2, 4, 8, 16};

    uint64_t VAR_3 = VAR_0;
    uint64_t VAR_4 = VAR_0 >> 1;

    VAR_3 = (VAR_3 | (VAR_3 >> VAR_2[0])) & VAR_1[0];
    VAR_4 = (VAR_4 | (VAR_4 >> VAR_2[0])) & VAR_1[0];

    VAR_3 = (VAR_3 | (VAR_3 >> VAR_2[1])) & VAR_1[1];
    VAR_4 = (VAR_4 | (VAR_4 >> VAR_2[1])) & VAR_1[1];

    VAR_3 = (VAR_3 | (VAR_3 >> VAR_2[2])) & VAR_1[2];
    VAR_4 = (VAR_4 | (VAR_4 >> VAR_2[2])) & VAR_1[2];

    VAR_3 = (VAR_3 | (VAR_3 >> VAR_2[3])) & VAR_1[3];
    VAR_4 = (VAR_4 | (VAR_4 >> VAR_2[3])) & VAR_1[3];

    VAR_3 = (VAR_3 | (VAR_3 >> VAR_2[4])) & VAR_1[4];
    VAR_4 = (VAR_4 | (VAR_4 >> VAR_2[4])) & VAR_1[4];

    VAR_3 = (VAR_3 | (VAR_3 >> VAR_2[5])) & VAR_1[5];
    VAR_4 = (VAR_4 | (VAR_4 >> VAR_2[5])) & VAR_1[5];

    return VAR_3 | (VAR_4 << 32);
}
