
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef int cmsBool ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,double) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,int *,int *,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    cmsToneCurve *VAR_0, *VAR_1, *VAR_2;
    cmsBool VAR_3;

    VAR_0 = FUNC_2(FUNC_0(), 3.0);
    VAR_1 = FUNC_2(FUNC_0(), 3.0);

    VAR_2 = FUNC_5(FUNC_0(), VAR_0, VAR_1, 256);

    FUNC_3(FUNC_0(), VAR_0); FUNC_3(FUNC_0(), VAR_1);

    VAR_3 = FUNC_4(FUNC_0(), VAR_2);
    FUNC_3(FUNC_0(), VAR_2);

    if (!VAR_3)
        FUNC_1("Joining same curve twice does not result in a linear ramp");

    return VAR_3;
}
