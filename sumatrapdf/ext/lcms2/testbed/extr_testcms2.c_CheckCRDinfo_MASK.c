
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsTagSignature ;
typedef int cmsMLU ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,char*,char*,char*,int) ;
 int FUNC_4 (int ,int *,char*,char*,char*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_8(cmsInt32Number VAR_0, cmsHPROFILE VAR_1, cmsTagSignature VAR_2)
{
    cmsMLU *VAR_3;
    char VAR_4[256];
    cmsInt32Number VAR_5;

    switch (VAR_0) {

        case 1:
            VAR_3 = FUNC_1(FUNC_0(), 5);

            FUNC_4(FUNC_0(), VAR_3, "PS", "nm", L"test postscript");
            FUNC_4(FUNC_0(), VAR_3, "PS", "#0", L"perceptual");
            FUNC_4(FUNC_0(), VAR_3, "PS", "#1", L"relative_colorimetric");
            FUNC_4(FUNC_0(), VAR_3, "PS", "#2", L"saturation");
            FUNC_4(FUNC_0(), VAR_3, "PS", "#3", L"absolute_colorimetric");
            VAR_5 = FUNC_6(FUNC_0(), VAR_1, VAR_2, VAR_3);
            FUNC_2(FUNC_0(), VAR_3);
            return VAR_5;


        case 2:
            VAR_3 = (cmsMLU*) FUNC_5(FUNC_0(), VAR_1, VAR_2);
            if (VAR_3 == ((void*)0)) return 0;



             FUNC_3(FUNC_0(), VAR_3, "PS", "nm", VAR_4, 256);
             if (FUNC_7(VAR_4, "test postscript") != 0) return 0;


             FUNC_3(FUNC_0(), VAR_3, "PS", "#0", VAR_4, 256);
             if (FUNC_7(VAR_4, "perceptual") != 0) return 0;


             FUNC_3(FUNC_0(), VAR_3, "PS", "#1", VAR_4, 256);
             if (FUNC_7(VAR_4, "relative_colorimetric") != 0) return 0;


             FUNC_3(FUNC_0(), VAR_3, "PS", "#2", VAR_4, 256);
             if (FUNC_7(VAR_4, "saturation") != 0) return 0;


             FUNC_3(FUNC_0(), VAR_3, "PS", "#3", VAR_4, 256);
             if (FUNC_7(VAR_4, "absolute_colorimetric") != 0) return 0;
             return 1;

        default:
            return 0;
    }
}
