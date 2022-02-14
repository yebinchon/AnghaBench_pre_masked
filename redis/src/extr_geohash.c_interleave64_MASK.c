
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint64_t FUNC_0(uint32_t VAR_0, uint32_t VAR_1) {
    static const uint64_t VAR_2[] = {0x5555555555555555ULL, 0x3333333333333333ULL,
                                 0x0F0F0F0F0F0F0F0FULL, 0x00FF00FF00FF00FFULL,
                                 0x0000FFFF0000FFFFULL};
    static const unsigned int VAR_3[] = {1, 2, 4, 8, 16};

    uint64_t VAR_4 = VAR_0;
    uint64_t VAR_5 = VAR_1;

    VAR_4 = (VAR_4 | (VAR_4 << VAR_3[4])) & VAR_2[4];
    VAR_5 = (VAR_5 | (VAR_5 << VAR_3[4])) & VAR_2[4];

    VAR_4 = (VAR_4 | (VAR_4 << VAR_3[3])) & VAR_2[3];
    VAR_5 = (VAR_5 | (VAR_5 << VAR_3[3])) & VAR_2[3];

    VAR_4 = (VAR_4 | (VAR_4 << VAR_3[2])) & VAR_2[2];
    VAR_5 = (VAR_5 | (VAR_5 << VAR_3[2])) & VAR_2[2];

    VAR_4 = (VAR_4 | (VAR_4 << VAR_3[1])) & VAR_2[1];
    VAR_5 = (VAR_5 | (VAR_5 << VAR_3[1])) & VAR_2[1];

    VAR_4 = (VAR_4 | (VAR_4 << VAR_3[0])) & VAR_2[0];
    VAR_5 = (VAR_5 | (VAR_5 << VAR_3[0])) & VAR_2[0];

    return VAR_4 | (VAR_5 << 1);
}
