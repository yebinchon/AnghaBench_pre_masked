
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{
    uint32_t VAR_2, VAR_3, VAR_4;

    for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
        VAR_3 = VAR_2;
        VAR_3 = VAR_3 & 1 ? (VAR_3 >> 1) ^ VAR_0 : VAR_3 >> 1;
        VAR_3 = VAR_3 & 1 ? (VAR_3 >> 1) ^ VAR_0 : VAR_3 >> 1;
        VAR_3 = VAR_3 & 1 ? (VAR_3 >> 1) ^ VAR_0 : VAR_3 >> 1;
        VAR_3 = VAR_3 & 1 ? (VAR_3 >> 1) ^ VAR_0 : VAR_3 >> 1;
        VAR_3 = VAR_3 & 1 ? (VAR_3 >> 1) ^ VAR_0 : VAR_3 >> 1;
        VAR_3 = VAR_3 & 1 ? (VAR_3 >> 1) ^ VAR_0 : VAR_3 >> 1;
        VAR_3 = VAR_3 & 1 ? (VAR_3 >> 1) ^ VAR_0 : VAR_3 >> 1;
        VAR_3 = VAR_3 & 1 ? (VAR_3 >> 1) ^ VAR_0 : VAR_3 >> 1;
        VAR_1[0][VAR_2] = VAR_3;
    }
    for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
        VAR_3 = VAR_1[0][VAR_2];
        for (VAR_4 = 1; VAR_4 < 8; VAR_4++) {
            VAR_3 = VAR_1[0][VAR_3 & 0xff] ^ (VAR_3 >> 8);
            VAR_1[VAR_4][VAR_2] = VAR_3;
        }
    }
}
