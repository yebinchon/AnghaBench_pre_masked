
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t VAR_3, const void *VAR_4, size_t VAR_5)
{
    const unsigned char *VAR_6 = VAR_4;
    uint64_t VAR_7;

    FUNC_0(&VAR_1, VAR_0);
    VAR_7 = VAR_3 ^ 0xffffffff;
    while (VAR_5 && ((uintptr_t)VAR_6 & 7) != 0) {
        VAR_7 = VAR_2[0][(VAR_7 ^ *VAR_6++) & 0xff] ^ (VAR_7 >> 8);
        VAR_5--;
    }
    while (VAR_5 >= 8) {
        VAR_7 ^= *(uint64_t *)VAR_6;
        VAR_7 = VAR_2[7][VAR_7 & 0xff] ^
              VAR_2[6][(VAR_7 >> 8) & 0xff] ^
              VAR_2[5][(VAR_7 >> 16) & 0xff] ^
              VAR_2[4][(VAR_7 >> 24) & 0xff] ^
              VAR_2[3][(VAR_7 >> 32) & 0xff] ^
              VAR_2[2][(VAR_7 >> 40) & 0xff] ^
              VAR_2[1][(VAR_7 >> 48) & 0xff] ^
              VAR_2[0][VAR_7 >> 56];
        VAR_6 += 8;
        VAR_5 -= 8;
    }
    while (VAR_5) {
        VAR_7 = VAR_2[0][(VAR_7 ^ *VAR_6++) & 0xff] ^ (VAR_7 >> 8);
        VAR_5--;
    }
    return (uint32_t)VAR_7 ^ 0xffffffff;
}
