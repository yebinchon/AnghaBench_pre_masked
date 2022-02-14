
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int lpDrvProc; int hModule; } ;
struct TYPE_8__ {scalar_t__ dwDriverID; scalar_t__ bSession; TYPE_2__* pLocalDriver; } ;
typedef TYPE_1__* PWINE_ACMLOCALDRIVERINST ;
typedef TYPE_2__* PWINE_ACMLOCALDRIVER ;
typedef int LRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,long,long) ;
 int FUNC_3 (int ,int ,TYPE_1__**) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

LRESULT FUNC_5(PWINE_ACMLOCALDRIVERINST VAR_4)
{
    if (FUNC_4(VAR_4)) {
        PWINE_ACMLOCALDRIVERINST VAR_5;
        PWINE_ACMLOCALDRIVER VAR_6 = VAR_4->pLocalDriver;

        FUNC_2(VAR_4, VAR_0, 0, 0);
        VAR_4->dwDriverID = 0;

        if (VAR_4->bSession)
            FUNC_0("should not directly close session instance (%p)\n", VAR_4);


        if (FUNC_3(VAR_6->hModule, VAR_6->lpDrvProc, &VAR_5) == 1 &&
                VAR_5->bSession)
        {
            FUNC_2(VAR_5, VAR_0, 0L, 0L);
            VAR_5->dwDriverID = 0;
            FUNC_4(VAR_5);
            FUNC_1(VAR_2, 0, VAR_5);
        }

        FUNC_1(VAR_2, 0, VAR_4);
        return VAR_3;
    }
    FUNC_0("unable to close driver instance\n");
    return VAR_1;
}
