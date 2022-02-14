
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

__attribute__((used)) static limb FUNC_1(const felem VAR_3)
{
    felem VAR_4;
    limb VAR_5, VAR_6;
    FUNC_0(VAR_4, VAR_3);

    VAR_4[0] += VAR_4[8] >> 57;
    VAR_4[8] &= VAR_0;

    VAR_4[1] += VAR_4[0] >> 58;
    VAR_4[0] &= VAR_1;
    VAR_4[2] += VAR_4[1] >> 58;
    VAR_4[1] &= VAR_1;
    VAR_4[3] += VAR_4[2] >> 58;
    VAR_4[2] &= VAR_1;
    VAR_4[4] += VAR_4[3] >> 58;
    VAR_4[3] &= VAR_1;
    VAR_4[5] += VAR_4[4] >> 58;
    VAR_4[4] &= VAR_1;
    VAR_4[6] += VAR_4[5] >> 58;
    VAR_4[5] &= VAR_1;
    VAR_4[7] += VAR_4[6] >> 58;
    VAR_4[6] &= VAR_1;
    VAR_4[8] += VAR_4[7] >> 58;
    VAR_4[7] &= VAR_1;
    VAR_5 = 0;
    VAR_5 |= VAR_4[0];
    VAR_5 |= VAR_4[1];
    VAR_5 |= VAR_4[2];
    VAR_5 |= VAR_4[3];
    VAR_5 |= VAR_4[4];
    VAR_5 |= VAR_4[5];
    VAR_5 |= VAR_4[6];
    VAR_5 |= VAR_4[7];
    VAR_5 |= VAR_4[8];

    VAR_5--;




    VAR_5 = 0 - (VAR_5 >> 63);

    VAR_6 = VAR_4[0] ^ VAR_2[0];
    VAR_6 |= VAR_4[1] ^ VAR_2[1];
    VAR_6 |= VAR_4[2] ^ VAR_2[2];
    VAR_6 |= VAR_4[3] ^ VAR_2[3];
    VAR_6 |= VAR_4[4] ^ VAR_2[4];
    VAR_6 |= VAR_4[5] ^ VAR_2[5];
    VAR_6 |= VAR_4[6] ^ VAR_2[6];
    VAR_6 |= VAR_4[7] ^ VAR_2[7];
    VAR_6 |= VAR_4[8] ^ VAR_2[8];

    VAR_6--;
    VAR_6 = 0 - (VAR_6 >> 63);

    VAR_5 |= VAR_6;
    return VAR_5;
}
