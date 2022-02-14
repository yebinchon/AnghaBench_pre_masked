
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    cmsHPROFILE VAR_3;
    cmsHTRANSFORM VAR_4;
    cmsInt32Number VAR_5;

    VAR_3 = FUNC_1();
    VAR_4 = FUNC_4(FUNC_2(), VAR_3, VAR_1, VAR_3, VAR_1, VAR_3,
                                VAR_0, VAR_0, VAR_2);
    FUNC_3(FUNC_2(), VAR_3);
    VAR_5 = FUNC_0(VAR_4, 3);
    FUNC_5(FUNC_2(), VAR_4);
    return VAR_5;
}
