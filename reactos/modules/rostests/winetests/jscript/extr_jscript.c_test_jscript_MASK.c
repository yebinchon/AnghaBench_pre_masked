
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IUnknown ;
typedef int IDispatchEx ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_12 ;
 int * FUNC_10 () ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int,char*,scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;

__attribute__((used)) static void FUNC_18(void)
{
    IActiveScriptParse *VAR_13;
    IActiveScript *VAR_14;
    IDispatchEx *VAR_15;
    ULONG VAR_16;
    HRESULT VAR_17;

    VAR_14 = FUNC_10();

    VAR_17 = FUNC_4(VAR_14, &VAR_4, (void**)&VAR_13);
    FUNC_12(VAR_17 == VAR_12, "Could not get IActiveScriptParse: %08x\n", VAR_17);

    FUNC_17(VAR_14, VAR_11);
    FUNC_15((IUnknown*)VAR_14);
    FUNC_13(VAR_14);

    VAR_17 = FUNC_1(VAR_13);
    FUNC_12(VAR_17 == VAR_12, "InitNew failed: %08x\n", VAR_17);

    VAR_17 = FUNC_1(VAR_13);
    FUNC_12(VAR_17 == VAR_2, "InitNew failed: %08x, expected E_UNEXPECTED\n", VAR_17);

    VAR_17 = FUNC_6(VAR_14, ((void*)0));
    FUNC_12(VAR_17 == VAR_1, "SetScriptSite failed: %08x, expected E_POINTER\n", VAR_17);

    FUNC_17(VAR_14, VAR_11);
    FUNC_14(VAR_14);

    FUNC_9(VAR_3);
    FUNC_9(VAR_6);
    VAR_17 = FUNC_6(VAR_14, &VAR_0);
    FUNC_12(VAR_17 == VAR_12, "SetScriptSite failed: %08x\n", VAR_17);
    FUNC_0(VAR_3);
    FUNC_0(VAR_6);

    FUNC_17(VAR_14, VAR_9);

    VAR_17 = FUNC_6(VAR_14, &VAR_0);
    FUNC_12(VAR_17 == VAR_2, "SetScriptSite failed: %08x, expected E_UNEXPECTED\n", VAR_17);

    VAR_15 = FUNC_11(VAR_14);
    FUNC_16(VAR_15);

    FUNC_9(VAR_7);
    VAR_17 = FUNC_7(VAR_14, VAR_10);
    FUNC_12(VAR_17 == VAR_12, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_17);
    FUNC_0(VAR_7);

    FUNC_17(VAR_14, VAR_10);

    FUNC_9(VAR_5);
    VAR_17 = FUNC_3(VAR_14);
    FUNC_12(VAR_17 == VAR_12, "Close failed: %08x\n", VAR_17);
    FUNC_0(VAR_5);

    FUNC_17(VAR_14, VAR_8);
    FUNC_14(VAR_14);
    FUNC_16(VAR_15);
    FUNC_8(VAR_15);

    FUNC_2(VAR_13);

    VAR_16 = FUNC_5(VAR_14);
    FUNC_12(!VAR_16, "ref = %d\n", VAR_16);
}
