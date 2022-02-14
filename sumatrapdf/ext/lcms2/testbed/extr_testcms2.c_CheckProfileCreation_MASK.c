
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;


 int FUNC_0 (int,int *,int ) ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (int,int *,int ) ;
 int FUNC_3 (int,int *,int ) ;
 int FUNC_4 (int,int *,int ) ;
 int FUNC_5 (int,int *,int ) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int,int *,int ) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int,int *,int ) ;
 int FUNC_10 (int,int *,int ) ;
 int FUNC_11 (int,int *,int ) ;
 int FUNC_12 (int,int *,int ,int,int ) ;
 int FUNC_13 (int,int *) ;
 int FUNC_14 (int,int *) ;
 int FUNC_15 (int,int *) ;
 int FUNC_16 (int,int *,int ) ;
 int FUNC_17 (int,int *,int ) ;
 int FUNC_18 (int,int *,int ) ;
 int FUNC_19 (int,int *,int ) ;
 int FUNC_20 (int,int *,int ) ;
 int FUNC_21 (int,int *) ;
 int FUNC_22 (int,int *,int ) ;
 int FUNC_23 () ;
 int VAR_0 ;
 int FUNC_24 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_25 (char*) ;
 int VAR_2 ;
 int FUNC_26 (int ,int *) ;
 int * FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (int ,int *) ;
 scalar_t__ FUNC_29 (int ,int *) ;
 scalar_t__ FUNC_30 (int ,int *) ;
 scalar_t__ FUNC_31 (int ,int *) ;
 scalar_t__ FUNC_32 (int ,int *) ;
 scalar_t__ FUNC_33 (int ,int *,int ) ;
 int * FUNC_34 (int ,char*,char*) ;
 int FUNC_35 (int ,int *,char*) ;
 int FUNC_36 (int ,int *,scalar_t__) ;
 int FUNC_37 (int ,int *,scalar_t__) ;
 int FUNC_38 (int ,int *,scalar_t__) ;
 int FUNC_39 (int ,int *,scalar_t__) ;
 int FUNC_40 (int ,int *,double) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 scalar_t__ VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_41 (char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_42(void)
{
    cmsHPROFILE VAR_63;
    cmsInt32Number VAR_64;

    VAR_63 = FUNC_27(FUNC_23());
    if (VAR_63 == ((void*)0)) return 0;

    FUNC_40(FUNC_23(), VAR_63, 4.3);
    if (FUNC_32(FUNC_23(), VAR_63) != 0) { FUNC_24("Empty profile with nonzero number of tags"); goto Error; }
    if (FUNC_33(FUNC_23(), VAR_63, VAR_3)) { FUNC_24("Found a tag in an empty profile"); goto Error; }

    FUNC_36(FUNC_23(), VAR_63, VAR_56);
    if (FUNC_28(FUNC_23(), VAR_63) != VAR_56) { FUNC_24("Unable to set colorspace"); goto Error; }

    FUNC_39(FUNC_23(), VAR_63, VAR_37);
    if (FUNC_31(FUNC_23(), VAR_63) != VAR_37) { FUNC_24("Unable to set colorspace"); goto Error; }

    FUNC_37(FUNC_23(), VAR_63, VAR_32);
    if (FUNC_29(FUNC_23(), VAR_63) != VAR_32) { FUNC_24("Unable to set deviceclass"); goto Error; }

    FUNC_38(FUNC_23(), VAR_63, VAR_1);
    if (FUNC_30(FUNC_23(), VAR_63) != VAR_1) { FUNC_24("Unable to set rendering intent"); goto Error; }

    for (VAR_64 = 1; VAR_64 <= 2; VAR_64++) {

        FUNC_25("Tags holding XYZ");

        if (!FUNC_22(VAR_64, VAR_63, VAR_13)) goto Error;
        if (!FUNC_22(VAR_64, VAR_63, VAR_35)) goto Error;
        if (!FUNC_22(VAR_64, VAR_63, VAR_54)) goto Error;
        if (!FUNC_22(VAR_64, VAR_63, VAR_40)) goto Error;
        if (!FUNC_22(VAR_64, VAR_63, VAR_41)) goto Error;
        if (!FUNC_22(VAR_64, VAR_63, VAR_38)) goto Error;

        FUNC_25("Tags holding curves");

        if (!FUNC_7(VAR_64, VAR_63, VAR_14)) goto Error;
        if (!FUNC_7(VAR_64, VAR_63, VAR_34)) goto Error;
        if (!FUNC_7(VAR_64, VAR_63, VAR_36)) goto Error;
        if (!FUNC_7(VAR_64, VAR_63, VAR_55)) goto Error;

        FUNC_25("Tags holding text");

        if (!FUNC_19(VAR_64, VAR_63, VAR_16)) goto Error;
        if (!FUNC_19(VAR_64, VAR_63, VAR_58)) goto Error;

        if (!FUNC_18(VAR_64, VAR_63, VAR_23)) goto Error;
        if (!FUNC_18(VAR_64, VAR_63, VAR_47)) goto Error;
        if (!FUNC_18(VAR_64, VAR_63, VAR_30)) goto Error;
        if (!FUNC_18(VAR_64, VAR_63, VAR_31)) goto Error;
        if (!FUNC_18(VAR_64, VAR_63, VAR_62)) goto Error;



        FUNC_25("Tags holding cmsICCData");

        if (!FUNC_4(VAR_64, VAR_63, VAR_48)) goto Error;
        if (!FUNC_4(VAR_64, VAR_63, VAR_49)) goto Error;
        if (!FUNC_4(VAR_64, VAR_63, VAR_50)) goto Error;
        if (!FUNC_4(VAR_64, VAR_63, VAR_51)) goto Error;
        if (!FUNC_4(VAR_64, VAR_63, VAR_52)) goto Error;
        if (!FUNC_4(VAR_64, VAR_63, VAR_53)) goto Error;

        FUNC_25("Tags holding signatures");

        if (!FUNC_17(VAR_64, VAR_63, VAR_22)) goto Error;
        if (!FUNC_17(VAR_64, VAR_63, VAR_43)) goto Error;
        if (!FUNC_17(VAR_64, VAR_63, VAR_57)) goto Error;
        if (!FUNC_17(VAR_64, VAR_63, VAR_60)) goto Error;

        FUNC_25("Tags holding date_time");

        if (!FUNC_5(VAR_64, VAR_63, VAR_15)) goto Error;
        if (!FUNC_5(VAR_64, VAR_63, VAR_29)) goto Error;

        FUNC_25("Tags holding named color lists");

        if (!FUNC_12(VAR_64, VAR_63, VAR_21, 15, VAR_0)) goto Error;
        if (!FUNC_12(VAR_64, VAR_63, VAR_20, 15, VAR_0)) goto Error;
        if (!FUNC_12(VAR_64, VAR_63, VAR_42, 4096, VAR_2)) goto Error;

        FUNC_25("Tags holding LUTs");

        if (!FUNC_9(VAR_64, VAR_63, VAR_3)) goto Error;
        if (!FUNC_9(VAR_64, VAR_63, VAR_4)) goto Error;
        if (!FUNC_9(VAR_64, VAR_63, VAR_5)) goto Error;
        if (!FUNC_9(VAR_64, VAR_63, VAR_6)) goto Error;
        if (!FUNC_9(VAR_64, VAR_63, VAR_7)) goto Error;
        if (!FUNC_9(VAR_64, VAR_63, VAR_8)) goto Error;
        if (!FUNC_9(VAR_64, VAR_63, VAR_44)) goto Error;
        if (!FUNC_9(VAR_64, VAR_63, VAR_45)) goto Error;
        if (!FUNC_9(VAR_64, VAR_63, VAR_46)) goto Error;
        if (!FUNC_9(VAR_64, VAR_63, VAR_33)) goto Error;

        FUNC_25("Tags holding CHAD");
        if (!FUNC_0(VAR_64, VAR_63, VAR_17)) goto Error;

        FUNC_25("Tags holding Chromaticity");
        if (!FUNC_2(VAR_64, VAR_63, VAR_18)) goto Error;

        FUNC_25("Tags holding colorant order");
        if (!FUNC_3(VAR_64, VAR_63, VAR_19)) goto Error;

        FUNC_25("Tags holding measurement");
        if (!FUNC_11(VAR_64, VAR_63, VAR_39)) goto Error;

        FUNC_25("Tags holding CRD info");
        if (!FUNC_1(VAR_64, VAR_63, VAR_24)) goto Error;

        FUNC_25("Tags holding UCR/BG");
        if (!FUNC_20(VAR_64, VAR_63, VAR_61)) goto Error;

        FUNC_25("Tags holding MPE");
        if (!FUNC_10(VAR_64, VAR_63, VAR_25)) goto Error;
        if (!FUNC_10(VAR_64, VAR_63, VAR_26)) goto Error;
        if (!FUNC_10(VAR_64, VAR_63, VAR_27)) goto Error;
        if (!FUNC_10(VAR_64, VAR_63, VAR_28)) goto Error;
        if (!FUNC_10(VAR_64, VAR_63, VAR_9)) goto Error;
        if (!FUNC_10(VAR_64, VAR_63, VAR_10)) goto Error;
        if (!FUNC_10(VAR_64, VAR_63, VAR_11)) goto Error;
        if (!FUNC_10(VAR_64, VAR_63, VAR_12)) goto Error;

        FUNC_25("Tags using screening");
        if (!FUNC_16(VAR_64, VAR_63, VAR_59)) goto Error;

        FUNC_25("Tags holding profile sequence description");
        if (!FUNC_14(VAR_64, VAR_63)) goto Error;
        if (!FUNC_13(VAR_64, VAR_63)) goto Error;

        FUNC_25("Tags holding ICC viewing conditions");
        if (!FUNC_8(VAR_64, VAR_63)) goto Error;

        FUNC_25("VCGT tags");
        if (!FUNC_21(VAR_64, VAR_63)) goto Error;

        FUNC_25("RAW tags");
        if (!FUNC_15(VAR_64, VAR_63)) goto Error;

        FUNC_25("Dictionary meta tags");

        if (!FUNC_6(VAR_64, VAR_63)) goto Error;

        if (VAR_64 == 1) {
            FUNC_35(FUNC_23(), VAR_63, "alltags.icc");
            FUNC_26(FUNC_23(), VAR_63);
            VAR_63 = FUNC_34(FUNC_23(), "alltags.icc", "r");
        }

    }
    FUNC_26(FUNC_23(), VAR_63);
    FUNC_41("alltags.icc");
    return 1;

Error:
    FUNC_26(FUNC_23(), VAR_63);
    FUNC_41("alltags.icc");
    return 0;
}
