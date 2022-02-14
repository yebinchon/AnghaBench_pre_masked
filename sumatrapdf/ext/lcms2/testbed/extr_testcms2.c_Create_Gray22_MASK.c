
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,double) ;
 int * FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static
cmsHPROFILE FUNC_5(void)
{
    cmsHPROFILE VAR_0;
    cmsToneCurve* VAR_1 = FUNC_1(FUNC_0(), 2.2);
    if (VAR_1 == ((void*)0)) return ((void*)0);

    VAR_0 = FUNC_2(FUNC_0(), FUNC_3(FUNC_0()), VAR_1);
    FUNC_4(FUNC_0(), VAR_1);

    return VAR_0;
}
