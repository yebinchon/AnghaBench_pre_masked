
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int VARIANT ;
struct TYPE_3__ {int cArgs; int * rgvarg; int rgdispidNamedArgs; int cNamedArgs; } ;
typedef int IUnknown ;
typedef int IHTMLEventObj ;
typedef int EXCEPINFO ;
typedef TYPE_1__ DISPPARAMS ;
typedef scalar_t__ DISPID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(unsigned VAR_4, DISPID VAR_5, WORD VAR_6, DISPPARAMS *VAR_7,
        VARIANT *VAR_8, EXCEPINFO *VAR_9)
{
    IHTMLEventObj *VAR_10;

    FUNC_5(VAR_5 == VAR_1, "id = %d\n", VAR_5);
    FUNC_5(VAR_6 == VAR_0, "wFlags = %x\n", VAR_6);
    FUNC_5(VAR_7 != ((void*)0), "pDispParams == NULL\n");
    FUNC_5(VAR_7->cArgs == 1, "pdp->cArgs = %d\n", VAR_7->cArgs);
    FUNC_5(!VAR_7->cNamedArgs, "pdp->cNamedArgs = %d\n", VAR_7->cNamedArgs);
    FUNC_5(!VAR_7->rgdispidNamedArgs, "pdp->rgdispidNamedArgs = %p\n", VAR_7->rgdispidNamedArgs);
    FUNC_5(VAR_7->rgvarg != ((void*)0), "rgvarg = NULL\n");
    FUNC_5(VAR_8 != ((void*)0), "pvarRes = NULL\n");
    FUNC_5(VAR_9 != ((void*)0), "pei = NULL\n");
    FUNC_5(FUNC_2(VAR_8) == VAR_3, "V_VT(pVarRes) = %d\n", FUNC_2(VAR_8));
    FUNC_5(FUNC_2(VAR_7->rgvarg) == VAR_2, "V_VT(pdp->rgvarg) = %d\n", FUNC_2(VAR_7->rgvarg));
    FUNC_5(FUNC_1(VAR_7->rgvarg) != ((void*)0), "V_DISPATCH(pdp->rgvarg) = %p\n", FUNC_1(VAR_7->rgvarg));

    VAR_10 = FUNC_3(VAR_4);
    FUNC_5(FUNC_4((IUnknown*)VAR_10, (IUnknown*)FUNC_1(VAR_7->rgvarg)), "event != arg0\n");
    FUNC_0(VAR_10);
}
