
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pNextACMInst; } ;
typedef TYPE_1__ WINE_ACMLOCALDRIVERINST ;
struct TYPE_7__ {scalar_t__ hModule; scalar_t__ lpDrvProc; TYPE_1__* pACMInstList; struct TYPE_7__* pNextACMLocalDrv; } ;
typedef TYPE_1__* PWINE_ACMLOCALDRIVERINST ;
typedef TYPE_3__* PWINE_ACMLOCALDRIVER ;
typedef scalar_t__ HMODULE ;
typedef scalar_t__ DRIVERPROC ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(HMODULE VAR_1, DRIVERPROC VAR_2, WINE_ACMLOCALDRIVERINST ** VAR_3)
{
    PWINE_ACMLOCALDRIVER VAR_4;
    unsigned VAR_5 = 0;

    if (VAR_3) *VAR_3 = ((void*)0);
    for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->pNextACMLocalDrv)
    {
 if (VAR_4->hModule == VAR_1 && VAR_4->lpDrvProc == VAR_2)
        {
            PWINE_ACMLOCALDRIVERINST VAR_6 = VAR_4->pACMInstList;

     while (VAR_6) {
                if (VAR_3 && !*VAR_3) *VAR_3 = VAR_6;
         VAR_5++;
         VAR_6 = VAR_6->pNextACMInst;
     }
 }
    }
    return VAR_5;
}
