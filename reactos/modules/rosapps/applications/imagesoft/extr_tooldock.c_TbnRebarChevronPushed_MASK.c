
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {int uBand; } ;
struct TYPE_8__ {int hWndClient; int Context; int DockBar; TYPE_1__* Callbacks; } ;
struct TYPE_7__ {int (* ChevronPushed ) (int ,int *,int ,int ,TYPE_3__*) ;} ;
typedef int PTOOLBAR_DOCKS ;
typedef TYPE_2__* PDOCKBAR_ITEM ;
typedef TYPE_3__* LPNMREBARCHEVRON ;
typedef int DOCK_POSITION ;


 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int *,int ,int ,TYPE_3__*) ;

__attribute__((used)) static VOID
FUNC_2(PTOOLBAR_DOCKS VAR_0,
                      DOCK_POSITION VAR_1,
                      LPNMREBARCHEVRON VAR_2)
{
    PDOCKBAR_ITEM VAR_3;

    VAR_3 = FUNC_0(VAR_0,
                                    VAR_1,
                                    VAR_2->uBand);

    if (VAR_3 != ((void*)0) && VAR_3->Callbacks->ChevronPushed)
    {
        VAR_3->Callbacks->ChevronPushed(VAR_0,
                                       &VAR_3->DockBar,
                                       VAR_3->Context,
                                       VAR_3->hWndClient,
                                       VAR_2);
    }
}
