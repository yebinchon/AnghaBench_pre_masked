
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int LowPart; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
typedef int IUriBuilderFactory ;
typedef int IUriBuilder ;
typedef int IUri ;
typedef int IPersistStream ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int,int *,void**) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int **) ;
 int FUNC_6 (int *,int ,int ,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *,int ,int *,int ) ;
 int FUNC_22 (int *,int ,int *,int ) ;
 int FUNC_23 (int *,int ,int *,int ) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (int *,int *) ;
 int FUNC_29 (int *,int *) ;
 int FUNC_30 (int *,int *) ;
 int FUNC_31 (int *,int *,int *) ;
 int FUNC_32 (int *,int *,void**) ;
 int FUNC_33 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_34 (int,char*,int) ;
 int FUNC_35 (char*) ;

__attribute__((used)) static void FUNC_36(void)
{
    IUri *VAR_11;
    IUriBuilderFactory *VAR_12;
    IPersistStream *VAR_13;
    IUriBuilder *VAR_14;
    BSTR VAR_15;
    DWORD VAR_16;
    BOOL VAR_17;
    ULARGE_INTEGER VAR_18;
    HRESULT VAR_19;

    VAR_19 = FUNC_0(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_5, (void**)&VAR_11);
    if(FUNC_1(VAR_19)) {
        FUNC_35("Skipping uninitialized Uri tests.\n");
        return;
    }

    VAR_19 = FUNC_32(VAR_11, &VAR_6, (void**)&VAR_12);
    FUNC_34(VAR_19 == VAR_8, "QueryInterface(IID_IUriBuillderFactory) failed: %x.\n", VAR_19);
    VAR_19 = FUNC_32(VAR_11, &VAR_4, (void**)&VAR_13);
    FUNC_34(VAR_19 == VAR_8, "QueryInterface(IID_IPersistStream) failed: %x.\n", VAR_19);

    VAR_19 = FUNC_9(VAR_11, ((void*)0));
    FUNC_34(VAR_19 == VAR_3, "GetAbsoluteUri returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_9(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetAbsoluteUri returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_10(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetAuthority returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_11(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetDisplayUri returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_12(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetDomain returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_13(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetExtension returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_14(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetFragment returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_15(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetHost returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_16(VAR_11, &VAR_16);
    FUNC_34(VAR_19 == VAR_3, "GetHostType returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_17(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetPassword returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_17(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetPassword returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_18(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetPathAndQuery returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_19(VAR_11, &VAR_16);
    FUNC_34(VAR_19 == VAR_3, "GetPort returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_20(VAR_11, &VAR_16);
    FUNC_34(VAR_19 == VAR_3, "GetProperties returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_21(VAR_11, VAR_10, &VAR_15, 0);
    FUNC_34(VAR_19 == VAR_3, "GetPropertyBSTR returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_22(VAR_11, VAR_9, &VAR_16, 0);
    FUNC_34(VAR_19 == VAR_3, "GetPropertyDWORD returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_23(VAR_11, VAR_10, &VAR_16, 0);
    FUNC_34(VAR_19 == VAR_3, "GetPropertyLength returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_24(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetQuery returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_25(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetRawUri returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_26(VAR_11, &VAR_16);
    FUNC_34(VAR_19 == VAR_3, "GetScheme returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_27(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetSchemeName returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_28(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetUserInfo returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_29(VAR_11, &VAR_15);
    FUNC_34(VAR_19 == VAR_3, "GetUserName returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_30(VAR_11, &VAR_16);
    FUNC_34(VAR_19 == VAR_3, "GetZone returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_31(VAR_11, VAR_11, &VAR_17);
    FUNC_34(VAR_19 == VAR_3, "IsEqual returned %x, expected E_UNEXPECTED.\n", VAR_19);

    VAR_19 = FUNC_6(VAR_12, 0, 0, &VAR_14);
    FUNC_34(VAR_19 == VAR_3, "CreateInitializedIUriBuilder returned %x, expected E_UNEXPECTED.\n", VAR_19);
    VAR_19 = FUNC_5(VAR_12, 0, 0, &VAR_14);
    FUNC_34(VAR_19 == VAR_8, "CreateIUriBuilder returned %x, expected S_OK.\n", VAR_19);
    FUNC_8(VAR_14);

    VAR_19 = FUNC_2(VAR_13, &VAR_18);
    FUNC_34(VAR_19 == VAR_8, "GetSizeMax returned %x, expected S_OK.\n", VAR_19);
    FUNC_34(VAR_18.u.LowPart == 34, "ui.LowPart = %d, expected 34.\n", VAR_18.u.LowPart);
    VAR_19 = FUNC_3(VAR_13);
    FUNC_34(VAR_19 == VAR_7, "IsDirty returned %x, expected S_FALSE.\n", VAR_19);

    FUNC_4(VAR_13);
    FUNC_7(VAR_12);
    FUNC_33(VAR_11);
}
