
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ei ;
typedef int VARIANT ;
struct TYPE_3__ {int member_3; int member_2; int * member_1; int * member_0; } ;
typedef int IDispatchEx ;
typedef scalar_t__ HRESULT ;
typedef int EXCEPINFO ;
typedef TYPE_1__ DISPPARAMS ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,TYPE_1__*,int *,int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int VAR_3 ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(IDispatchEx *VAR_4)
{
    DISPPARAMS VAR_5 = {((void*)0),((void*)0),0,0};
    EXCEPINFO VAR_6;
    BSTR VAR_7;
    DISPID VAR_8;
    VARIANT VAR_9;
    HRESULT VAR_10;

    VAR_7 = FUNC_6("ActiveXObject");
    VAR_10 = FUNC_0(VAR_4, VAR_7, VAR_3, &VAR_8);
    FUNC_2(VAR_7);
    FUNC_8(VAR_10 == VAR_1, "GetDispID failed: %08x\n", VAR_10);

    VAR_7 = FUNC_6("Math");
    VAR_10 = FUNC_0(VAR_4, VAR_7, VAR_3, &VAR_8);
    FUNC_2(VAR_7);
    FUNC_8(VAR_10 == VAR_1, "GetDispID failed: %08x\n", VAR_10);

    FUNC_7(&VAR_6, 0, sizeof(VAR_6));
    VAR_10 = FUNC_1(VAR_4, VAR_8, 0, VAR_0, &VAR_5, &VAR_9, &VAR_6, ((void*)0));
    FUNC_8(VAR_10 == VAR_1, "InvokeEx failed: %08x\n", VAR_10);
    FUNC_8(FUNC_4(&VAR_9) == VAR_2, "V_VT(v) = %d\n", FUNC_4(&VAR_9));
    FUNC_8(FUNC_3(&VAR_9) != ((void*)0), "V_DISPATCH(v) = NULL\n");
    FUNC_5(&VAR_9);

    VAR_7 = FUNC_6("String");
    VAR_10 = FUNC_0(VAR_4, VAR_7, VAR_3, &VAR_8);
    FUNC_2(VAR_7);
    FUNC_8(VAR_10 == VAR_1, "GetDispID failed: %08x\n", VAR_10);

    FUNC_7(&VAR_6, 0, sizeof(VAR_6));
    VAR_10 = FUNC_1(VAR_4, VAR_8, 0, VAR_0, &VAR_5, &VAR_9, &VAR_6, ((void*)0));
    FUNC_8(VAR_10 == VAR_1, "InvokeEx failed: %08x\n", VAR_10);
    FUNC_8(FUNC_4(&VAR_9) == VAR_2, "V_VT(v) = %d\n", FUNC_4(&VAR_9));
    FUNC_8(FUNC_3(&VAR_9) != ((void*)0), "V_DISPATCH(v) = NULL\n");
    FUNC_5(&VAR_9);
}
