
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pLocalDriver; struct TYPE_7__* pNextACMDriverID; struct TYPE_7__* pPrevACMDriverID; struct TYPE_7__* aFormatTag; struct TYPE_7__* pszFileName; struct TYPE_7__* pszDriverAlias; scalar_t__ pACMDriverList; } ;
typedef TYPE_1__* PWINE_ACMDRIVERID ;
typedef int HACMDRIVER ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,int ) ;

PWINE_ACMDRIVERID FUNC_3(PWINE_ACMDRIVERID VAR_3)
{
    PWINE_ACMDRIVERID VAR_4;

    while (VAR_3->pACMDriverList)
 FUNC_2((HACMDRIVER) VAR_3->pACMDriverList, 0);

    FUNC_0(VAR_0, 0, VAR_3->pszDriverAlias);
    FUNC_0(VAR_0, 0, VAR_3->pszFileName);
    FUNC_0(VAR_0, 0, VAR_3->aFormatTag);

    if (VAR_3 == VAR_1)
 VAR_1 = VAR_3->pNextACMDriverID;
    if (VAR_3 == VAR_2)
 VAR_2 = VAR_3->pPrevACMDriverID;

    if (VAR_3->pPrevACMDriverID)
 VAR_3->pPrevACMDriverID->pNextACMDriverID = VAR_3->pNextACMDriverID;
    if (VAR_3->pNextACMDriverID)
 VAR_3->pNextACMDriverID->pPrevACMDriverID = VAR_3->pPrevACMDriverID;

    VAR_4 = VAR_3->pNextACMDriverID;

    if (VAR_3->pLocalDriver) FUNC_1(VAR_3->pLocalDriver);
    FUNC_0(VAR_0, 0, VAR_3);

    return VAR_4;
}
