
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong64 ;
typedef int ulong32 ;


 int FUNC_0 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 size_t FUNC_1 (int,int) ;
 int** VAR_8 ;
 int** VAR_9 ;

__attribute__((used)) static void FUNC_2(ulong32 *VAR_10, const ulong32 *VAR_11)
{
    ulong64 VAR_12;
    ulong32 VAR_13, VAR_14, VAR_15;
    int VAR_16;

    VAR_15 = VAR_10[0];
    VAR_14 = VAR_10[1];

    VAR_12 = VAR_9[0][FUNC_1(VAR_15, 0)] ^
          VAR_9[1][FUNC_1(VAR_15, 1)] ^
          VAR_9[2][FUNC_1(VAR_15, 2)] ^
          VAR_9[3][FUNC_1(VAR_15, 3)] ^
          VAR_9[4][FUNC_1(VAR_14, 0)] ^
          VAR_9[5][FUNC_1(VAR_14, 1)] ^
          VAR_9[6][FUNC_1(VAR_14, 2)] ^
          VAR_9[7][FUNC_1(VAR_14, 3)];
    VAR_15 = (ulong32)(VAR_12 >> 32);
    VAR_14 = (ulong32)(VAR_12 & 0xFFFFFFFFUL);

    for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {
        VAR_13 = FUNC_0(VAR_14, 4) ^ *VAR_11++;
        VAR_15 ^= VAR_6[VAR_13 & 0x3fL]
              ^ VAR_4[(VAR_13 >> 8) & 0x3fL]
              ^ VAR_2[(VAR_13 >> 16) & 0x3fL]
              ^ VAR_0[(VAR_13 >> 24) & 0x3fL];
        VAR_13 = VAR_14 ^ *VAR_11++;
        VAR_15 ^= VAR_7[ VAR_13 & 0x3fL]
              ^ VAR_5[(VAR_13 >> 8) & 0x3fL]
              ^ VAR_3[(VAR_13 >> 16) & 0x3fL]
              ^ VAR_1[(VAR_13 >> 24) & 0x3fL];

        VAR_13 = FUNC_0(VAR_15, 4) ^ *VAR_11++;
        VAR_14 ^= VAR_6[ VAR_13 & 0x3fL]
              ^ VAR_4[(VAR_13 >> 8) & 0x3fL]
              ^ VAR_2[(VAR_13 >> 16) & 0x3fL]
              ^ VAR_0[(VAR_13 >> 24) & 0x3fL];
        VAR_13 = VAR_15 ^ *VAR_11++;
        VAR_14 ^= VAR_7[ VAR_13 & 0x3fL]
              ^ VAR_5[(VAR_13 >> 8) & 0x3fL]
              ^ VAR_3[(VAR_13 >> 16) & 0x3fL]
              ^ VAR_1[(VAR_13 >> 24) & 0x3fL];
    }

    VAR_12 = VAR_8[0][FUNC_1(VAR_15, 0)] ^
          VAR_8[1][FUNC_1(VAR_15, 1)] ^
          VAR_8[2][FUNC_1(VAR_15, 2)] ^
          VAR_8[3][FUNC_1(VAR_15, 3)] ^
          VAR_8[4][FUNC_1(VAR_14, 0)] ^
          VAR_8[5][FUNC_1(VAR_14, 1)] ^
          VAR_8[6][FUNC_1(VAR_14, 2)] ^
          VAR_8[7][FUNC_1(VAR_14, 3)];
    VAR_15 = (ulong32)(VAR_12 >> 32);
    VAR_14 = (ulong32)(VAR_12 & 0xFFFFFFFFUL);

    VAR_10[0] = VAR_14;
    VAR_10[1] = VAR_15;
}
