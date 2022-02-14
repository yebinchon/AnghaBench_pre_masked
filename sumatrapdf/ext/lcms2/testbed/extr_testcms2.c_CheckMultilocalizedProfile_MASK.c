
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsMLU ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,char*,char*,char*,int) ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    cmsHPROFILE VAR_3;
    cmsMLU *VAR_4;
    char VAR_5[256];

    VAR_3 = FUNC_3(FUNC_0(), "crayons.icc", "r");

    VAR_4 = (cmsMLU *) FUNC_4(FUNC_0(), VAR_3, VAR_2);
    FUNC_2(FUNC_0(), VAR_4, "en", "GB", VAR_5, 256);
    if (FUNC_5(VAR_5, "Crayon Colours") != 0) return VAR_0;
    FUNC_2(FUNC_0(), VAR_4, "en", "US", VAR_5, 256);
    if (FUNC_5(VAR_5, "Crayon Colors") != 0) return VAR_0;

    FUNC_1(FUNC_0(), VAR_3);

    return VAR_1;
}
