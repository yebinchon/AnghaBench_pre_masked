
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int limb ;
typedef scalar_t__* felem ;



__attribute__((used)) static void FUNC_0(felem VAR_0, const felem VAR_1)
{
    static const limb VAR_2 = (((limb) 1) << 58) + (((limb) 1) << 2);
    static const limb VAR_3 = (((limb) 1) << 58) - (((limb) 1) << 2);
    static const limb VAR_4 = (((limb) 1) << 58) -
        (((limb) 1) << 42) - (((limb) 1) << 2);


    VAR_0[0] += VAR_2;
    VAR_0[1] += VAR_4;
    VAR_0[2] += VAR_3;
    VAR_0[3] += VAR_3;

    VAR_0[0] -= VAR_1[0];
    VAR_0[1] -= VAR_1[1];
    VAR_0[2] -= VAR_1[2];
    VAR_0[3] -= VAR_1[3];
}
