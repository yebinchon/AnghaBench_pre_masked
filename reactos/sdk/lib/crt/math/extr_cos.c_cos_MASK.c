
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 double* VAR_2 ;

double
FUNC_0(double VAR_3)
{
    int VAR_4;
    double VAR_5, VAR_6;


    VAR_4 = (int)(VAR_3 * (2./VAR_0));


    VAR_3 = VAR_3 - VAR_4 * (VAR_0/2.);


    VAR_4 = VAR_4 & 0x3;


    VAR_3 += VAR_1[VAR_4];


    VAR_5 = - (VAR_3 * VAR_3);
    VAR_6 = 0;
    VAR_6 += 1./(1.*2*3*4*5*6*7*8);
    VAR_6 *= VAR_5;

    VAR_6 += 1./(1.*2*3*4*5*6);
    VAR_6 *= VAR_5;

    VAR_6 += 1./(1.*2*3*4);
    VAR_6 *= VAR_5;

    VAR_6 += 1./(1.*2);
    VAR_6 *= VAR_5;

    VAR_6 += 1;


    VAR_6 *= VAR_2[VAR_4];

    return VAR_6;
}
