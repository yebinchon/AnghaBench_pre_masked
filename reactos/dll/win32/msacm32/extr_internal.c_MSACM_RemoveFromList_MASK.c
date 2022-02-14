
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pACMInstList; int lpDrvProc; int hModule; } ;
struct TYPE_6__ {struct TYPE_6__* pNextACMInst; TYPE_2__* pLocalDriver; } ;
typedef TYPE_1__* PWINE_ACMLOCALDRIVERINST ;
typedef TYPE_2__* PWINE_ACMLOCALDRIVER ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,long,long) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_3(PWINE_ACMLOCALDRIVERINST VAR_4)
{
    PWINE_ACMLOCALDRIVER VAR_5 = VAR_4->pLocalDriver;
    PWINE_ACMLOCALDRIVERINST VAR_6;


    if (FUNC_2(VAR_5->hModule, VAR_5->lpDrvProc, ((void*)0)) == 1) {
        FUNC_1(VAR_4, VAR_0, 0L, 0L);
        FUNC_1(VAR_4, VAR_1, 0L, 0L);
    }

    VAR_6 = ((void*)0);
    if (VAR_5->pACMInstList != VAR_4) {
        VAR_6 = VAR_5->pACMInstList;
        while (VAR_6 && VAR_6->pNextACMInst != VAR_4)
            VAR_6 = VAR_6->pNextACMInst;
        if (!VAR_6) {
            FUNC_0("requested to remove invalid instance %p\n", VAR_6);
            return VAR_2;
        }
    }
    if (!VAR_6) {

        VAR_5->pACMInstList = VAR_4->pNextACMInst;
    } else {
        VAR_6->pNextACMInst = VAR_4->pNextACMInst;
    }
    return VAR_3;
}
