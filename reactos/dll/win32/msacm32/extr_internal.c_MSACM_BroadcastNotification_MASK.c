
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdwSupport; int dwNotifyMsg; int hNotifyWnd; struct TYPE_3__* pNextACMNotifyWnd; } ;
typedef TYPE_1__* PWINE_ACMNOTIFYWND ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;

void FUNC_1(void)
{
    if (VAR_3 <= 0) {
        PWINE_ACMNOTIFYWND VAR_5;

        for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->pNextACMNotifyWnd)
        if (!(VAR_5->fdwSupport & VAR_0))
            FUNC_0(VAR_5->hNotifyWnd, VAR_5->dwNotifyMsg, 0, 0);
    } else {
        VAR_2 = VAR_4;
    }
}
