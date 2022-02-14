
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_2(void)
{
    FUNC_1("test5.icc", "sRGB_CSA.ps");
    FUNC_1("aRGBlcms2.icc", "aRGB_CSA.ps");
    FUNC_1("test4.icc", "sRGBV4_CSA.ps");
    FUNC_1("test1.icc", "SWOP_CSA.ps");
    FUNC_1(((void*)0), "Lab_CSA.ps");
    FUNC_1("graylcms2.icc", "gray_CSA.ps");

    FUNC_0("test5.icc", "sRGB_CRD.ps");
    FUNC_0("aRGBlcms2.icc", "aRGB_CRD.ps");
    FUNC_0(((void*)0), "Lab_CRD.ps");
    FUNC_0("test1.icc", "SWOP_CRD.ps");
    FUNC_0("test4.icc", "sRGBV4_CRD.ps");
    FUNC_0("graylcms2.icc", "gray_CRD.ps");

    return 1;
}
