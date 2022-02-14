
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,int *,double) ;
 int VAR_0 ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_8(void)
{
    cmsHPROFILE VAR_1;
    cmsUInt16Number VAR_2[] = {0, 0xffff};
    cmsToneCurve*VAR_3 = FUNC_1(FUNC_0(), 2, VAR_2);

    VAR_1 = FUNC_4(FUNC_0(), "v4gamma.icc", "w");
    if (VAR_1 == ((void*)0)) return 0;


    FUNC_5(FUNC_0(), VAR_1, 4.3);

    if (!FUNC_6(FUNC_0(), VAR_1, VAR_0, VAR_3)) return 0;
    FUNC_2(FUNC_0(), VAR_1);

    FUNC_3(FUNC_0(), VAR_3);
    FUNC_7("v4gamma.icc");
    return 1;
}
