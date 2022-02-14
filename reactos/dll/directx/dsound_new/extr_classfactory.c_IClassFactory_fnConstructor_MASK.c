
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; int riidInst; int lpfnCI; int * lpVtbl; } ;
typedef int REFIID ;
typedef scalar_t__ PLONG ;
typedef int LPFNCREATEINSTANCE ;
typedef int * LPCLASSFACTORY ;
typedef TYPE_1__ IClassFactoryImpl ;
typedef int IClassFactory ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;

IClassFactory *
FUNC_2(
    LPFNCREATEINSTANCE VAR_1,
    PLONG VAR_2,
    REFIID VAR_3)
{
    IClassFactoryImpl* VAR_4;

    VAR_4 = FUNC_0(sizeof(IClassFactoryImpl));
    VAR_4->ref = 1;
    VAR_4->lpVtbl = &VAR_0;
    VAR_4->lpfnCI = VAR_1;

    if (VAR_2)
        FUNC_1(VAR_2);
    VAR_4->riidInst = VAR_3;

    return (LPCLASSFACTORY)VAR_4;
}
