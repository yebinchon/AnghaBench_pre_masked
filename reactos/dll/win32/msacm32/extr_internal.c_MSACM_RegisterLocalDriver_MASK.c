
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WINE_ACMLOCALDRIVER ;
struct TYPE_7__ {scalar_t__ pACMDriverID; int dwType; } ;
struct TYPE_8__ {scalar_t__ hModule; scalar_t__ lpDrvProc; int ref; struct TYPE_8__* pNextACMLocalDrv; struct TYPE_8__* pPrevACMLocalDrv; int * pACMInstList; TYPE_1__ obj; } ;
typedef TYPE_2__* PWINE_ACMLOCALDRIVER ;
typedef scalar_t__ HMODULE ;
typedef scalar_t__ DRIVERPROC ;


 TYPE_2__* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;

PWINE_ACMLOCALDRIVER FUNC_3(HMODULE VAR_4, DRIVERPROC VAR_5)
{
    PWINE_ACMLOCALDRIVER VAR_6;

    FUNC_2("(%p, %p)\n", VAR_4, VAR_5);
    if (!VAR_4 || !VAR_5) return ((void*)0);


    for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->pNextACMLocalDrv)
    {
        if (VAR_6->hModule == VAR_4 && VAR_6->lpDrvProc == VAR_5)
        {
            FUNC_1(&VAR_6->ref);
            return VAR_6;
        }
    }

    VAR_6 = FUNC_0(VAR_0, 0, sizeof(WINE_ACMLOCALDRIVER));
    VAR_6->obj.dwType = VAR_3;
    VAR_6->obj.pACMDriverID = 0;
    VAR_6->hModule = VAR_4;
    VAR_6->lpDrvProc = VAR_5;
    VAR_6->pACMInstList = ((void*)0);
    VAR_6->ref = 1;

    VAR_6->pNextACMLocalDrv = ((void*)0);
    VAR_6->pPrevACMLocalDrv = VAR_2;
    if (VAR_2)
 VAR_2->pNextACMLocalDrv = VAR_6;
    VAR_2 = VAR_6;
    if (!VAR_1)
 VAR_1 = VAR_6;

    return VAR_6;
}
