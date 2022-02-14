
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WINE_ACMNOTIFYWND ;
struct TYPE_7__ {scalar_t__ pACMDriverID; int dwType; } ;
struct TYPE_8__ {struct TYPE_8__* pNextACMNotifyWnd; struct TYPE_8__* pPrevACMNotifyWnd; scalar_t__ fdwSupport; int dwNotifyMsg; int hNotifyWnd; TYPE_1__ obj; } ;
typedef TYPE_2__* PWINE_ACMNOTIFYWND ;
typedef int HWND ;
typedef int DWORD ;


 TYPE_2__* FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_3 ;

PWINE_ACMNOTIFYWND FUNC_2(HWND VAR_4, DWORD VAR_5)
{
    PWINE_ACMNOTIFYWND VAR_6;

    FUNC_1("(%p,0x%08x)\n", VAR_4, VAR_5);

    VAR_6 = FUNC_0(VAR_0, 0, sizeof(WINE_ACMNOTIFYWND));
    VAR_6->obj.dwType = VAR_3;
    VAR_6->obj.pACMDriverID = 0;
    VAR_6->hNotifyWnd = VAR_4;
    VAR_6->dwNotifyMsg = VAR_5;
    VAR_6->fdwSupport = 0;

    VAR_6->pNextACMNotifyWnd = ((void*)0);
    VAR_6->pPrevACMNotifyWnd = VAR_2;
    if (VAR_2)
        VAR_2->pNextACMNotifyWnd = VAR_6;
    VAR_2 = VAR_6;
    if (!VAR_1)
        VAR_1 = VAR_6;

    return VAR_6;
}
