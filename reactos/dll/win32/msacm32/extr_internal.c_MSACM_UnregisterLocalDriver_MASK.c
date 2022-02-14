
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* pNextACMLocalDrv; struct TYPE_7__* pPrevACMLocalDrv; int ref; scalar_t__ pACMInstList; } ;
typedef TYPE_1__* PWINE_ACMLOCALDRIVER ;
typedef scalar_t__ LONG ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static PWINE_ACMLOCALDRIVER FUNC_3(PWINE_ACMLOCALDRIVER VAR_3)
{
    PWINE_ACMLOCALDRIVER VAR_4;
    LONG VAR_5;

    if (VAR_3->pACMInstList) {
        FUNC_0("local driver instances still present after closing all drivers - memory leak\n");
        return ((void*)0);
    }

    VAR_5 = FUNC_2(&VAR_3->ref);
    if (VAR_5)
        return VAR_3;

    if (VAR_3 == VAR_1)
        VAR_1 = VAR_3->pNextACMLocalDrv;
    if (VAR_3 == VAR_2)
        VAR_2 = VAR_3->pPrevACMLocalDrv;

    if (VAR_3->pPrevACMLocalDrv)
        VAR_3->pPrevACMLocalDrv->pNextACMLocalDrv = VAR_3->pNextACMLocalDrv;
    if (VAR_3->pNextACMLocalDrv)
        VAR_3->pNextACMLocalDrv->pPrevACMLocalDrv = VAR_3->pPrevACMLocalDrv;

    VAR_4 = VAR_3->pNextACMLocalDrv;

    FUNC_1(VAR_0, 0, VAR_3);

    return VAR_4;
}
