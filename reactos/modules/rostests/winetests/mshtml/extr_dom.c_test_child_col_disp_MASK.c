
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
typedef int VARIANT ;
struct TYPE_3__ {int member_3; int member_2; int * member_1; int * member_0; } ;
typedef int LONG ;
typedef int IUnknown ;
typedef int IHTMLDOMNode ;
typedef int IHTMLDOMChildrenCollection ;
typedef int IDispatchEx ;
typedef int HRESULT ;
typedef int EXCEPINFO ;
typedef TYPE_1__ DISPPARAMS ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_1__*,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,char*,...) ;

__attribute__((used)) static void FUNC_14(IHTMLDOMChildrenCollection *VAR_7)
{
    IDispatchEx *VAR_8;
    IHTMLDOMNode *VAR_9;
    DISPPARAMS VAR_10 = {((void*)0), ((void*)0), 0, 0};
    VARIANT VAR_11;
    EXCEPINFO VAR_12;
    LONG VAR_13;
    DISPID VAR_14;
    BSTR VAR_15;
    HRESULT VAR_16;

    static const WCHAR VAR_17[] = {'0',0};
    static const WCHAR VAR_18[] = {'1','0','0',0};

    VAR_16 = FUNC_3(VAR_7, &VAR_1, (void**)&VAR_8);
    FUNC_13(VAR_16 == VAR_4, "Could not get IDispatchEx: %08x\n", VAR_16);

    VAR_15 = FUNC_5(VAR_17);
    VAR_16 = FUNC_0(VAR_8, VAR_15, VAR_6, &VAR_14);
    FUNC_13(VAR_16 == VAR_4, "GetDispID failed: %08x\n", VAR_16);
    FUNC_6(VAR_15);

    FUNC_10(&VAR_11);
    VAR_16 = FUNC_1(VAR_8, VAR_14, VAR_3, VAR_2, &VAR_10, &VAR_11, &VAR_12, ((void*)0));
    FUNC_13(VAR_16 == VAR_4, "InvokeEx failed: %08x\n", VAR_16);
    FUNC_13(FUNC_8(&VAR_11) == VAR_5, "V_VT(var)=%d\n", FUNC_8(&VAR_11));
    FUNC_13(FUNC_7(&VAR_11) != ((void*)0), "V_DISPATCH(var) == NULL\n");
    VAR_9 = FUNC_11((IUnknown*)FUNC_7(&VAR_11));
    VAR_13 = FUNC_12((IUnknown*)VAR_9);
    FUNC_13(VAR_13 == 3, "type=%d\n", VAR_13);
    FUNC_4(VAR_9);
    FUNC_9(&VAR_11);

    VAR_15 = FUNC_5(VAR_18);
    VAR_16 = FUNC_0(VAR_8, VAR_15, VAR_6, &VAR_14);
    FUNC_13(VAR_16 == VAR_0, "GetDispID failed: %08x, expected DISP_E_UNKNOWNNAME\n", VAR_16);
    FUNC_6(VAR_15);

    FUNC_2(VAR_8);
}
