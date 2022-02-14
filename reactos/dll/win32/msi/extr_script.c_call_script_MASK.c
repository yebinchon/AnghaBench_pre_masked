
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VARIANT ;
struct TYPE_6__ {int member_3; int member_2; int * member_1; int * member_0; } ;
struct TYPE_5__ {int IActiveScriptSite_iface; int * installer; int * session; } ;
typedef TYPE_1__ MsiActiveScriptSite ;
typedef int MSIHANDLE ;
typedef scalar_t__* LPCWSTR ;
typedef int INT ;
typedef int IDispatch ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef TYPE_2__ DISPPARAMS ;
typedef int DISPID ;
typedef int CLSID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*,int *,int *,int *,int ,int ,long,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int) ;
 scalar_t__ FUNC_11 (int *,int *,int **) ;
 scalar_t__ FUNC_12 (int *,int *,void**) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int *,int *,int **,int,int ,int *) ;
 scalar_t__ FUNC_17 (int *,int ,int *,int ,int ,TYPE_2__*,int *,int *,int *) ;
 int FUNC_18 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_19 (char*,int ) ;
 int VAR_12 ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,int *,int ,int ) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (TYPE_1__**) ;
 scalar_t__ FUNC_24 (int *,void**) ;
 scalar_t__ FUNC_25 (int ,int *,int **) ;
 int FUNC_26 (scalar_t__*) ;
 int FUNC_27 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

DWORD FUNC_28(MSIHANDLE VAR_18, INT VAR_19, LPCWSTR VAR_20, LPCWSTR VAR_21, LPCWSTR VAR_22)
{
    HRESULT VAR_23;
    IActiveScript *VAR_24 = ((void*)0);
    IActiveScriptParse *VAR_25 = ((void*)0);
    MsiActiveScriptSite *VAR_26;
    IDispatch *VAR_27 = ((void*)0);
    DISPPARAMS VAR_28 = {((void*)0), ((void*)0), 0, 0};
    DISPID VAR_29;
    CLSID VAR_30;
    VARIANT VAR_31;
    DWORD VAR_32 = VAR_2;

    FUNC_2(((void*)0));


    VAR_23 = FUNC_23(&VAR_26);
    if (VAR_23 != VAR_11) goto done;


    VAR_23 = FUNC_24(((void*)0), (void**)&VAR_26->installer);
    if (VAR_23 != VAR_11) goto done;


    VAR_23 = FUNC_25(VAR_18, VAR_26->installer, &VAR_26->session);
    if (VAR_23 != VAR_11) goto done;


    VAR_19 &= VAR_13|VAR_14;
    if (VAR_19 == VAR_13)
        VAR_23 = FUNC_0(VAR_15, &VAR_30);
    else if (VAR_19 == VAR_14)
        VAR_23 = FUNC_0(VAR_17, &VAR_30);
    else {
        FUNC_4("Unknown script type %d\n", VAR_19);
        goto done;
    }
    if (FUNC_5(VAR_23)) {
        FUNC_4("Could not find CLSID for Windows Script\n");
        goto done;
    }
    VAR_23 = FUNC_1(&VAR_30, ((void*)0), VAR_0, &VAR_4, (void **)&VAR_24);
    if (FUNC_5(VAR_23)) {
        FUNC_4("Could not instantiate class for Windows Script\n");
        goto done;
    }

    VAR_23 = FUNC_12(VAR_24, &VAR_5, (void **)&VAR_25);
    if (FUNC_5(VAR_23)) goto done;

    VAR_23 = FUNC_14(VAR_24, &VAR_26->IActiveScriptSite_iface);
    if (FUNC_5(VAR_23)) goto done;

    VAR_23 = FUNC_6(VAR_25);
    if (FUNC_5(VAR_23)) goto done;

    VAR_23 = FUNC_10(VAR_24, VAR_16, VAR_8|VAR_9);
    if (FUNC_5(VAR_23)) goto done;

    VAR_23 = FUNC_7(VAR_25, VAR_20, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0L, ((void*)0), ((void*)0));
    if (FUNC_5(VAR_23)) goto done;

    VAR_23 = FUNC_15(VAR_24, VAR_10);
    if (FUNC_5(VAR_23)) goto done;


    if (VAR_21 && VAR_21[0]) {
        FUNC_19("Calling function %s\n", FUNC_26(VAR_21));

        VAR_23 = FUNC_11(VAR_24, ((void*)0), &VAR_27);
        if (FUNC_5(VAR_23)) goto done;

        VAR_23 = FUNC_16(VAR_27, &VAR_6, (WCHAR **)&VAR_21, 1,VAR_7, &VAR_29);
        if (FUNC_5(VAR_23)) goto done;

        VAR_23 = FUNC_17(VAR_27, VAR_29, &VAR_6, VAR_7, VAR_1, &VAR_28, &VAR_31, ((void*)0), ((void*)0));
        if (FUNC_5(VAR_23)) goto done;

        VAR_23 = FUNC_21(&VAR_31, &VAR_31, 0, VAR_12);
        if (FUNC_5(VAR_23)) goto done;

        VAR_32 = FUNC_27(FUNC_20(&VAR_31));

        FUNC_22(&VAR_31);
    } else {

        VAR_32 = VAR_3;
    }

done:

    if (VAR_27) FUNC_18(VAR_27);
    if (VAR_24) FUNC_13(VAR_24);
    if (VAR_25) FUNC_8(VAR_25);
    if (VAR_26)
    {
        if (VAR_26->session) FUNC_18(VAR_26->session);
        if (VAR_26->installer) FUNC_18(VAR_26->installer);
        FUNC_9(&VAR_26->IActiveScriptSite_iface);
    }
    FUNC_3();
    return VAR_32;
}
