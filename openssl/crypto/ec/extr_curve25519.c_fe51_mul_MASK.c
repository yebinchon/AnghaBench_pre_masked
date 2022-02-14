
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u128 ;
typedef int* fe51 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(fe51 VAR_1, const fe51 VAR_2, const fe51 VAR_3)
{
    u128 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    uint64_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_9 = VAR_2[0];
    VAR_4 = (u128)VAR_9 * (VAR_10 = VAR_3[0]);
    VAR_5 = (u128)VAR_9 * (VAR_11 = VAR_3[1]);
    VAR_6 = (u128)VAR_9 * (VAR_12 = VAR_3[2]);
    VAR_7 = (u128)VAR_9 * (VAR_13 = VAR_3[3]);
    VAR_8 = (u128)VAR_9 * (VAR_14 = VAR_3[4]);

    VAR_9 = VAR_2[1];
    VAR_4 += (u128)VAR_9 * (VAR_14 *= 19);
    VAR_5 += (u128)VAR_9 * VAR_10;
    VAR_6 += (u128)VAR_9 * VAR_11;
    VAR_7 += (u128)VAR_9 * VAR_12;
    VAR_8 += (u128)VAR_9 * VAR_13;

    VAR_9 = VAR_2[2];
    VAR_4 += (u128)VAR_9 * (VAR_13 *= 19);
    VAR_5 += (u128)VAR_9 * VAR_14;
    VAR_6 += (u128)VAR_9 * VAR_10;
    VAR_7 += (u128)VAR_9 * VAR_11;
    VAR_8 += (u128)VAR_9 * VAR_12;

    VAR_9 = VAR_2[3];
    VAR_4 += (u128)VAR_9 * (VAR_12 *= 19);
    VAR_5 += (u128)VAR_9 * VAR_13;
    VAR_6 += (u128)VAR_9 * VAR_14;
    VAR_7 += (u128)VAR_9 * VAR_10;
    VAR_8 += (u128)VAR_9 * VAR_11;

    VAR_9 = VAR_2[4];
    VAR_4 += (u128)VAR_9 * (VAR_11 *= 19);
    VAR_5 += (u128)VAR_9 * VAR_12;
    VAR_6 += (u128)VAR_9 * VAR_13;
    VAR_7 += (u128)VAR_9 * VAR_14;
    VAR_8 += (u128)VAR_9 * VAR_10;


    VAR_7 += (uint64_t)(VAR_6 >> 51); VAR_12 = (uint64_t)VAR_6 & VAR_0;
    VAR_5 += (uint64_t)(VAR_4 >> 51); VAR_10 = (uint64_t)VAR_4 & VAR_0;

    VAR_8 += (uint64_t)(VAR_7 >> 51); VAR_13 = (uint64_t)VAR_7 & VAR_0;
    VAR_12 += (uint64_t)(VAR_5 >> 51); VAR_11 = (uint64_t)VAR_5 & VAR_0;

    VAR_10 += (uint64_t)(VAR_8 >> 51) * 19; VAR_14 = (uint64_t)VAR_8 & VAR_0;
    VAR_13 += VAR_12 >> 51; VAR_12 &= VAR_0;
    VAR_11 += VAR_10 >> 51; VAR_10 &= VAR_0;

    VAR_1[0] = VAR_10;
    VAR_1[1] = VAR_11;
    VAR_1[2] = VAR_12;
    VAR_1[3] = VAR_13;
    VAR_1[4] = VAR_14;
}
