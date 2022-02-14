
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int OPENSSL_INIT_SETTINGS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int const* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_6 () ;
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
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 scalar_t__ VAR_61 ;
 int VAR_62 ;

int FUNC_7(uint64_t VAR_63, const OPENSSL_INIT_SETTINGS *VAR_64)
{





    if (VAR_61) {
        if (!(VAR_63 & VAR_6))
            FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    if (!FUNC_4(&VAR_26, VAR_42))
        return 0;

    if (VAR_63 & VAR_6)
        return 1;







    if ((VAR_63 & VAR_19) != 0) {
        if (!FUNC_5(&VAR_60, VAR_57,
                          VAR_58))
            return 0;
    } else if (!FUNC_4(&VAR_60, VAR_58)) {
        return 0;
    }

    if (!FUNC_4(&VAR_37, VAR_51))
        return 0;

    if ((VAR_63 & VAR_21)
            && !FUNC_5(&VAR_38,
                             VAR_56,
                             VAR_52))
        return 0;

    if ((VAR_63 & VAR_16)
            && !FUNC_4(&VAR_38, VAR_52))
        return 0;

    if ((VAR_63 & VAR_17)
            && !FUNC_5(&VAR_23, VAR_53,
                             VAR_39))
        return 0;

    if ((VAR_63 & VAR_2)
            && !FUNC_4(&VAR_23, VAR_39))
        return 0;

    if ((VAR_63 & VAR_18)
            && !FUNC_5(&VAR_24, VAR_54,
                             VAR_40))
        return 0;

    if ((VAR_63 & VAR_3)
            && !FUNC_4(&VAR_24, VAR_40))
        return 0;

    if ((VAR_63 & VAR_5)
            && !FUNC_6())
        return 0;

    if ((VAR_63 & VAR_20)
            && !FUNC_5(&VAR_28, VAR_55, VAR_43))
        return 0;

    if (VAR_63 & VAR_15) {
        int VAR_65;
        FUNC_1(VAR_36);
        VAR_27 = VAR_64;
        VAR_65 = FUNC_4(&VAR_28, VAR_43);
        VAR_27 = ((void*)0);
        FUNC_0(VAR_36);
        if (VAR_65 <= 0)
            return 0;
    }

    if ((VAR_63 & VAR_4)
            && !FUNC_4(&VAR_25, VAR_41))
        return 0;


    if ((VAR_63 & VAR_12)
            && !FUNC_4(&VAR_33, VAR_48))
        return 0;

    if ((VAR_63 & VAR_14)
            && !FUNC_4(&VAR_35, VAR_50))
        return 0;

    if ((VAR_63 & VAR_11)
            && !FUNC_4(&VAR_32, VAR_47))
        return 0;


    if ((VAR_63 & VAR_10)
            && !FUNC_4(&VAR_31, VAR_46))
        return 0;


    if ((VAR_63 & VAR_13)
            && !FUNC_4(&VAR_34, VAR_49))
        return 0;







    if ((VAR_63 & VAR_7)
            && !FUNC_4(&VAR_29, VAR_44))
        return 0;


    if (VAR_63 & (VAR_8
                | VAR_12
                | VAR_7)) {
        FUNC_3();
    }



    if ((VAR_63 & VAR_22)
            && !FUNC_4(&VAR_62, VAR_59))
        return 0;


    return 1;
}
