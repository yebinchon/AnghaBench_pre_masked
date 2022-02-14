
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef double cmsFloat64Number ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int,double*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *,int *,int) ;
 int * FUNC_5 (int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    cmsFloat64Number VAR_0 = 3.2;
    cmsToneCurve *VAR_1, *VAR_2, *VAR_3;
    cmsInt32Number VAR_4;

    VAR_1 = FUNC_1(FUNC_0(), 108, &VAR_0);
    VAR_2 = FUNC_5(FUNC_0(), VAR_1);
    VAR_3 = FUNC_4(FUNC_0(), VAR_1, VAR_1, 4096);

    FUNC_2(FUNC_0(), VAR_1);
    FUNC_2(FUNC_0(), VAR_2);

    VAR_4 = FUNC_3(FUNC_0(), VAR_3);
    FUNC_2(FUNC_0(), VAR_3);
    return VAR_4;
}
