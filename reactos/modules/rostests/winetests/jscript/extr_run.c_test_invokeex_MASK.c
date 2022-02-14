
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_3__ {int * member_0; } ;
typedef int IDispatchEx ;
typedef int IActiveScript ;
typedef int HRESULT ;
typedef TYPE_1__ DISPPARAMS ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int ,int ,TYPE_1__*,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (char*,int *,int **) ;

__attribute__((used)) static void FUNC_15(void)
{
    DISPID VAR_8, VAR_9;
    DISPPARAMS VAR_10 = {((void*)0)};
    IActiveScript *VAR_11;
    IDispatchEx *VAR_12;
    VARIANT VAR_13;
    BSTR VAR_14;
    HRESULT VAR_15;

    VAR_15 = FUNC_14("var o = {func: function() {return 3;}, prop: 6}; o", &VAR_13, &VAR_11);
    FUNC_13(VAR_15 == VAR_5, "parse_script_expr failed: %08x\n", VAR_15);
    FUNC_13(FUNC_9(&VAR_13) == VAR_6, "V_VT(v) = %d\n", FUNC_9(&VAR_13));

    VAR_15 = FUNC_5(FUNC_7(&VAR_13), &VAR_3, (void**)&VAR_12);
    FUNC_13(VAR_15 == VAR_5, "Could not get IDispatchEx iface: %08x\n", VAR_15);
    FUNC_10(&VAR_13);

    VAR_14 = FUNC_11("func");
    VAR_15 = FUNC_2(VAR_12, VAR_14, 0, &VAR_8);
    FUNC_6(VAR_14);
    FUNC_13(VAR_15 == VAR_5, "GetDispID failed: %08x\n", VAR_15);

    VAR_14 = FUNC_11("prop");
    VAR_15 = FUNC_2(VAR_12, VAR_14, 0, &VAR_9);
    FUNC_6(VAR_14);
    FUNC_13(VAR_15 == VAR_5, "GetDispID failed: %08x\n", VAR_15);

    VAR_15 = FUNC_3(VAR_12, VAR_8, 0, VAR_0, &VAR_10, &VAR_13, ((void*)0), ((void*)0));
    FUNC_13(VAR_15 == VAR_5, "InvokeEx failed: %08x\n", VAR_15);
    FUNC_13(FUNC_9(&VAR_13) == VAR_7, "V_VT(v) = %d\n", FUNC_9(&VAR_13));
    FUNC_13(FUNC_8(&VAR_13) == 3, "V_I4(v) = %d\n", FUNC_8(&VAR_13));

    VAR_15 = FUNC_3(VAR_12, VAR_9, 0, VAR_1, &VAR_10, &VAR_13, ((void*)0), ((void*)0));
    FUNC_13(VAR_15 == VAR_5, "InvokeEx failed: %08x\n", VAR_15);
    FUNC_13(FUNC_9(&VAR_13) == VAR_7, "V_VT(v) = %d\n", FUNC_9(&VAR_13));
    FUNC_13(FUNC_8(&VAR_13) == 6, "V_I4(v) = %d\n", FUNC_8(&VAR_13));

    VAR_15 = FUNC_1(VAR_11, VAR_4);
    FUNC_13(VAR_15 == VAR_5, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_15);

    VAR_14 = FUNC_11("func");
    VAR_15 = FUNC_2(VAR_12, VAR_14, 0, &VAR_8);
    FUNC_6(VAR_14);
    FUNC_13(VAR_15 == VAR_5, "GetDispID failed: %08x\n", VAR_15);

    VAR_15 = FUNC_3(VAR_12, VAR_8, 0, VAR_0, &VAR_10, &VAR_13, ((void*)0), ((void*)0));
    FUNC_13(VAR_15 == VAR_2 || FUNC_12(VAR_15 == 0x800a1393), "InvokeEx failed: %08x\n", VAR_15);

    VAR_15 = FUNC_3(VAR_12, VAR_9, 0, VAR_1, &VAR_10, &VAR_13, ((void*)0), ((void*)0));
    FUNC_13(VAR_15 == VAR_5, "InvokeEx failed: %08x\n", VAR_15);
    FUNC_13(FUNC_9(&VAR_13) == VAR_7, "V_VT(v) = %d\n", FUNC_9(&VAR_13));
    FUNC_13(FUNC_8(&VAR_13) == 6, "V_I4(v) = %d\n", FUNC_8(&VAR_13));

    FUNC_4(VAR_12);
    FUNC_0(VAR_11);
}
