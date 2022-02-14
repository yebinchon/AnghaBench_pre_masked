
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;


 int * FUNC_0 (int,int ) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 (int *,char*,char*) ;
 int * FUNC_8 (int ,int,int ,double,int ,int,int,int) ;
 int * FUNC_9 (int ,int ,int) ;
 int * FUNC_10 (int ,int *) ;
 int * FUNC_11 (int ,int *) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 int * FUNC_14 (int ) ;
 int VAR_1 ;

__attribute__((used)) static
cmsInt32Number FUNC_15(void)
{
    cmsHPROFILE VAR_2;

    VAR_2 = FUNC_14(FUNC_6());
    if (!FUNC_7(VAR_2, "sRGB profile", "sRGBlcms2.icc")) return 0;



    VAR_2 = FUNC_1();
    if (!FUNC_7(VAR_2, "aRGB profile", "aRGBlcms2.icc")) return 0;



    VAR_2 = FUNC_3();
    if (!FUNC_7(VAR_2, "Gray profile", "graylcms2.icc")) return 0;



    VAR_2 = FUNC_4();
    if (!FUNC_7(VAR_2, "Gray 3.0 profile", "gray3lcms2.icc")) return 0;



    VAR_2 = FUNC_5();
    if (!FUNC_7(VAR_2, "Gray Lab profile", "glablcms2.icc")) return 0;



    VAR_2 = FUNC_2();
    if (!FUNC_7(VAR_2, "Linearization profile", "linlcms2.icc")) return 0;


    VAR_2 = FUNC_9(FUNC_6(), VAR_1, 150);
    if (VAR_2 == ((void*)0)) return 0;
    if (!FUNC_7(VAR_2, "Ink-limiting profile", "limitlcms2.icc")) return 0;



    VAR_2 = FUNC_10(FUNC_6(), ((void*)0));
    if (!FUNC_7(VAR_2, "Lab 2 identity profile", "labv2lcms2.icc")) return 0;



    VAR_2 = FUNC_11(FUNC_6(), ((void*)0));
    if (!FUNC_7(VAR_2, "Lab 4 identity profile", "labv4lcms2.icc")) return 0;



    VAR_2 = FUNC_13(FUNC_6());
    if (!FUNC_7(VAR_2, "XYZ identity profile", "xyzlcms2.icc")) return 0;



    VAR_2 = FUNC_12(FUNC_6());
    if (!FUNC_7(VAR_2, "NULL profile", "nullcms2.icc")) return 0;



    VAR_2 = FUNC_8(FUNC_6(), 17, 0, 0, 0, 0, 5000, 6000);
    if (!FUNC_7(VAR_2, "BCHS profile", "bchslcms2.icc")) return 0;



    VAR_2 = FUNC_0(300, VAR_0);
    if (!FUNC_7(VAR_2, "Fake CMYK profile", "lcms2cmyk.icc")) return 0;



    VAR_2 = FUNC_8(FUNC_6(), 17, 0, 1.2, 0, 3, 5000, 5000);
    if (!FUNC_7(VAR_2, "Brightness", "brightness.icc")) return 0;
    return 1;
}
