
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WINE_ACMDRIVERID ;
typedef int WCHAR ;
struct TYPE_11__ {TYPE_2__* pACMDriverID; int dwType; } ;
struct TYPE_12__ {int fdwSupport; struct TYPE_12__* pszDriverAlias; struct TYPE_12__* pNextACMDriverID; struct TYPE_12__* pPrevACMDriverID; int * pACMDriverList; scalar_t__ pLocalDriver; struct TYPE_12__* pszFileName; TYPE_1__ obj; } ;
typedef scalar_t__ PWINE_ACMLOCALDRIVER ;
typedef TYPE_2__* PWINE_ACMDRIVERID ;
typedef int LPCWSTR ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_5 (char*,int ,int ,scalar_t__) ;
 int FUNC_6 (char*,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int ) ;

PWINE_ACMDRIVERID FUNC_10(LPCWSTR VAR_5, LPCWSTR VAR_6,
           PWINE_ACMLOCALDRIVER VAR_7)
{
    PWINE_ACMDRIVERID VAR_8;

    FUNC_5("(%s, %s, %p)\n",
          FUNC_7(VAR_5), FUNC_7(VAR_6), VAR_7);

    VAR_8 = FUNC_0(VAR_1, 0, sizeof(WINE_ACMDRIVERID));
    if (!VAR_8)
        return ((void*)0);
    VAR_8->obj.dwType = VAR_4;
    VAR_8->obj.pACMDriverID = VAR_8;
    VAR_8->pszDriverAlias = ((void*)0);
    if (VAR_5)
    {
        VAR_8->pszDriverAlias = FUNC_0( VAR_1, 0, (FUNC_9(VAR_5)+1) * sizeof(WCHAR) );
        if (!VAR_8->pszDriverAlias) {
            FUNC_1(VAR_1, 0, VAR_8);
            return ((void*)0);
        }
        FUNC_8( VAR_8->pszDriverAlias, VAR_5 );
    }
    VAR_8->pszFileName = ((void*)0);
    if (VAR_6)
    {
        VAR_8->pszFileName = FUNC_0( VAR_1, 0, (FUNC_9(VAR_6)+1) * sizeof(WCHAR) );
        if (!VAR_8->pszFileName) {
            FUNC_1(VAR_1, 0, VAR_8->pszDriverAlias);
            FUNC_1(VAR_1, 0, VAR_8);
            return ((void*)0);
        }
        FUNC_8( VAR_8->pszFileName, VAR_6 );
    }
    VAR_8->pLocalDriver = VAR_7;

    VAR_8->pACMDriverList = ((void*)0);

    if (VAR_7) {
        VAR_8->pPrevACMDriverID = ((void*)0);
        VAR_8->pNextACMDriverID = VAR_2;
        if (VAR_2)
            VAR_2->pPrevACMDriverID = VAR_8;
        VAR_2 = VAR_8;
        if (!VAR_3)
            VAR_3 = VAR_8;
    } else {
        VAR_8->pNextACMDriverID = ((void*)0);
        VAR_8->pPrevACMDriverID = VAR_3;
        if (VAR_3)
     VAR_3->pNextACMDriverID = VAR_8;
        VAR_3 = VAR_8;
        if (!VAR_2)
     VAR_2 = VAR_8;
    }

    if ((!VAR_8->pszDriverAlias || !FUNC_3(VAR_8)) && !FUNC_2(VAR_8)) {
 FUNC_6("Couldn't load cache for ACM driver (%s)\n", FUNC_7(VAR_6));
 FUNC_4(VAR_8);
 return ((void*)0);
    }

    if (VAR_7) VAR_8->fdwSupport |= VAR_0;
    return VAR_8;
}
