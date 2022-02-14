
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* pPrevACMNotifyWnd; struct TYPE_8__* pNextACMNotifyWnd; } ;
typedef TYPE_1__ WINE_ACMNOTIFYWND ;
typedef TYPE_1__ const* PWINE_ACMNOTIFYWND ;


 int FUNC_0 (int ,int ,TYPE_1__ const*) ;
 int VAR_0 ;
 TYPE_1__ const* VAR_1 ;
 TYPE_1__ const* VAR_2 ;

PWINE_ACMNOTIFYWND FUNC_1(const WINE_ACMNOTIFYWND *VAR_3)
{
    PWINE_ACMNOTIFYWND VAR_4;

    for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->pNextACMNotifyWnd) {
        if (VAR_4 == VAR_3) {
            PWINE_ACMNOTIFYWND VAR_5 = VAR_4->pNextACMNotifyWnd;

            if (VAR_4->pPrevACMNotifyWnd) VAR_4->pPrevACMNotifyWnd->pNextACMNotifyWnd = VAR_4->pNextACMNotifyWnd;
            if (VAR_4->pNextACMNotifyWnd) VAR_4->pNextACMNotifyWnd->pPrevACMNotifyWnd = VAR_4->pPrevACMNotifyWnd;
            if (VAR_1 == VAR_4) VAR_1 = VAR_4->pNextACMNotifyWnd;
            if (VAR_2 == VAR_4) VAR_2 = VAR_4->pPrevACMNotifyWnd;
            FUNC_0(VAR_0, 0, VAR_4);

            return VAR_5;
        }
    }
    return ((void*)0);
}
