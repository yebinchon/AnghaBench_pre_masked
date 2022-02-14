
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int widelimb ;
typedef int* widefelem ;
typedef int* felem ;



__attribute__((used)) static void FUNC_0(felem VAR_0, const widefelem VAR_1)
{
    static const widelimb VAR_2 = (((widelimb) 1) << 127) +
        (((widelimb) 1) << 15);
    static const widelimb VAR_3 = (((widelimb) 1) << 127) -
        (((widelimb) 1) << 71);
    static const widelimb VAR_4 = (((widelimb) 1) << 127) -
        (((widelimb) 1) << 71) - (((widelimb) 1) << 55);
    widelimb VAR_5[5];


    VAR_5[0] = VAR_1[0] + VAR_2;
    VAR_5[1] = VAR_1[1] + VAR_4;
    VAR_5[2] = VAR_1[2] + VAR_3;
    VAR_5[3] = VAR_1[3];
    VAR_5[4] = VAR_1[4];


    VAR_5[4] += VAR_1[6] >> 16;
    VAR_5[3] += (VAR_1[6] & 0xffff) << 40;
    VAR_5[2] -= VAR_1[6];

    VAR_5[3] += VAR_1[5] >> 16;
    VAR_5[2] += (VAR_1[5] & 0xffff) << 40;
    VAR_5[1] -= VAR_1[5];

    VAR_5[2] += VAR_5[4] >> 16;
    VAR_5[1] += (VAR_5[4] & 0xffff) << 40;
    VAR_5[0] -= VAR_5[4];


    VAR_5[3] += VAR_5[2] >> 56;
    VAR_5[2] &= 0x00ffffffffffffff;

    VAR_5[4] = VAR_5[3] >> 56;
    VAR_5[3] &= 0x00ffffffffffffff;




    VAR_5[2] += VAR_5[4] >> 16;

    VAR_5[1] += (VAR_5[4] & 0xffff) << 40;
    VAR_5[0] -= VAR_5[4];


    VAR_5[1] += VAR_5[0] >> 56;
    VAR_0[0] = VAR_5[0] & 0x00ffffffffffffff;

    VAR_5[2] += VAR_5[1] >> 56;

    VAR_0[1] = VAR_5[1] & 0x00ffffffffffffff;
    VAR_5[3] += VAR_5[2] >> 56;

    VAR_0[2] = VAR_5[2] & 0x00ffffffffffffff;






    VAR_0[3] = VAR_5[3];
}
