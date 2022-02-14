
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int limb ;
typedef int* felem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int* const) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_1(felem VAR_3, const felem VAR_4)
{
    limb VAR_5, VAR_6, VAR_7;
    static const limb VAR_8 = ((limb) 1) << 58;

    FUNC_0(VAR_3, VAR_4);

    VAR_3[0] += VAR_3[8] >> 57;
    VAR_3[8] &= VAR_0;

    VAR_3[1] += VAR_3[0] >> 58;
    VAR_3[0] &= VAR_1;
    VAR_3[2] += VAR_3[1] >> 58;
    VAR_3[1] &= VAR_1;
    VAR_3[3] += VAR_3[2] >> 58;
    VAR_3[2] &= VAR_1;
    VAR_3[4] += VAR_3[3] >> 58;
    VAR_3[3] &= VAR_1;
    VAR_3[5] += VAR_3[4] >> 58;
    VAR_3[4] &= VAR_1;
    VAR_3[6] += VAR_3[5] >> 58;
    VAR_3[5] &= VAR_1;
    VAR_3[7] += VAR_3[6] >> 58;
    VAR_3[6] &= VAR_1;
    VAR_3[8] += VAR_3[7] >> 58;
    VAR_3[7] &= VAR_1;
    VAR_5 = VAR_3[0] ^ VAR_2[0];
    VAR_5 |= VAR_3[1] ^ VAR_2[1];
    VAR_5 |= VAR_3[2] ^ VAR_2[2];
    VAR_5 |= VAR_3[3] ^ VAR_2[3];
    VAR_5 |= VAR_3[4] ^ VAR_2[4];
    VAR_5 |= VAR_3[5] ^ VAR_2[5];
    VAR_5 |= VAR_3[6] ^ VAR_2[6];
    VAR_5 |= VAR_3[7] ^ VAR_2[7];
    VAR_5 |= VAR_3[8] ^ VAR_2[8];

    VAR_5--;
    VAR_5 &= VAR_5 << 32;
    VAR_5 &= VAR_5 << 16;
    VAR_5 &= VAR_5 << 8;
    VAR_5 &= VAR_5 << 4;
    VAR_5 &= VAR_5 << 2;
    VAR_5 &= VAR_5 << 1;
    VAR_5 = 0 - (VAR_5 >> 63);
    VAR_5 = ~VAR_5;



    VAR_3[0] &= VAR_5;
    VAR_3[1] &= VAR_5;
    VAR_3[2] &= VAR_5;
    VAR_3[3] &= VAR_5;
    VAR_3[4] &= VAR_5;
    VAR_3[5] &= VAR_5;
    VAR_3[6] &= VAR_5;
    VAR_3[7] &= VAR_5;
    VAR_3[8] &= VAR_5;





    VAR_6 = VAR_3[8] >> 57;
    VAR_6 |= VAR_6 << 32;
    VAR_6 |= VAR_6 << 16;
    VAR_6 |= VAR_6 << 8;
    VAR_6 |= VAR_6 << 4;
    VAR_6 |= VAR_6 << 2;
    VAR_6 |= VAR_6 << 1;
    VAR_6 = 0 - (VAR_6 >> 63);

    VAR_3[0] -= VAR_2[0] & VAR_6;
    VAR_3[1] -= VAR_2[1] & VAR_6;
    VAR_3[2] -= VAR_2[2] & VAR_6;
    VAR_3[3] -= VAR_2[3] & VAR_6;
    VAR_3[4] -= VAR_2[4] & VAR_6;
    VAR_3[5] -= VAR_2[5] & VAR_6;
    VAR_3[6] -= VAR_2[6] & VAR_6;
    VAR_3[7] -= VAR_2[7] & VAR_6;
    VAR_3[8] -= VAR_2[8] & VAR_6;


    VAR_7 = -(VAR_3[0] >> 63);
    VAR_3[0] += (VAR_8 & VAR_7);
    VAR_3[1] -= (1 & VAR_7);
    VAR_7 = -(VAR_3[1] >> 63);
    VAR_3[1] += (VAR_8 & VAR_7);
    VAR_3[2] -= (1 & VAR_7);
    VAR_7 = -(VAR_3[2] >> 63);
    VAR_3[2] += (VAR_8 & VAR_7);
    VAR_3[3] -= (1 & VAR_7);
    VAR_7 = -(VAR_3[3] >> 63);
    VAR_3[3] += (VAR_8 & VAR_7);
    VAR_3[4] -= (1 & VAR_7);
    VAR_7 = -(VAR_3[4] >> 63);
    VAR_3[4] += (VAR_8 & VAR_7);
    VAR_3[5] -= (1 & VAR_7);
    VAR_7 = -(VAR_3[0] >> 63);
    VAR_3[5] += (VAR_8 & VAR_7);
    VAR_3[6] -= (1 & VAR_7);
    VAR_7 = -(VAR_3[6] >> 63);
    VAR_3[6] += (VAR_8 & VAR_7);
    VAR_3[7] -= (1 & VAR_7);
    VAR_7 = -(VAR_3[7] >> 63);
    VAR_3[7] += (VAR_8 & VAR_7);
    VAR_3[8] -= (1 & VAR_7);
    VAR_7 = -(VAR_3[5] >> 63);
    VAR_3[5] += (VAR_8 & VAR_7);
    VAR_3[6] -= (1 & VAR_7);
    VAR_7 = -(VAR_3[6] >> 63);
    VAR_3[6] += (VAR_8 & VAR_7);
    VAR_3[7] -= (1 & VAR_7);
    VAR_7 = -(VAR_3[7] >> 63);
    VAR_3[7] += (VAR_8 & VAR_7);
    VAR_3[8] -= (1 & VAR_7);
}
