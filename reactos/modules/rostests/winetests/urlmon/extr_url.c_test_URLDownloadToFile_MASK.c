
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IBindStatusCallback ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_4 (int ) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int *) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_6 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,char*,scalar_t__) ;
 scalar_t__ VAR_35 ;

__attribute__((used)) static void FUNC_9(DWORD VAR_36, BOOL VAR_37)
{
    BOOL VAR_38;
    HRESULT VAR_39;

    FUNC_6(VAR_36, VAR_1 | (VAR_37 ? VAR_0 : 0), VAR_27);

    FUNC_4(VAR_4);
    FUNC_4(VAR_20);
    FUNC_4(VAR_21);
    if(!VAR_33)
        FUNC_4(VAR_23);
    FUNC_4(VAR_16);
    if(VAR_33) {
        if(FUNC_7(VAR_35))
            FUNC_4(VAR_25);
        FUNC_4(VAR_26);
        FUNC_4(VAR_28);
    }else {
        if(VAR_35 == VAR_7 || VAR_35 == VAR_6) {
            FUNC_4(VAR_18);
            FUNC_4(VAR_2);
            FUNC_4(VAR_19);
            FUNC_4(VAR_5);
            FUNC_4(VAR_22);
            FUNC_4(VAR_10);
        }
        if(VAR_35 == VAR_7 || VAR_35 == VAR_6 || VAR_35 == VAR_3)
            FUNC_4(VAR_14);
        if(VAR_35 == VAR_7 || VAR_35 == VAR_6) {
            FUNC_4(VAR_18);
            FUNC_4(VAR_15);
        }
        FUNC_4(VAR_13);
        FUNC_4(VAR_8);
        if(VAR_35 == VAR_3)
            FUNC_4(VAR_9);
        if(VAR_35 == VAR_7 || VAR_35 == VAR_6)
            FUNC_4(VAR_11);
        FUNC_4(VAR_12);
        FUNC_4(VAR_17);
    }

    VAR_39 = FUNC_5(((void*)0), VAR_30, VAR_32, 0, (IBindStatusCallback*)&VAR_29);
    FUNC_8(VAR_39 == VAR_24, "URLDownloadToFile failed: %08x\n", VAR_39);

    FUNC_0(VAR_4);
    FUNC_0(VAR_20);
    if(!VAR_33) {
        FUNC_0(VAR_21);
        FUNC_0(VAR_23);
    }else {
        FUNC_1(VAR_21);
    }
    FUNC_0(VAR_16);
    if(VAR_33) {
        if(FUNC_7(VAR_35))
            FUNC_1(VAR_25);
        FUNC_0(VAR_26);
        FUNC_0(VAR_28);
    }else {
        if(VAR_35 == VAR_7 || VAR_35 == VAR_6) {
            FUNC_0(VAR_18);
            FUNC_0(VAR_2);
            if (VAR_34)
            {
                FUNC_0(VAR_19);
                FUNC_0(VAR_5);
            }
            FUNC_1(VAR_22);
            FUNC_1(VAR_10);
        }
        if(VAR_35 == VAR_3)
            FUNC_0(VAR_14);
        else if(VAR_35 == VAR_7 || VAR_35 == VAR_6)
            FUNC_1(VAR_14);
        if(VAR_35 == VAR_7 || VAR_35 == VAR_6) {
            FUNC_1(VAR_18);
            FUNC_0(VAR_15);
        }
        FUNC_0(VAR_13);
        FUNC_0(VAR_8);
        if(VAR_35 == VAR_3)
            FUNC_0(VAR_9);
        if(VAR_35 == VAR_7 || VAR_35 == VAR_6)
            FUNC_1(VAR_11);
        FUNC_0(VAR_12);
        FUNC_0(VAR_17);
    }

    VAR_38 = FUNC_2(VAR_31);
    FUNC_8(VAR_38, "DeleteFile failed: %u\n", FUNC_3());

    if(VAR_36 != VAR_3 || VAR_37)
        return;

    VAR_39 = FUNC_5(((void*)0), VAR_30, VAR_32, 0, ((void*)0));
    FUNC_8(VAR_39 == VAR_24, "URLDownloadToFile failed: %08x\n", VAR_39);

    VAR_38 = FUNC_2(VAR_31);
    FUNC_8(VAR_38, "DeleteFile failed: %u\n", FUNC_3());
}
