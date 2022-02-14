
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int * lpIClassFactoryVtbl; int * lpIShellExtInitVtbl; int * lpIShellPropSheetExtVtbl; } ;
typedef TYPE_1__* PDESKDISPLAYADAPTER ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

VOID
FUNC_1(PDESKDISPLAYADAPTER VAR_3)
{
    VAR_3->lpIShellPropSheetExtVtbl = &VAR_2;
    VAR_3->lpIShellExtInitVtbl = &VAR_1;
    VAR_3->lpIClassFactoryVtbl = &VAR_0;

    FUNC_0(VAR_3);
}
