
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static
int FUNC_6(void)
{
    cmsHPROFILE VAR_2 = FUNC_0();
    cmsHPROFILE VAR_3 = FUNC_4(FUNC_1());

    cmsHTRANSFORM VAR_4 = FUNC_3(FUNC_1(),
        VAR_3, VAR_1,
        VAR_2, VAR_1,
        VAR_0, 0);

    FUNC_5(FUNC_1(), VAR_4);
    FUNC_2(FUNC_1(), VAR_2);
    FUNC_2(FUNC_1(), VAR_3);

    return 1;
}
