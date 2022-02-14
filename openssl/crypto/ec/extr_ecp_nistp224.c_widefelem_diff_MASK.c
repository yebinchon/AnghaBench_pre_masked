
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int widelimb ;
typedef scalar_t__* widefelem ;



__attribute__((used)) static void FUNC_0(widefelem VAR_0, const widefelem VAR_1)
{
    static const widelimb VAR_2 = ((widelimb) 1) << 120;
    static const widelimb VAR_3 = (((widelimb) 1) << 120) -
        (((widelimb) 1) << 64);
    static const widelimb VAR_4 = (((widelimb) 1) << 120) -
        (((widelimb) 1) << 104) - (((widelimb) 1) << 64);


    VAR_0[0] += VAR_2;
    VAR_0[1] += VAR_3;
    VAR_0[2] += VAR_3;
    VAR_0[3] += VAR_2;
    VAR_0[4] += VAR_4;
    VAR_0[5] += VAR_3;
    VAR_0[6] += VAR_3;

    VAR_0[0] -= VAR_1[0];
    VAR_0[1] -= VAR_1[1];
    VAR_0[2] -= VAR_1[2];
    VAR_0[3] -= VAR_1[3];
    VAR_0[4] -= VAR_1[4];
    VAR_0[5] -= VAR_1[5];
    VAR_0[6] -= VAR_1[6];
}
