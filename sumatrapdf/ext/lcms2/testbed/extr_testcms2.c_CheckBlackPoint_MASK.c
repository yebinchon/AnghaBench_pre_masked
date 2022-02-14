
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;
typedef int cmsCIEXYZ ;
typedef int cmsCIELab ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,int *,int *,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_5(void)
{
    cmsHPROFILE VAR_2;
    cmsCIEXYZ VAR_3;
    cmsCIELab VAR_4;

    VAR_2 = FUNC_3(FUNC_0(), "test5.icc", "r");
    FUNC_2(FUNC_0(), &VAR_3, VAR_2, VAR_1, 0);
    FUNC_1(FUNC_0(), VAR_2);


    VAR_2 = FUNC_3(FUNC_0(), "test1.icc", "r");
    FUNC_2(FUNC_0(), &VAR_3, VAR_2, VAR_1, 0);
    FUNC_4(FUNC_0(), ((void*)0), &VAR_4, &VAR_3);
    FUNC_1(FUNC_0(), VAR_2);

    VAR_2 = FUNC_3(FUNC_0(), "lcms2cmyk.icc", "r");
    FUNC_2(FUNC_0(), &VAR_3, VAR_2, VAR_1, 0);
    FUNC_4(FUNC_0(), ((void*)0), &VAR_4, &VAR_3);
    FUNC_1(FUNC_0(), VAR_2);

    VAR_2 = FUNC_3(FUNC_0(), "test2.icc", "r");
    FUNC_2(FUNC_0(), &VAR_3, VAR_2, VAR_1, 0);
    FUNC_4(FUNC_0(), ((void*)0), &VAR_4, &VAR_3);
    FUNC_1(FUNC_0(), VAR_2);

    VAR_2 = FUNC_3(FUNC_0(), "test1.icc", "r");
    FUNC_2(FUNC_0(), &VAR_3, VAR_2, VAR_0, 0);
    FUNC_4(FUNC_0(), ((void*)0), &VAR_4, &VAR_3);
    FUNC_1(FUNC_0(), VAR_2);

    return 1;
}
