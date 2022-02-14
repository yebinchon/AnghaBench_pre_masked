
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IUri ;
typedef int IInternetSession ;
typedef int IInternetProtocolEx ;
typedef int IInternetProtocol ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int *,int,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int *,void**) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ,int *,int *,int,int ) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int *,int ,int *,int *,int **,int ) ;
 scalar_t__ FUNC_15 (int *,int *,int *,int ,int ,int *,int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int *,int ) ;
 int FUNC_18 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_19 (int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_20 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_21 (int ,int) ;
 int VAR_30 ;
 int * VAR_31 ;
 int VAR_32 ;
 int * VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int * VAR_39 ;
 scalar_t__ VAR_40 ;
 int FUNC_22 (int,int) ;
 scalar_t__ VAR_41 ;
 int FUNC_23 (int,char*,...) ;
 scalar_t__ FUNC_24 (int ,int **,int ) ;
 scalar_t__ FUNC_25 (int ,int ,int ,int **) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int * VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;

__attribute__((used)) static void FUNC_26(int VAR_49, DWORD VAR_50, DWORD VAR_51)
{
    IInternetProtocolEx *VAR_52 = ((void*)0);
    IInternetProtocol *VAR_53;
    IInternetSession *VAR_54;
    IUri *VAR_55 = ((void*)0);
    ULONG VAR_56;
    HRESULT VAR_57;

    VAR_43 = VAR_50;

    FUNC_22(VAR_49, VAR_51|VAR_23);

    VAR_57 = FUNC_24(0, &VAR_54, 0);
    FUNC_23(VAR_57 == VAR_19, "CoInternetGetSession failed: %08x\n", VAR_57);

    if(VAR_51 & VAR_24) {
        VAR_57 = FUNC_15(VAR_54, &VAR_1, &VAR_10, VAR_46[VAR_49], 0, ((void*)0), 0);
        FUNC_23(VAR_57 == VAR_19, "RegisterNameSpace failed: %08x\n", VAR_57);
    }

    VAR_57 = FUNC_14(VAR_54, ((void*)0), VAR_33[VAR_49], ((void*)0), ((void*)0), &VAR_53, 0);
    VAR_31 = VAR_53;
    FUNC_23(VAR_57 == VAR_19, "CreateBinding failed: %08x\n", VAR_57);
    FUNC_23(VAR_53 != ((void*)0), "protocol == NULL\n");

    VAR_57 = FUNC_9(VAR_53, &VAR_7, (void**)&VAR_44);
    FUNC_23(VAR_57 == VAR_19, "QueryInterface(IID_IInternetBindInfo) failed: %08x\n", VAR_57);

    VAR_57 = FUNC_9(VAR_53, &VAR_9, (void**)&VAR_32);
    FUNC_23(VAR_57 == VAR_19, "QueryInterface(IID_IInternetProtocolSink) failed: %08x\n", VAR_57);

    if(VAR_51 & VAR_25) {
        VAR_57 = FUNC_9(VAR_53, &VAR_8, (void**)&VAR_52);
        FUNC_23(VAR_57 == VAR_19, "Could not get IInternetProtocolEx iface: %08x\n", VAR_57);

        VAR_57 = FUNC_25(VAR_33[VAR_49], VAR_28, 0, &VAR_55);
        FUNC_23(VAR_57 == VAR_19, "CreateUri failed: %08x\n", VAR_57);
    }

    VAR_37 = 0;
    FUNC_19(VAR_16);
    FUNC_19(VAR_3);
    FUNC_19(VAR_18);
    FUNC_19(VAR_20);
    if(VAR_40)
        FUNC_19(VAR_22);
    else
        FUNC_19(VAR_21);

    VAR_38 = VAR_19;

    if(VAR_52) {
        VAR_57 = FUNC_4(VAR_52, VAR_55, &VAR_47, &VAR_30, VAR_43, 0);
        FUNC_23(VAR_57 == VAR_19, "StartEx failed: %08x\n", VAR_57);
    }else {
        VAR_57 = FUNC_11(VAR_53, VAR_33[VAR_49], &VAR_47, &VAR_30, VAR_43, 0);
        FUNC_23(VAR_57 == VAR_19, "Start failed: %08x\n", VAR_57);
    }

    FUNC_0(VAR_16);
    FUNC_0(VAR_3);
    FUNC_0(VAR_18);
    FUNC_1(VAR_20);
    if(VAR_40)
        FUNC_0(VAR_22);
    else
        FUNC_0(VAR_21);

    if(VAR_52)
        FUNC_3(VAR_52);
    if(VAR_55)
        FUNC_18(VAR_55);

    if(VAR_49 == VAR_6 || VAR_49 == VAR_5) {
        while(VAR_45 < 4) {
            FUNC_23( FUNC_21(VAR_35, 90000) == VAR_29, "wait timed out\n" );
            if(VAR_41 && VAR_39) {
                FUNC_19(VAR_2);
                FUNC_7(VAR_39, VAR_42);
                FUNC_0(VAR_2);
            }else {
                FUNC_19(VAR_2);
                FUNC_7(VAR_53, VAR_42);
                FUNC_0(VAR_2);
            }
            if(VAR_48 && VAR_45 == 2) {
                FUNC_19(VAR_0);
                VAR_57 = FUNC_6(VAR_53, VAR_4, 0);
                FUNC_23(VAR_57 == VAR_19, "Abort failed: %08x\n", VAR_57);
                FUNC_0(VAR_0);

                VAR_57 = FUNC_6(VAR_53, VAR_4, 0);
                FUNC_23(VAR_57 == VAR_19, "Abort failed: %08x\n", VAR_57);
                FUNC_20(VAR_36);
                break;
            }
            FUNC_20(VAR_36);
        }
        if(VAR_34)
            FUNC_0(VAR_17);
        FUNC_23( FUNC_21(VAR_35, 90000) == VAR_29, "wait timed out\n" );
    }else {
        if(VAR_41)
            FUNC_19(VAR_12);
        else
            FUNC_19(VAR_11);
        VAR_57 = FUNC_8(VAR_53, 0);
        FUNC_23(VAR_57 == VAR_19, "LockRequest failed: %08x\n", VAR_57);
        if(VAR_41)
            FUNC_0(VAR_12);
        else
            FUNC_0(VAR_11);

        if(VAR_41)
            FUNC_19(VAR_14);
        else
            FUNC_19(VAR_27);
        VAR_57 = FUNC_13(VAR_53);
        FUNC_23(VAR_57 == VAR_19, "UnlockRequest failed: %08x\n", VAR_57);
        if(VAR_41)
            FUNC_0(VAR_14);
        else
            FUNC_0(VAR_27);
    }

    if(VAR_41)
        FUNC_19(VAR_13);
    else
        FUNC_19(VAR_26);
    VAR_57 = FUNC_12(VAR_53, 0);
    FUNC_23(VAR_57 == VAR_19, "Terminate failed: %08x\n", VAR_57);
    if(VAR_41)
        FUNC_1(VAR_13);
    else
        FUNC_0(VAR_26);

    if(VAR_39)
        FUNC_10(VAR_39);
    FUNC_2(VAR_44);
    FUNC_5(VAR_32);

    FUNC_19(VAR_15);
    VAR_56 = FUNC_10(VAR_53);
    FUNC_23(!VAR_56, "ref=%u, expected 0\n", VAR_56);
    FUNC_0(VAR_15);

    if(VAR_51 & VAR_24) {
        VAR_57 = FUNC_17(VAR_54, &VAR_1, VAR_46[VAR_49]);
        FUNC_23(VAR_57 == VAR_19, "UnregisterNameSpace failed: %08x\n", VAR_57);
    }

    FUNC_16(VAR_54);
}
