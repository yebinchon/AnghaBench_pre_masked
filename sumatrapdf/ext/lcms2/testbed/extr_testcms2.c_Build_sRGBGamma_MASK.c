
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef double cmsFloat64Number ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int,double*) ;

__attribute__((used)) static
cmsToneCurve* FUNC_2(void)
{
    cmsFloat64Number VAR_0[5];

    VAR_0[0] = 2.4;
    VAR_0[1] = 1. / 1.055;
    VAR_0[2] = 0.055 / 1.055;
    VAR_0[3] = 1. / 12.92;
    VAR_0[4] = 0.04045;

    return FUNC_1(FUNC_0(), 4, VAR_0);
}
