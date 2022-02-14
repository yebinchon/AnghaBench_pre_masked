
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
 int FUNC_5 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static
cmsHPROFILE FUNC_6(void)
{
    cmsHPROFILE VAR_1;
    cmsToneCurve* VAR_2 = FUNC_1(FUNC_0(), 1.0);
    if (VAR_2 == ((void*)0)) return ((void*)0);

    VAR_1 = FUNC_2(FUNC_0(), FUNC_3(FUNC_0()), VAR_2);
    FUNC_4(FUNC_0(), VAR_2);

    FUNC_5(FUNC_0(), VAR_1, VAR_0);
    return VAR_1;
}
