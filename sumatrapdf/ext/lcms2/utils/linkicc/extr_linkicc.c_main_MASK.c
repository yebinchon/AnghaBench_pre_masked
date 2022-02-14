
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int * cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;
typedef int * cmsContext ;
typedef int cmsColorSpaceSignature ;
typedef int Profiles ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 double VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 double VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_4 (int *,char*) ;
 int VAR_7 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,int ,double) ;
 int * FUNC_9 (int *,int **,int,int ,int ,int ,int) ;
 int FUNC_10 (int *,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int *,int ) ;
 int * FUNC_16 (int *,int *,int ,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,...) ;
 scalar_t__ VAR_21 ;
 int FUNC_19 (int **,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;

int FUNC_20(int VAR_24, char *VAR_25[])
{
    int VAR_26, VAR_27, VAR_28;
    cmsHPROFILE VAR_29[257];
    cmsHPROFILE VAR_30;
    cmsUInt32Number VAR_31;
    cmsHTRANSFORM VAR_32 = ((void*)0);
    cmsContext VAR_33 = ((void*)0);


    FUNC_18(VAR_22, "little cms ICC device link generator - v2.2 [LittleCMS %2.2f]\n", VAR_4 / 1000.0);
    FUNC_17(VAR_22);


    FUNC_3(VAR_33, "linkicc");
    VAR_28 = 0;


    FUNC_1(VAR_24, VAR_25);


    VAR_27 = (VAR_24 - VAR_23);
    if (VAR_27 < 1)
        return FUNC_2(0);

    if (VAR_27 > 255) {
        FUNC_0("Holy profile! what are you trying to do with so many profiles!?");
        goto Cleanup;
    }


    FUNC_19(VAR_29, 0, sizeof(VAR_29));
    for (VAR_26=0; VAR_26 < VAR_27; VAR_26++) {

        VAR_29[VAR_26] = FUNC_4(VAR_33, VAR_25[VAR_26 + VAR_23]);
        if (VAR_29[VAR_26] == ((void*)0)) goto Cleanup;

        if (VAR_9 >= 1) {
            FUNC_5(VAR_33, VAR_29[VAR_26]);
        }
    }


    if (VAR_1 != 400.0) {
        cmsColorSpaceSignature VAR_34 = FUNC_12(VAR_33, VAR_29[VAR_27-1]);
        VAR_29[VAR_27++] = FUNC_8(VAR_33, VAR_34, VAR_1);
    }


    VAR_31 = VAR_18;
    switch (VAR_7) {

        case 0: VAR_31 |= VAR_19; break;
        case 2: VAR_31 |= VAR_17; break;
        case 1:
            if (VAR_5 > 0)
                VAR_31 |= FUNC_11(VAR_5);
            break;

        default:
            {
                FUNC_0("Unknown precalculation mode '%d'", VAR_7);
                goto Cleanup;
            }
    }

    if (VAR_0)
        VAR_31 |= VAR_13;

    if (VAR_8)
        VAR_31 |= VAR_16;

    if (VAR_3)
        VAR_31 |= VAR_15|VAR_14;

    if (VAR_21) VAR_31 |= VAR_12;

     FUNC_14(VAR_33, VAR_6);



    VAR_32 = FUNC_9(VAR_33, VAR_29, VAR_27, 0, 0, VAR_2, VAR_31|VAR_20);
    if (VAR_32 == ((void*)0)) {
        FUNC_0("Transform creation failed");
        goto Cleanup;
    }

    VAR_30 = FUNC_16(VAR_33, VAR_32, VAR_10, VAR_31);
    if (VAR_30 == ((void*)0)) {
        FUNC_0("Devicelink creation failed");
        goto Cleanup;
    }

    FUNC_6(VAR_33, VAR_30);
    FUNC_15(VAR_33, VAR_30, VAR_2);

    if (FUNC_13(VAR_33, VAR_30, VAR_11)) {

        if (VAR_9 > 0)
            FUNC_18(VAR_22, "Ok");
    }
    else
        FUNC_0("Error saving file!");

    FUNC_7(VAR_33, VAR_30);


Cleanup:

    if (VAR_32 != ((void*)0)) FUNC_10(VAR_33, VAR_32);
    for (VAR_26=0; VAR_26 < VAR_27; VAR_26++) {

        if (VAR_29[VAR_26] != ((void*)0)) FUNC_7(VAR_33, VAR_29[VAR_26]);
    }

    return VAR_28;
}
