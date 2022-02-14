
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int * cmsHTRANSFORM ;
typedef int cmsHPROFILE ;


 int FUNC_0 (int *,int,int,int,int,int,int) ;
 int FUNC_1 (int *,double,double,int,double,double,int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_8(void)
{
    cmsHPROFILE VAR_4 = FUNC_6(FUNC_2());
    cmsHTRANSFORM VAR_5;
    cmsHTRANSFORM VAR_6;


    VAR_5 = FUNC_5(FUNC_2(), VAR_4, VAR_2, VAR_4, VAR_2, VAR_0, 0);
    FUNC_4(FUNC_2(), VAR_4);
    if (VAR_5 == ((void*)0)) return 0;


    if (!FUNC_0(VAR_5, 0, 0, 0, 0, 0, 0)) return 0;
    if (!FUNC_0(VAR_5, 120, 0, 0, 120, 0, 0)) return 0;
    if (!FUNC_0(VAR_5, 0, 222, 255, 0, 222, 255)) return 0;

    VAR_6 = FUNC_3(FUNC_2(), VAR_5, VAR_1, VAR_2);
    if (!VAR_6) return 0;

    if (!FUNC_0(VAR_6, 0, 0, 123, 123, 0, 0)) return 0;
    if (!FUNC_0(VAR_6, 154, 234, 0, 0, 234, 154)) return 0;

    FUNC_7(FUNC_2(),VAR_6);
    VAR_6 = FUNC_3(FUNC_2(), VAR_5, VAR_3, VAR_3);
    if (!VAR_6) return 0;

    if (!FUNC_1(VAR_6, 0.20, 0, 0, 0.20, 0, 0)) return 0;
    if (!FUNC_1(VAR_6, 0, 0.9, 1, 0, 0.9, 1)) return 0;

    FUNC_7(FUNC_2(),VAR_6);
    FUNC_7(FUNC_2(),VAR_5);

return 1;
}
