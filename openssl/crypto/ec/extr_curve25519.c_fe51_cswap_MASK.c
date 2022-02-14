
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int* fe51 ;



__attribute__((used)) static void FUNC_0(fe51 VAR_0, fe51 VAR_1, unsigned int VAR_2)
{
    int VAR_3;
    uint64_t VAR_4 = 0 - (uint64_t)VAR_2;

    for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
        int64_t VAR_5 = VAR_0[VAR_3] ^ VAR_1[VAR_3];
        VAR_5 &= VAR_4;
        VAR_0[VAR_3] ^= VAR_5;
        VAR_1[VAR_3] ^= VAR_5;
    }
}
