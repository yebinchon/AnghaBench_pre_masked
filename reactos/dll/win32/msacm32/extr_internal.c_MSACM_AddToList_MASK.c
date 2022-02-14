
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pACMInstList; int lpDrvProc; int hModule; } ;
struct TYPE_7__ {scalar_t__ dwDriverID; struct TYPE_7__* pNextACMInst; TYPE_2__* pLocalDriver; } ;
typedef TYPE_1__* PWINE_ACMLOCALDRIVERINST ;
typedef TYPE_2__* PWINE_ACMLOCALDRIVER ;
typedef long LPARAM ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,long,long) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static BOOL FUNC_4(PWINE_ACMLOCALDRIVERINST VAR_6, LPARAM VAR_7)
{
    PWINE_ACMLOCALDRIVER VAR_8 = VAR_6->pLocalDriver;


    if (FUNC_2(VAR_8->hModule, VAR_8->lpDrvProc, ((void*)0)) == 0) {
        if (FUNC_1(VAR_6, VAR_1, 0L, 0L) != VAR_3) {
            FUNC_0("DRV_LOAD failed on driver %p\n", VAR_6);
            return VAR_4;
        }

        FUNC_1(VAR_6, VAR_0, 0L, 0L);
    }

    VAR_6->pNextACMInst = ((void*)0);
    if (VAR_8->pACMInstList == ((void*)0)) {
 VAR_8->pACMInstList = VAR_6;
    } else {
        PWINE_ACMLOCALDRIVERINST VAR_9 = VAR_8->pACMInstList;

        while (VAR_9->pNextACMInst != ((void*)0))
            VAR_9 = VAR_9->pNextACMInst;

 VAR_9->pNextACMInst = VAR_6;
    }


    VAR_6->dwDriverID = FUNC_1(VAR_6, VAR_2, 0, VAR_7);

    if (VAR_6->dwDriverID == 0) {
        FUNC_0("DRV_OPEN failed on driver %p\n", VAR_6);
        FUNC_3(VAR_6);
        return VAR_4;
    }
    return VAR_5;
}
