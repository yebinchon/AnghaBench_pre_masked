
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int BarId; } ;
struct TYPE_7__ {scalar_t__ hWndClient; struct TYPE_7__* Next; TYPE_1__ DockBar; } ;
struct TYPE_6__ {TYPE_3__* Items; } ;
typedef TYPE_2__* PTOOLBAR_DOCKS ;
typedef TYPE_3__* PDOCKBAR_ITEM ;
typedef scalar_t__ HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

BOOL
FUNC_0(PTOOLBAR_DOCKS VAR_2,
                             HWND VAR_3,
                             UINT *VAR_4)
{
    PDOCKBAR_ITEM VAR_5;
    BOOL VAR_6 = VAR_0;

    VAR_5 = VAR_2->Items;
    while (VAR_5 != ((void*)0))
    {
        if (VAR_5->hWndClient == VAR_3)
        {
            *VAR_4 = VAR_5->DockBar.BarId;
            VAR_6 = VAR_1;
            break;
        }

        VAR_5 = VAR_5->Next;
    }

    return VAR_6;
}
