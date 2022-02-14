
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int ULONG ;
typedef int LONG ;
typedef int IUnknown ;
typedef int ISubMatches ;
typedef int IRegExp2 ;
typedef int IMatchCollection2 ;
typedef int IMatch2 ;
typedef int IEnumVARIANT ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
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
 int FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int **) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,void**) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int*) ;
 int FUNC_15 (int *,int,int **) ;
 int FUNC_16 (int *,int **) ;
 int FUNC_17 (int *,int *,int **) ;
 int FUNC_18 (int *,int *,void**) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *,int **) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int *,int ,int *) ;
 int FUNC_26 (int *,int *,void**) ;
 int FUNC_27 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int,char*,...) ;
 int FUNC_30 (char*) ;

__attribute__((used)) static void FUNC_31(void)
{
    IRegExp2 *VAR_19;
    IMatchCollection2 *VAR_20;
    IMatch2 *VAR_21;
    ISubMatches *VAR_22;
    IEnumVARIANT *VAR_23;
    IUnknown *VAR_24;
    IDispatch *VAR_25;
    HRESULT VAR_26;
    BSTR VAR_27;
    LONG VAR_28;
    VARIANT VAR_29;
    ULONG VAR_30;

    VAR_26 = FUNC_0(&VAR_2, ((void*)0),
            VAR_1|VAR_0,
            &VAR_15, (void**)&VAR_24);
    if(VAR_26 == VAR_16) {
        FUNC_30("VBScriptRegExp is not registered\n");
        return;
    }
    FUNC_29(VAR_26 == VAR_18, "CoCreateInstance(CLSID_VBScriptRegExp) failed: %x\n", VAR_26);

    VAR_26 = FUNC_26(VAR_24, &VAR_13, (void**)&VAR_19);
    if(VAR_26 == VAR_4) {
        FUNC_30("IRegExp2 interface is not available\n");
        return;
    }
    FUNC_29(VAR_26 == VAR_18, "QueryInterface(IID_IRegExp2) failed: %x\n", VAR_26);
    FUNC_27(VAR_24);

    VAR_26 = FUNC_18(VAR_19, &VAR_12, (void**)&VAR_24);
    FUNC_29(VAR_26 == VAR_18, "QueryInterface(IID_IRegExp) returned %x\n", VAR_26);
    FUNC_27(VAR_24);

    VAR_26 = FUNC_18(VAR_19, &VAR_6, (void**)&VAR_24);
    FUNC_29(VAR_26 == VAR_4, "QueryInterface(IID_IDispatchEx) returned %x\n", VAR_26);

    VAR_26 = FUNC_22(VAR_19, &VAR_27);
    FUNC_29(VAR_27 == ((void*)0), "bstr != NULL\n");
    FUNC_29(VAR_26 == VAR_18, "get_Pattern returned %x, expected S_OK\n", VAR_26);

    VAR_26 = FUNC_22(VAR_19, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_Pattern returned %x, expected E_POINTER\n", VAR_26);

    VAR_26 = FUNC_21(VAR_19, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_IgnoreCase returned %x, expected E_POINTER\n", VAR_26);

    VAR_26 = FUNC_20(VAR_19, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_Global returned %x, expected E_POINTER\n", VAR_26);

    VAR_26 = FUNC_17(VAR_19, ((void*)0), &VAR_25);
    FUNC_29(VAR_26 == VAR_18, "Execute returned %x, expected S_OK\n", VAR_26);
    VAR_26 = FUNC_1(VAR_25, &VAR_11, (void**)&VAR_20);
    FUNC_29(VAR_26 == VAR_18, "QueryInterface(IID_IMatchCollection2) returned %x\n", VAR_26);
    FUNC_2(VAR_25);

    VAR_26 = FUNC_12(VAR_20, &VAR_10, (void**)&VAR_24);
    FUNC_29(VAR_26 == VAR_18, "QueryInterface(IID_IMatchCollection) returned %x\n", VAR_26);
    FUNC_27(VAR_24);

    VAR_26 = FUNC_14(VAR_20, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_Count returned %x, expected E_POINTER\n", VAR_26);

    VAR_26 = FUNC_14(VAR_20, &VAR_28);
    FUNC_29(VAR_26 == VAR_18, "get_Count returned %x, expected S_OK\n", VAR_26);
    FUNC_29(VAR_28 == 1, "count = %d\n", VAR_28);

    VAR_26 = FUNC_15(VAR_20, 1, &VAR_25);
    FUNC_29(VAR_26 == VAR_3, "get_Item returned %x, expected E_INVALIDARG\n", VAR_26);

    VAR_26 = FUNC_15(VAR_20, 1, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_Item returned %x, expected E_POINTER\n", VAR_26);

    VAR_26 = FUNC_15(VAR_20, 0, &VAR_25);
    FUNC_29(VAR_26 == VAR_18, "get_Item returned %x, expected S_OK\n", VAR_26);
    VAR_26 = FUNC_1(VAR_25, &VAR_9, (void**)&VAR_21);
    FUNC_29(VAR_26 == VAR_18, "QueryInterface(IID_IMatch2) returned %x\n", VAR_26);
    FUNC_2(VAR_25);

    VAR_26 = FUNC_6(VAR_21, &VAR_8, (void**)&VAR_24);
    FUNC_29(VAR_26 == VAR_18, "QueryInterface(IID_IMatch) returned %x\n", VAR_26);
    FUNC_27(VAR_24);

    VAR_26 = FUNC_11(VAR_21, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_Value returned %x, expected E_POINTER\n", VAR_26);

    VAR_26 = FUNC_8(VAR_21, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_FirstIndex returned %x, expected E_POINTER\n", VAR_26);

    VAR_26 = FUNC_9(VAR_21, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_Length returned %x, expected E_POINTER\n", VAR_26);

    VAR_26 = FUNC_10(VAR_21, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_SubMatches returned %x, expected E_POINTER\n", VAR_26);

    VAR_26 = FUNC_10(VAR_21, &VAR_25);
    FUNC_29(VAR_26 == VAR_18, "get_SubMatches returned %x, expected S_OK\n", VAR_26);
    FUNC_7(VAR_21);
    VAR_26 = FUNC_1(VAR_25, &VAR_14, (void**)&VAR_22);
    FUNC_29(VAR_26 == VAR_18, "QueryInterface(IID_ISubMatches) returned %x\n", VAR_26);
    FUNC_2(VAR_25);

    VAR_26 = FUNC_25(VAR_22, 0, &VAR_29);
    FUNC_29(VAR_26 == VAR_3, "get_Item returned %x, expected E_INVALIDARG\n", VAR_26);

    VAR_26 = FUNC_25(VAR_22, 0, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_Item returned %x, expected E_POINTER\n", VAR_26);

    VAR_26 = FUNC_24(VAR_22, ((void*)0));
    FUNC_29(VAR_26 == VAR_5, "get_Count returned %x, expected E_POINTER\n", VAR_26);
    FUNC_23(VAR_22);

    VAR_26 = FUNC_16(VAR_20, &VAR_24);
    FUNC_29(VAR_26 == VAR_18, "get__NewEnum returned %x, expected S_OK\n", VAR_26);
    VAR_26 = FUNC_26(VAR_24, &VAR_7, (void**)&VAR_23);
    FUNC_29(VAR_26 == VAR_18, "QueryInterface(IID_IEnumVARIANT) returned %x\n", VAR_26);
    FUNC_27(VAR_24);
    FUNC_13(VAR_20);

    VAR_26 = FUNC_5(VAR_23, 2);
    FUNC_29(VAR_26 == VAR_18, "Skip returned %x\n", VAR_26);

    VAR_26 = FUNC_3(VAR_23, 1, &VAR_29, &VAR_30);
    FUNC_29(VAR_26 == VAR_17, "Next returned %x, expected S_FALSE\n", VAR_26);
    FUNC_29(VAR_30 == 0, "fetched = %d\n", VAR_30);

    VAR_26 = FUNC_5(VAR_23, -1);
    FUNC_29(VAR_26 == VAR_18, "Skip returned %x\n", VAR_26);

    VAR_26 = FUNC_3(VAR_23, 1, &VAR_29, &VAR_30);
    FUNC_29(VAR_26 == VAR_18, "Next returned %x\n", VAR_26);
    FUNC_29(VAR_30 == 1, "fetched = %d\n", VAR_30);
    FUNC_28(&VAR_29);
    FUNC_4(VAR_23);

    FUNC_19(VAR_19);
}
