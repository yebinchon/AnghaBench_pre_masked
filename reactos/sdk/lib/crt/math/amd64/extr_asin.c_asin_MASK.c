
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;

double
FUNC_0(double VAR_1)
{
    double VAR_2, VAR_3;


    if ((VAR_1 > 1.) || (VAR_1 < -1.)) return VAR_0;


    VAR_2 = (VAR_1 * VAR_1);


    VAR_3 = 0;

    VAR_3 += (15*13*11*9*7*5*3*1./(16*14*12*10*8*6*4*2*17));
    VAR_3 *= VAR_2;

    VAR_3 += (13*11*9*7*5*3*1./(14*12*10*8*6*4*2*15));
    VAR_3 *= VAR_2;

    VAR_3 += (11*9*7*5*3*1./(12*10*8*6*4*2*13));
    VAR_3 *= VAR_2;

    VAR_3 += (9*7*5*3*1./(10*8*6*4*2*11));
    VAR_3 *= VAR_2;

    VAR_3 += (7*5*3*1./(8*6*4*2*9));
    VAR_3 *= VAR_2;

    VAR_3 += (5*3*1./(6*4*2*7));
    VAR_3 *= VAR_2;

    VAR_3 += (3*1./(4*2*5));
    VAR_3 *= VAR_2;

    VAR_3 += (1./(2*3));
    VAR_3 *= VAR_2;

    VAR_3 += 1.;
    VAR_3 *= VAR_1;

    return VAR_3;
}
