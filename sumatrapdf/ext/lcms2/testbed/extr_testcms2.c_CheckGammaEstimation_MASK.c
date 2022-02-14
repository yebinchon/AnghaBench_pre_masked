
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef scalar_t__ cmsFloat64Number ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,double) ;
 double FUNC_3 (scalar_t__) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsToneCurve* VAR_0, cmsFloat64Number VAR_1)
{
    cmsFloat64Number VAR_2 = FUNC_2(FUNC_0(), VAR_0, 0.001);

    FUNC_1("Gamma estimation");
    if (FUNC_3(VAR_2 - VAR_1) > 0.001) return 0;
    return 1;
}
