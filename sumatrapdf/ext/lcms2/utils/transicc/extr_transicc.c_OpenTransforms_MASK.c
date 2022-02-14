
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsNAMEDCOLORLIST ;
typedef int * cmsHPROFILE ;
typedef int cmsContext ;
typedef scalar_t__ cmsBool ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int,scalar_t__) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int *,int ,int *,int ,int *,int ,int ,int ) ;
 void* FUNC_8 (int ,int *,int ,int *,int ,int ,int ) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_11 (int ,int *,int,scalar_t__) ;
 int FUNC_12 (int ,int *,int,scalar_t__) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *,int ) ;
 int VAR_31 ;
 int FUNC_17 (int ,int ) ;
 int * FUNC_18 (int ,int *,int ) ;
 int FUNC_19 (int ,int*) ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int * VAR_36 ;
 int * VAR_37 ;
 int * VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int FUNC_20 (char*) ;

__attribute__((used)) static
cmsBool FUNC_21(cmsContext VAR_41)
{
    cmsHPROFILE VAR_42, VAR_43, VAR_44;
    cmsUInt32Number VAR_45, VAR_46, VAR_47;
    cmsNAMEDCOLORLIST* VAR_48;
    int VAR_49;


    VAR_47 = VAR_28;

    if (VAR_39) {

        VAR_42 = FUNC_2(0, VAR_21);
        if (VAR_42 == ((void*)0)) return VAR_1;
        VAR_43 = ((void*)0);
        VAR_44 = ((void*)0);

        if (FUNC_14(VAR_41, VAR_42) == VAR_35) {
            VAR_8 = FUNC_13(VAR_41, VAR_42);
            VAR_3 = FUNC_15(VAR_41, VAR_42);
        }
        else {
            VAR_3 = FUNC_13(VAR_41, VAR_42);
            VAR_8 = FUNC_15(VAR_41, VAR_42);
        }


        if (FUNC_16(VAR_41, VAR_42, VAR_33)) {
            VAR_48 = FUNC_18(VAR_41, VAR_42, VAR_33);
            VAR_4 = FUNC_10(VAR_41, VAR_48);
            VAR_6 = 1;
        }
        else VAR_4 = FUNC_0(VAR_41, VAR_3, VAR_14);

        if (FUNC_16(VAR_41, VAR_42, VAR_32)){

            VAR_48 = FUNC_18(VAR_41, VAR_42, VAR_32);
            VAR_9 = FUNC_10(VAR_41, VAR_48);
            VAR_10 = 1;
        }
        else VAR_9 = FUNC_0(VAR_41, VAR_8, VAR_1);

    }
    else {

        VAR_42 = FUNC_2(0, VAR_21);
        if (VAR_42 == ((void*)0)) return VAR_1;

        VAR_43 = FUNC_2(0, VAR_22);
        if (VAR_43 == ((void*)0)) return VAR_1;
        VAR_44 = ((void*)0);


        if (FUNC_14(VAR_41, VAR_42) == VAR_34 ||
            FUNC_14(VAR_41, VAR_43) == VAR_34)
            FUNC_1("Use %cl flag for devicelink profiles!\n", VAR_13);


        VAR_3 = FUNC_13(VAR_41, VAR_42);
        VAR_8 = FUNC_13(VAR_41, VAR_43);


        if (FUNC_16(VAR_41, VAR_42, VAR_33)) {
            VAR_48 = FUNC_18(VAR_41, VAR_42, VAR_33);
            VAR_4 = FUNC_10(VAR_41, VAR_48);
            if (FUNC_17(VAR_41, VAR_4) <= 3)
                FUNC_4(255, VAR_14);
            else
                FUNC_4(1, VAR_14);

        }
        else VAR_4 = FUNC_0(VAR_41, VAR_3, VAR_14);

        if (FUNC_16(VAR_41, VAR_43, VAR_33)){

            VAR_48 = FUNC_18(VAR_41, VAR_43, VAR_33);
            VAR_9 = FUNC_10(VAR_41, VAR_48);
            if (FUNC_17(VAR_41, VAR_9) <= 3)
                FUNC_4(255, VAR_1);
            else
                FUNC_4(1, VAR_1);
        }
        else VAR_9 = FUNC_0(VAR_41, VAR_8, VAR_1);


        if (VAR_23 != ((void*)0)) {

            VAR_44 = FUNC_2(0, VAR_23);
            if (VAR_44 == ((void*)0)) return VAR_1;
            VAR_47 |= VAR_30;
        }
    }


    if (VAR_20 > 2) {

        FUNC_20("Profile:\n");
        FUNC_3(VAR_41, VAR_42);

        if (VAR_43) {

            FUNC_20("Output profile:\n");
            FUNC_3(VAR_41, VAR_43);
        }

        if (VAR_44 != ((void*)0)) {
            FUNC_20("Proofing profile:\n");
            FUNC_3(VAR_41, VAR_44);
        }
    }



    VAR_45 = FUNC_11(VAR_41, VAR_42, 0, VAR_14);

    if (VAR_39) {

        VAR_46 = FUNC_12(VAR_41, VAR_42, VAR_40 ? 0 : 2, VAR_40);
    }
    else {


        VAR_46 = FUNC_11(VAR_41, VAR_43, VAR_40 ? 0 : 2, VAR_40);
    }


    if (FUNC_14(VAR_41, VAR_42) == VAR_35) {

        VAR_45 = VAR_17;
        VAR_5 = VAR_14;
    }


    switch (VAR_11) {

       case 0: VAR_47 |= VAR_29; break;
       case 2: VAR_47 |= VAR_26; break;
       case 3: VAR_47 |= VAR_27; break;
       case 1: break;

       default:
           FUNC_1("Unknown precalculation mode '%d'", VAR_11);
    }


    if (VAR_0)
        VAR_47 |= VAR_24;


    if (VAR_2) {

        cmsUInt16Number VAR_50[VAR_31];

        if (VAR_44 == ((void*)0))
            FUNC_1("I need proofing profile -p for gamut checking!");

        for (VAR_49=0; VAR_49 < VAR_31; VAR_49++)
            VAR_50[VAR_49] = 0xFFFF;

        FUNC_19(VAR_41, VAR_50);
        VAR_47 |= VAR_25;
    }



    VAR_36 = FUNC_7(VAR_41, VAR_42, VAR_45, VAR_43, VAR_46, VAR_44, VAR_7, VAR_12, VAR_47);

    if (VAR_44) FUNC_5(VAR_41, VAR_44);

    if (VAR_36 == ((void*)0)) return VAR_1;



    VAR_38 = ((void*)0); VAR_37 = ((void*)0);

    if (VAR_43 && VAR_20 > 1) {

        cmsHPROFILE VAR_51 = FUNC_9(VAR_41);
        cmsHPROFILE VAR_52 = FUNC_6(VAR_41, ((void*)0));

        VAR_38 = FUNC_8(VAR_41, VAR_42, VAR_45, VAR_51, VAR_40 ? VAR_19 : VAR_18, VAR_7, VAR_28);
        if (VAR_38 == ((void*)0)) return VAR_1;

        VAR_37 = FUNC_8(VAR_41, VAR_42, VAR_45, VAR_52, VAR_40? VAR_16 : VAR_15, VAR_7, VAR_28);
        if (VAR_37 == ((void*)0)) return VAR_1;

        FUNC_5(VAR_41, VAR_51);
        FUNC_5(VAR_41, VAR_52);
    }

    if (VAR_42) FUNC_5(VAR_41, VAR_42);
    if (VAR_43) FUNC_5(VAR_41, VAR_43);

    return VAR_14;
}
