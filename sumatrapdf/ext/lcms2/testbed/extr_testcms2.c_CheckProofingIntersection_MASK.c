
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * cmsHTRANSFORM ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
int FUNC_7(void)
{
    cmsHPROFILE VAR_5, VAR_6, VAR_7;
    cmsHTRANSFORM VAR_8;

    VAR_6 = FUNC_5(FUNC_1());
    VAR_7 = FUNC_0();

    VAR_5 = FUNC_3(FUNC_1());
    VAR_8 = FUNC_4(FUNC_1(),
        VAR_6,
        VAR_2,
        VAR_5,
        VAR_1,
        VAR_7,
        VAR_0,
        VAR_0,
        VAR_3 |
        VAR_4);

    FUNC_2(FUNC_1(), VAR_6);
    FUNC_2(FUNC_1(), VAR_7);
    FUNC_2(FUNC_1(), VAR_5);


    if (VAR_8 == ((void*)0)) return 0;

    FUNC_6(FUNC_1(), VAR_8);
    return 1;
}
