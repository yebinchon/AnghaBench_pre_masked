
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int int32_t ;
typedef unsigned int* fe ;



__attribute__((used)) static void FUNC_0(fe VAR_0, const fe VAR_1, unsigned VAR_2)
{
    size_t VAR_3;

    VAR_2 = 0-VAR_2;
    for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
        int32_t VAR_4 = VAR_0[VAR_3] ^ VAR_1[VAR_3];
        VAR_4 &= VAR_2;
        VAR_0[VAR_3] ^= VAR_4;
    }
}
