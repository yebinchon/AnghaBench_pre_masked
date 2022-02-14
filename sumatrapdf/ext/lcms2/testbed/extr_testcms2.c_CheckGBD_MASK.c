
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef int * cmsHANDLE ;
struct TYPE_8__ {int L; int a; int b; } ;
typedef TYPE_1__ cmsCIELab ;
struct TYPE_9__ {int L; int C; int h; } ;
typedef TYPE_2__ cmsCIELCh ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,scalar_t__*,TYPE_1__*,int) ;
 int VAR_3 ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *,TYPE_1__*) ;
 int FUNC_11 (int ,int *,TYPE_1__*) ;
 int FUNC_12 (int ,int *,int ) ;
 int FUNC_13 (int ,TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_14(void)
{
    cmsCIELab VAR_4;
    cmsHANDLE VAR_5;
    cmsInt32Number VAR_6, VAR_7, VAR_8;
    cmsUInt32Number VAR_9, VAR_10, VAR_11;
    cmsHPROFILE VAR_12, VAR_13;
    cmsHTRANSFORM VAR_14;

    VAR_5 = FUNC_8(FUNC_0());
    if (VAR_5 == ((void*)0)) return 0;


    FUNC_1("Filling RAW gamut");

    for (VAR_6=0; VAR_6 <= 100; VAR_6 += 10)
        for (VAR_7 = -128; VAR_7 <= 128; VAR_7 += 5)
            for (VAR_8 = -128; VAR_8 <= 128; VAR_8 += 5) {

                VAR_4.L = VAR_6;
                VAR_4.a = VAR_7;
                VAR_4.b = VAR_8;
                if (!FUNC_10(FUNC_0(), VAR_5, &VAR_4)) return 0;
            }


    FUNC_1("computing Lab gamut");
    if (!FUNC_12(FUNC_0(), VAR_5, 0)) return 0;



    FUNC_1("checking Lab gamut");
    for (VAR_6=10; VAR_6 <= 90; VAR_6 += 25)
        for (VAR_7 = -120; VAR_7 <= 120; VAR_7 += 25)
            for (VAR_8 = -120; VAR_8 <= 120; VAR_8 += 25) {

                VAR_4.L = VAR_6;
                VAR_4.a = VAR_7;
                VAR_4.b = VAR_8;
                if (!FUNC_11(FUNC_0(), VAR_5, &VAR_4)) {
                    return 0;
                }
            }
    FUNC_9(FUNC_0(), VAR_5);



    FUNC_1("checking sRGB gamut");
    VAR_5 = FUNC_8(FUNC_0());
    VAR_13 = FUNC_5(FUNC_0());
    VAR_12 = FUNC_3(FUNC_0(), ((void*)0));

    VAR_14 = FUNC_4(FUNC_0(), VAR_13, VAR_2, VAR_12, VAR_1, VAR_0, VAR_3);
    FUNC_2(FUNC_0(), VAR_13); FUNC_2(FUNC_0(), VAR_12);


    for (VAR_9=0; VAR_9 < 256; VAR_9 += 5) {
        for (VAR_10=0; VAR_10 < 256; VAR_10 += 5)
            for (VAR_11=0; VAR_11 < 256; VAR_11 += 5) {


                cmsUInt8Number VAR_15[3];

                VAR_15[0] = (cmsUInt8Number) VAR_9;
                VAR_15[1] = (cmsUInt8Number) VAR_10;
                VAR_15[2] = (cmsUInt8Number) VAR_11;

                FUNC_7(FUNC_0(), VAR_14, VAR_15, &VAR_4, 1);



                if (!FUNC_10(FUNC_0(), VAR_5, &VAR_4)) {
                    FUNC_9(FUNC_0(), VAR_5);
                    return 0;
                }


            }
    }


    if (!FUNC_12(FUNC_0(), VAR_5, 0)) return 0;


    for (VAR_9=10; VAR_9 < 200; VAR_9 += 10) {
        for (VAR_10=10; VAR_10 < 200; VAR_10 += 10)
            for (VAR_11=10; VAR_11 < 200; VAR_11 += 10) {


                cmsUInt8Number VAR_16[3];

                VAR_16[0] = (cmsUInt8Number) VAR_9;
                VAR_16[1] = (cmsUInt8Number) VAR_10;
                VAR_16[2] = (cmsUInt8Number) VAR_11;

                FUNC_7(FUNC_0(), VAR_14, VAR_16, &VAR_4, 1);
                if (!FUNC_11(FUNC_0(), VAR_5, &VAR_4)) {

                    FUNC_6(FUNC_0(), VAR_14);
                    FUNC_9(FUNC_0(), VAR_5);
                    return 0;
                }
            }
    }


    FUNC_6(FUNC_0(), VAR_14);
    FUNC_9(FUNC_0(), VAR_5);

    FUNC_1("checking LCh chroma ring");
    VAR_5 = FUNC_8(FUNC_0());


    for (VAR_9=0; VAR_9 < 360; VAR_9++) {

        cmsCIELCh VAR_17;

        VAR_17.L = 70;
        VAR_17.C = 60;
        VAR_17.h = VAR_9;

        FUNC_13(FUNC_0(), &VAR_4, &VAR_17);
        if (!FUNC_10(FUNC_0(), VAR_5, &VAR_4)) {
                    FUNC_9(FUNC_0(), VAR_5);
                    return 0;
                }
    }


    if (!FUNC_12(FUNC_0(), VAR_5, 0)) return 0;

    FUNC_9(FUNC_0(), VAR_5);

    return 1;
}
