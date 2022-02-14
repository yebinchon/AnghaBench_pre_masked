
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,double) ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static
cmsHPROFILE FUNC_4(void)
{
    cmsToneCurve* VAR_1 = FUNC_1(FUNC_0(), 1.1);
    cmsToneCurve* VAR_2[3];
    cmsHPROFILE VAR_3;

    VAR_2[0] = VAR_2[1] = VAR_2[2] = VAR_1;
    VAR_3 = FUNC_2(FUNC_0(), VAR_0, VAR_2);

    FUNC_3(FUNC_0(), VAR_1);

    return VAR_3;
}
