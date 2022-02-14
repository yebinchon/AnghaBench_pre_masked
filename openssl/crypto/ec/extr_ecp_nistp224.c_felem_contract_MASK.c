
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int limb ;
typedef int int64_t ;
typedef int* felem ;



__attribute__((used)) static void FUNC_0(felem VAR_0, const felem VAR_1)
{
    static const int64_t VAR_2 = ((limb) 1) << 56;


    int64_t VAR_3[4], VAR_4;
    VAR_3[0] = VAR_1[0];
    VAR_3[1] = VAR_1[1];
    VAR_3[2] = VAR_1[2];
    VAR_3[3] = VAR_1[3];

    VAR_4 = (VAR_1[3] >> 56);
    VAR_3[0] -= VAR_4;
    VAR_3[1] += VAR_4 << 40;
    VAR_3[3] &= 0x00ffffffffffffff;




    VAR_4 = ((VAR_1[3] & VAR_1[2] & (VAR_1[1] | 0x000000ffffffffff)) + 1) |
        (((int64_t) (VAR_1[0] + (VAR_1[1] & 0x000000ffffffffff)) - 1) >> 63);
    VAR_4 &= 0x00ffffffffffffff;

    VAR_4 = (VAR_4 - 1) >> 63;

    VAR_3[3] &= VAR_4 ^ 0xffffffffffffffff;
    VAR_3[2] &= VAR_4 ^ 0xffffffffffffffff;
    VAR_3[1] &= (VAR_4 ^ 0xffffffffffffffff) | 0x000000ffffffffff;
    VAR_3[0] -= 1 & VAR_4;





    VAR_4 = VAR_3[0] >> 63;
    VAR_3[0] += VAR_2 & VAR_4;
    VAR_3[1] -= 1 & VAR_4;


    VAR_3[2] += VAR_3[1] >> 56;
    VAR_3[1] &= 0x00ffffffffffffff;

    VAR_3[3] += VAR_3[2] >> 56;
    VAR_3[2] &= 0x00ffffffffffffff;


    VAR_0[0] = VAR_3[0];
    VAR_0[1] = VAR_3[1];
    VAR_0[2] = VAR_3[2];
    VAR_0[3] = VAR_3[3];
}
