
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int * cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;
typedef int TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 double VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_6 (int *,char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *,int *,int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *,int *,int *,int) ;
 int VAR_10 ;
 int FUNC_15 (int *,int,int) ;
 int FUNC_16 (int *,int ) ;
 char const* VAR_11 ;
 char const* VAR_12 ;
 int FUNC_17 (int *,int *) ;
 int * FUNC_18 (int ,double) ;
 int * FUNC_19 (int **,int,int ,int ,int ,int ) ;
 int * FUNC_20 (int *,int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_21 (int *,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *,int *) ;
 int * FUNC_24 (char const*,char*) ;
 int FUNC_25 (int ) ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static
int FUNC_26(TIFF* VAR_20, TIFF* VAR_21, const char *VAR_22)
{
    cmsHPROFILE VAR_23, VAR_24, VAR_25, VAR_26 = ((void*)0);
    cmsHTRANSFORM VAR_27;
    cmsUInt32Number VAR_28, VAR_29;
    int VAR_30;
    int VAR_31 = VAR_10 / 8;
    cmsUInt32Number VAR_32 = 0;
    int VAR_33;



    FUNC_25(VAR_5);

    if (VAR_1 && VAR_11)
        FUNC_2(VAR_21, VAR_11);

    if (VAR_0)
        VAR_32 |= VAR_13;


    switch (VAR_8) {

       case 0: VAR_32 |= VAR_17; break;
       case 2: VAR_32 |= VAR_15; break;
       case 3: VAR_32 |= VAR_16; break;
       case 1: break;

       default: FUNC_3("Unknown precalculation mode '%d'", VAR_8);
    }


    if (VAR_2)
        VAR_32 |= VAR_14;

    VAR_25 = ((void*)0);
    VAR_24 = ((void*)0);

    if (VAR_19) {

        VAR_23 = FUNC_24(VAR_22, "r");
    }
    else {

        VAR_23 = FUNC_5(VAR_20);

        if (VAR_23 == ((void*)0))
            VAR_23 = FUNC_6(((void*)0), VAR_22);

        VAR_24 = FUNC_6(((void*)0), VAR_11);

        if (VAR_12 != ((void*)0)) {

            VAR_25 = FUNC_6(((void*)0), VAR_12);
            VAR_32 |= VAR_18;
        }
    }



    VAR_28 = FUNC_4(VAR_20);



    if (FUNC_16(((void*)0), FUNC_22(((void*)0), VAR_23)) != (int) FUNC_11(VAR_28))
        FUNC_3("Input profile is not operating in proper color space");


    if (!VAR_19)
        VAR_30 = FUNC_16(((void*)0), FUNC_22(((void*)0), VAR_24));
    else
        VAR_30 = FUNC_16(((void*)0), FUNC_23(((void*)0), VAR_23));

    VAR_29 = FUNC_0(VAR_28, VAR_30, VAR_31);

    FUNC_15(VAR_21, VAR_30, VAR_31);
    FUNC_1(VAR_20, VAR_21);


    if (VAR_3 != 400.0 &&
        (VAR_30 == VAR_7 || VAR_30 == VAR_6)) {

            cmsHPROFILE VAR_34[10];
            int VAR_35 = 0;


            VAR_26 = FUNC_18(FUNC_22(((void*)0), VAR_24), VAR_3);

            VAR_34[VAR_35++] = VAR_23;
            if (VAR_25) {
                VAR_34[VAR_35++] = VAR_25;
                VAR_34[VAR_35++] = VAR_25;
            }

            VAR_34[VAR_35++] = VAR_24;
            VAR_34[VAR_35++] = VAR_26;

            VAR_27 = FUNC_19(VAR_34, VAR_35,
                                                   VAR_28, VAR_29, VAR_4, VAR_32);

    }
    else {

        VAR_27 = FUNC_20(VAR_23, VAR_28,
                                           VAR_24, VAR_29,
                                           VAR_25, VAR_4,
                                           VAR_9,
                                           VAR_32);
    }

    FUNC_17(((void*)0), VAR_23);
    FUNC_17(((void*)0), VAR_24);

    if (VAR_26)
        FUNC_17(((void*)0), VAR_26);
    if (VAR_25)
        FUNC_17(((void*)0), VAR_25);

    if (VAR_27 == ((void*)0)) return 0;


    if (FUNC_13(VAR_28))
        VAR_33 = FUNC_10(VAR_28) + FUNC_12(VAR_28);
    else
        VAR_33 = 1;



    if (FUNC_8(VAR_20)) {

        FUNC_14(VAR_27, VAR_20, VAR_21, VAR_33);
    }
    else {
        FUNC_7(VAR_27, VAR_20, VAR_21, VAR_33);
    }


    FUNC_21(((void*)0), VAR_27);

    FUNC_9(VAR_21);

    return 1;
}
