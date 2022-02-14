
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;


 int FUNC_0 (int ,int,double) ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static
cmsInt32Number FUNC_7(void)
{
    cmsHPROFILE VAR_3 = FUNC_1();
    cmsHPROFILE VAR_4 = FUNC_4(FUNC_2(), ((void*)0));
    cmsHTRANSFORM VAR_5;

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) return 0;

    VAR_5 = FUNC_5(FUNC_2(), VAR_3, VAR_1, VAR_4, VAR_2, VAR_0, 0);
    FUNC_3(FUNC_2(), VAR_3); FUNC_3(FUNC_2(), VAR_4);

    if (!FUNC_0(VAR_5, 0, 0)) return 0;
    if (!FUNC_0(VAR_5, 125, 52.768)) return 0;
    if (!FUNC_0(VAR_5, 200, 81.069)) return 0;
    if (!FUNC_0(VAR_5, 255, 100.0)) return 0;

    FUNC_6(FUNC_2(), VAR_5);
    return 1;
}
