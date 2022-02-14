
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fdwSupport; struct TYPE_5__* pPrevACMDriverID; struct TYPE_5__* pNextACMDriverID; } ;
typedef TYPE_1__* PWINE_ACMDRIVERID ;
typedef int DWORD ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_0(PWINE_ACMDRIVERID VAR_3, DWORD VAR_4)
{
    PWINE_ACMDRIVERID VAR_5 = ((void*)0);


    if (VAR_1 == VAR_3) {
        VAR_1 = VAR_3->pNextACMDriverID;
    }
    if (VAR_2 == VAR_3) {
        VAR_2 = VAR_3->pPrevACMDriverID;
    }
    if (VAR_3->pPrevACMDriverID != ((void*)0)) {
        VAR_3->pPrevACMDriverID->pNextACMDriverID = VAR_3->pNextACMDriverID;
    }
    if (VAR_3->pNextACMDriverID != ((void*)0)) {
        VAR_3->pNextACMDriverID->pPrevACMDriverID = VAR_3->pPrevACMDriverID;
    }


    if (VAR_4 == 1) {
        VAR_5 = VAR_3->pPrevACMDriverID;
        while (VAR_5->pPrevACMDriverID != ((void*)0) &&
            !(VAR_5->pPrevACMDriverID->fdwSupport & VAR_0)) {
            VAR_5 = VAR_5->pPrevACMDriverID;
        }
    } else if (VAR_4 == -1) {
        VAR_5 = VAR_3->pNextACMDriverID;
        while (VAR_5->pNextACMDriverID != ((void*)0)) {
            VAR_5 = VAR_5->pNextACMDriverID;
        }
    }


    VAR_3->pPrevACMDriverID = VAR_5->pPrevACMDriverID;
    VAR_3->pNextACMDriverID = VAR_5;
    if (VAR_3->pPrevACMDriverID != ((void*)0)) {
        VAR_3->pPrevACMDriverID->pNextACMDriverID = VAR_3;
    } else {
        VAR_1 = VAR_3;
    }
    if (VAR_3->pNextACMDriverID != ((void*)0)) {
        VAR_3->pNextACMDriverID->pPrevACMDriverID = VAR_3;
    } else {
        VAR_2 = VAR_3;
    }
}
