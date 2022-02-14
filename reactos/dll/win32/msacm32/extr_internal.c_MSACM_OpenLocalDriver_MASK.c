
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WINE_ACMLOCALDRIVERINST ;
struct TYPE_11__ {int lpDrvProc; int hModule; } ;
struct TYPE_10__ {int bSession; int * pNextACMInst; scalar_t__ dwDriverID; TYPE_2__* pLocalDriver; } ;
typedef TYPE_1__* PWINE_ACMLOCALDRIVERINST ;
typedef TYPE_2__* PWINE_ACMLOCALDRIVER ;
typedef long LPARAM ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,long) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_6 (char*,TYPE_1__*) ;
 int VAR_2 ;

PWINE_ACMLOCALDRIVERINST FUNC_7(PWINE_ACMLOCALDRIVER VAR_3, LPARAM VAR_4)
{
    PWINE_ACMLOCALDRIVERINST VAR_5;

    VAR_5 = FUNC_1(VAR_1, 0, sizeof(WINE_ACMLOCALDRIVERINST));
    if (!VAR_5)
        return ((void*)0);

    VAR_5->pLocalDriver = VAR_3;
    VAR_5->dwDriverID = 0;
    VAR_5->pNextACMInst = ((void*)0);
    VAR_5->bSession = VAR_0;





    if (FUNC_5(VAR_3->hModule, VAR_3->lpDrvProc, ((void*)0)) == 0 && VAR_4)
    {
        PWINE_ACMLOCALDRIVERINST VAR_6;

        if (!FUNC_3(VAR_5, 0L))
        {
            FUNC_0("load0 failed\n");
            goto exit;
        }
        VAR_6 = FUNC_7(VAR_3, VAR_4);
        if (!VAR_6)
        {
            FUNC_0("load1 failed\n");



            if (!FUNC_4(VAR_5))
                goto exit;

            return ((void*)0);
        }
        VAR_5->bSession = VAR_2;
        return VAR_6;
    }

    if (!FUNC_3(VAR_5, VAR_4))
    {
        FUNC_0("load failed\n");
        goto exit;
    }

    FUNC_6("=> %p\n", VAR_5);
    return VAR_5;
exit:
    FUNC_2(VAR_1, 0, VAR_5);
    return ((void*)0);
}
