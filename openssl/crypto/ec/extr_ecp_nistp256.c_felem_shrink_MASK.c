
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int* smallfelem ;
typedef int limb ;
typedef int* felem ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_0(smallfelem VAR_3, const felem VAR_4)
{
    felem VAR_5;
    u64 VAR_6, VAR_7, VAR_8;
    u64 VAR_9, VAR_10;
    static const u64 VAR_11 = 0x7fffffff00000001ul;


    VAR_5[3] = VAR_2[3] + VAR_4[3] + ((u64)(VAR_4[2] >> 64));


    VAR_5[2] = VAR_2[2] + (u64)VAR_4[2];
    VAR_5[0] = VAR_2[0] + VAR_4[0];
    VAR_5[1] = VAR_2[1] + VAR_4[1];






    VAR_6 = VAR_5[3] >> 64;
    VAR_5[3] = (u64)VAR_5[3];
    VAR_5[3] -= VAR_6;
    VAR_5[3] += ((limb) VAR_6) << 32;


    VAR_7 = VAR_6;
    VAR_6 = VAR_5[3] >> 64;
    VAR_7 += VAR_6;
    VAR_5[3] = (u64)VAR_5[3];
    VAR_5[3] -= VAR_6;
    VAR_5[3] += ((limb) VAR_6) << 32;






    VAR_5[0] += VAR_7;
    VAR_5[1] -= (((limb) VAR_7) << 32);





    VAR_9 = (u64)(VAR_5[3] >> 64);

    VAR_9 = 0 - VAR_9;





    VAR_10 = (u64)VAR_5[3];
    VAR_8 = 0 - (VAR_10 >> 63);





    VAR_10 &= VAR_0;
    VAR_10 -= VAR_11;

    VAR_10 = ~VAR_10;
    VAR_10 = 0 - (VAR_10 >> 63);





    VAR_8 = (VAR_8 & VAR_10) | VAR_9;
    VAR_5[0] -= VAR_8 & VAR_1[0];
    VAR_5[1] -= VAR_8 & VAR_1[1];

    VAR_5[3] -= VAR_8 & VAR_1[3];


    VAR_5[1] += ((u64)(VAR_5[0] >> 64));
    VAR_5[0] = (u64)VAR_5[0];
    VAR_5[2] += ((u64)(VAR_5[1] >> 64));
    VAR_5[1] = (u64)VAR_5[1];
    VAR_5[3] += ((u64)(VAR_5[2] >> 64));
    VAR_5[2] = (u64)VAR_5[2];


    VAR_3[0] = VAR_5[0];
    VAR_3[1] = VAR_5[1];
    VAR_3[2] = VAR_5[2];
    VAR_3[3] = VAR_5[3];
}
