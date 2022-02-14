
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* longfelem ;
typedef int int128_t ;
typedef int* felem ;



__attribute__((used)) static void FUNC_0(felem VAR_0, const longfelem VAR_1)
{
    int128_t VAR_2;

    VAR_2 = VAR_1[4] + (VAR_1[5] << 32);
    VAR_0[0] += VAR_2;
    VAR_0[3] -= VAR_2;

    VAR_2 = VAR_1[5] - VAR_1[7];
    VAR_0[1] += VAR_2;
    VAR_0[2] -= VAR_2;



    VAR_0[1] -= (VAR_1[4] << 32);
    VAR_0[3] += (VAR_1[4] << 32);


    VAR_0[2] -= (VAR_1[5] << 32);


    VAR_0[0] -= VAR_1[6];
    VAR_0[0] -= (VAR_1[6] << 32);
    VAR_0[1] += (VAR_1[6] << 33);
    VAR_0[2] += (VAR_1[6] * 2);
    VAR_0[3] -= (VAR_1[6] << 32);


    VAR_0[0] -= VAR_1[7];
    VAR_0[0] -= (VAR_1[7] << 32);
    VAR_0[2] += (VAR_1[7] << 33);
    VAR_0[3] += (VAR_1[7] * 3);
}
