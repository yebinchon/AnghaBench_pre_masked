
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;
typedef scalar_t__ cmsFloat64Number ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_8(cmsFloat64Number VAR_1)
{
    cmsHPROFILE VAR_2;
    cmsFloat64Number VAR_3;

    VAR_2 =FUNC_0(VAR_1, VAR_0);
    FUNC_5(FUNC_1(), VAR_2, "lcmstac.icc");
    FUNC_2(FUNC_1(), VAR_2);

    VAR_2 = FUNC_4(FUNC_1(), "lcmstac.icc", "r");
    VAR_3 = FUNC_3(FUNC_1(), VAR_2);
    FUNC_2(FUNC_1(), VAR_2);

    FUNC_7("lcmstac.icc");

    if (FUNC_6(VAR_3 - VAR_1) > 5) return 0;

    return 1;
}
