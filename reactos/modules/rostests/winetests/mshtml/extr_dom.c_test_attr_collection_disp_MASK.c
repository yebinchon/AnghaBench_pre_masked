
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_3__ {int member_3; int member_2; int * member_1; int * member_0; } ;
typedef int IHTMLDOMAttribute ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int EXCEPINFO ;
typedef TYPE_1__ DISPPARAMS ;
typedef int DISPID ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,TYPE_1__*,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int VAR_6 ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int *,char*) ;

__attribute__((used)) static void FUNC_13(IDispatch *VAR_7)
{
    IDispatchEx *VAR_8;
    IHTMLDOMAttribute *VAR_9;
    DISPPARAMS VAR_10 = {((void*)0), ((void*)0), 0, 0};
    VARIANT VAR_11;
    EXCEPINFO VAR_12;
    DISPID VAR_13;
    BSTR VAR_14;
    HRESULT VAR_15;

    VAR_15 = FUNC_3(VAR_7, &VAR_0, (void**)&VAR_8);
    FUNC_11(VAR_15 == VAR_4, "QueryInterface failed: %08x\n", VAR_15);

    VAR_14 = FUNC_10("0");
    VAR_15 = FUNC_0(VAR_8, VAR_14, VAR_6, &VAR_13);
    FUNC_11(VAR_15 == VAR_4, "GetDispID failed: %08x\n", VAR_15);
    FUNC_5(VAR_14);

    FUNC_9(&VAR_11);
    VAR_15 = FUNC_1(VAR_8, VAR_13, VAR_3, VAR_2, &VAR_10, &VAR_11, &VAR_12, ((void*)0));
    FUNC_11(VAR_15 == VAR_4, "InvokeEx failed: %08x\n", VAR_15);
    FUNC_11(FUNC_7(&VAR_11) == VAR_5, "V_VT(var)=%d\n", FUNC_7(&VAR_11));
    FUNC_11(FUNC_6(&VAR_11) != ((void*)0), "V_DISPATCH(var) == NULL\n");
    FUNC_8(&VAR_11);

    VAR_14 = FUNC_10("attr1");
    VAR_15 = FUNC_0(VAR_8, VAR_14, VAR_6, &VAR_13);
    FUNC_11(VAR_15 == VAR_4, "GetDispID failed: %08x\n", VAR_15);
    FUNC_5(VAR_14);

    FUNC_9(&VAR_11);
    VAR_15 = FUNC_1(VAR_8, VAR_13, VAR_3, VAR_2, &VAR_10, &VAR_11, &VAR_12, ((void*)0));
    FUNC_11(VAR_15 == VAR_4, "InvokeEx failed: %08x\n", VAR_15);
    FUNC_11(FUNC_7(&VAR_11) == VAR_5, "V_VT(var)=%d\n", FUNC_7(&VAR_11));
    FUNC_11(FUNC_6(&VAR_11) != ((void*)0), "V_DISPATCH(var) == NULL\n");
    VAR_15 = FUNC_3(FUNC_6(&VAR_11), &VAR_1, (void**)&VAR_9);
    FUNC_11(VAR_15 == VAR_4, "QueryInterface failed: %08x\n", VAR_15);

    FUNC_12(VAR_9, "attr1");

    FUNC_4(VAR_9);
    FUNC_8(&VAR_11);

    FUNC_2(VAR_8);
}
