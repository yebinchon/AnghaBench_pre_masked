
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef scalar_t__ ULONG ;
typedef int LPCWSTR ;
typedef int IUnknown ;
typedef int IInternetProtocolInfo ;
typedef int IClassFactory ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int ,int *,int *,void**) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int *,int *,int *,void**) ;
 int FUNC_8 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ,int *,int,int*) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_12 (int *,int *,void**) ;
 int FUNC_13 (int *) ;
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
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_16 (int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ FUNC_17 (int ,int) ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_18 (int *) ;
 int VAR_39 ;
 int FUNC_19 (int ) ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 int FUNC_20 (int ,int) ;
 int VAR_47 ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (int,char*,...) ;
 scalar_t__ VAR_48 ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;

__attribute__((used)) static void FUNC_25(LPCWSTR VAR_51, int VAR_52, DWORD VAR_53, DWORD VAR_54)
{
    IInternetProtocolInfo *VAR_55;
    IClassFactory *VAR_56;
    IUnknown *VAR_57;
    HRESULT VAR_58;

    FUNC_21(VAR_52, VAR_53);
    VAR_47 = VAR_51;
    VAR_46 = VAR_54;
    if(VAR_53 & VAR_32)
        FUNC_19(VAR_51);

    VAR_58 = FUNC_3(VAR_52 == VAR_8 ? &VAR_4 : &VAR_3,
            VAR_2, ((void*)0), &VAR_13, (void**)&VAR_57);
    FUNC_22(VAR_58 == VAR_29, "CoGetClassObject failed: %08x\n", VAR_58);
    if(FUNC_5(VAR_58))
        return;

    VAR_58 = FUNC_12(VAR_57, &VAR_12, (void**)&VAR_55);
    FUNC_22(VAR_58 == VAR_6,
        "Could not get IInternetProtocolInfo interface: %08x, expected E_NOINTERFACE\n",
        VAR_58);

    VAR_58 = FUNC_12(VAR_57, &VAR_10, (void**)&VAR_56);
    FUNC_22(VAR_58 == VAR_29, "Could not get IClassFactory interface\n");
    FUNC_13(VAR_57);
    if(FUNC_5(VAR_58))
        return;

    VAR_58 = FUNC_7(VAR_56, ((void*)0), &VAR_11,
                                        (void**)&VAR_35);
    FUNC_22(VAR_58 == VAR_29, "Could not get IInternetProtocol: %08x\n", VAR_58);
    if(FUNC_15(VAR_58)) {
        BYTE VAR_59[3600];
        DWORD VAR_60;
        ULONG VAR_61;

        FUNC_23(VAR_35);

        FUNC_14(VAR_21);
        if(VAR_45) {
            FUNC_14(VAR_22);
            FUNC_14(VAR_20);
        }
        FUNC_14(VAR_26);
        if(VAR_49 && !(VAR_38 & VAR_1))
            FUNC_14(VAR_25);
        FUNC_14(VAR_23);
        if(VAR_52 == VAR_9)
            FUNC_14(VAR_19);
        else
            FUNC_14(VAR_17);
        if(!(VAR_37 & VAR_0)) {
            FUNC_14(VAR_16);
            FUNC_14(VAR_24);
            FUNC_14(VAR_18);
        } else {
            FUNC_14(VAR_30);
        }

        if(!FUNC_20(VAR_51, (VAR_53 & VAR_33) != 0)) {
            FUNC_9(VAR_35, VAR_5, 0);
            FUNC_11(VAR_35);
            return;
        }

        if(!VAR_40 && !VAR_48 && !VAR_36)
            FUNC_14(VAR_27);

        if(VAR_53 & VAR_31)
            VAR_44 = VAR_14;
        else if(VAR_48)
            VAR_44 = VAR_5;
        else
            VAR_44 = VAR_29;

        if(VAR_40) {
            FUNC_14(VAR_30);
            while(VAR_50) {
                FUNC_22( FUNC_17(VAR_42, 90000) == VAR_34, "wait timed out\n" );
                FUNC_0(VAR_30);
                FUNC_18(&VAR_39);
                FUNC_16(VAR_43);
            }
        }else if(VAR_36) {
            BYTE VAR_62[1500];

            VAR_58 = FUNC_10(VAR_35, VAR_62, 100, &VAR_60);
            FUNC_22(VAR_58 == VAR_29 && VAR_60 == 100, "Read failed: %08x (%d bytes)\n", VAR_58, VAR_60);

            FUNC_14(VAR_27);
            VAR_58 = FUNC_10(VAR_35, VAR_62, sizeof(VAR_62), &VAR_60);
            FUNC_22(VAR_58 == VAR_29 && VAR_60 == 900, "Read failed: %08x (%d bytes)\n", VAR_58, VAR_60);
            FUNC_0(VAR_27);

            VAR_58 = FUNC_10(VAR_35, VAR_62, sizeof(VAR_62), &VAR_60);
            FUNC_22(VAR_58 == VAR_28 && !VAR_60, "Read failed: %08x (%d bytes)\n", VAR_58, VAR_60);
        }else {
            VAR_58 = FUNC_10(VAR_35, VAR_59, 1, &VAR_60);
            FUNC_22((VAR_58 == VAR_7 && VAR_60==0) ||
               (VAR_58 == VAR_29 && VAR_60==1), "Read failed: %08x (%d bytes)\n", VAR_58, VAR_60);

            FUNC_22( FUNC_17(VAR_41, 90000) == VAR_34, "wait timed out\n" );
            if(VAR_37 & VAR_0)
                FUNC_0(VAR_30);
            else
                FUNC_0(VAR_18);
            if(VAR_52 == VAR_8)
                FUNC_2(VAR_17);

            while(1) {
                if(VAR_37 & VAR_0)
                    FUNC_14(VAR_30);
                else
                    FUNC_14(VAR_18);
                VAR_58 = FUNC_10(VAR_35, VAR_59, sizeof(VAR_59), &VAR_60);
                if(VAR_58 == VAR_7) {
                    VAR_58 = FUNC_10(VAR_35, VAR_59, 1, &VAR_60);
                    FUNC_22((VAR_58 == VAR_7 && VAR_60==0) ||
                       (VAR_58 == VAR_29 && VAR_60==1), "Read failed: %08x (%d bytes)\n", VAR_58, VAR_60);
                    FUNC_22( FUNC_17(VAR_41, 90000) == VAR_34, "wait timed out\n" );
                    if(VAR_37 & VAR_0)
                        FUNC_0(VAR_30);
                    else
                        FUNC_0(VAR_18);

                    if(VAR_48) {
                        HRESULT VAR_63;

                        FUNC_14(VAR_27);
                        VAR_63 = FUNC_9(VAR_35, VAR_5, 0);
                        FUNC_22(VAR_63 == VAR_29, "Abort failed: %08x\n", VAR_63);
                        FUNC_0(VAR_27);

                        VAR_63 = FUNC_9(VAR_35, VAR_5, 0);
                        FUNC_22(VAR_63 == VAR_15 || VAR_63 == VAR_29 , "Abort failed: %08x\n", VAR_63);
                        break;
                    }
                }else {
                    if(VAR_37 & VAR_0)
                        FUNC_1(VAR_30);
                    else
                        FUNC_1(VAR_18);
                    if(VAR_60 == 0) break;
                }
            }
            if(!VAR_48) {
                FUNC_22(VAR_58 == VAR_28, "Read failed: %08x\n", VAR_58);
                FUNC_0(VAR_27);
            }
        }
        if(VAR_52 == VAR_8)
            FUNC_2(VAR_26);

        if (VAR_52 == VAR_9 || VAR_52 == VAR_8)
            FUNC_2(VAR_21);

        VAR_58 = FUNC_9(VAR_35, VAR_5, 0);
        FUNC_22(VAR_58 == VAR_15 || VAR_58 == VAR_29 , "Abort failed: %08x\n", VAR_58);

        FUNC_24(VAR_35);

        VAR_58 = FUNC_9(VAR_35, VAR_5, 0);
        FUNC_22(VAR_58 == VAR_29, "Abort failed: %08x\n", VAR_58);

        VAR_61 = FUNC_11(VAR_35);
        FUNC_22(!VAR_61, "ref=%x\n", VAR_61);
    }

    FUNC_8(VAR_56);

    if(VAR_53 & VAR_32) {
        BOOL VAR_64;

        VAR_64 = FUNC_4(VAR_51);
        FUNC_22(VAR_64, "DeleteUrlCacheEntryA failed: %u\n", FUNC_6());
    }
}
