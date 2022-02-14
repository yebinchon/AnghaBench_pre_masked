
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {size_t Position; } ;
struct TYPE_16__ {int (* CreateClient ) (TYPE_1__*,TYPE_4__*,int ,int *,int *) ;} ;
struct TYPE_15__ {size_t PrevDock; struct TYPE_15__* Next; int hWndClient; TYPE_4__ DockBar; TYPE_3__ const* Callbacks; int * hWndTool; int Context; } ;
struct TYPE_14__ {TYPE_2__* Items; int ** hRebar; } ;
typedef int PVOID ;
typedef TYPE_1__* PTOOLBAR_DOCKS ;
typedef TYPE_2__* PDOCKBAR_ITEM ;
typedef int * HWND ;
typedef TYPE_3__ DOCKBAR_ITEM_CALLBACKS ;
typedef int DOCKBAR_ITEM ;
typedef TYPE_4__ DOCKBAR ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,size_t) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*,int ,int *,int *) ;

BOOL
FUNC_4(PTOOLBAR_DOCKS VAR_2,
              const DOCKBAR *VAR_3,
              PVOID VAR_4,
              const DOCKBAR_ITEM_CALLBACKS *VAR_5)
{
    PDOCKBAR_ITEM VAR_6;
    HWND VAR_7;

    VAR_7 = VAR_2->hRebar[VAR_3->Position];
    if (VAR_7 != ((void*)0))
    {
        VAR_6 = FUNC_0(VAR_1,
                         0,
                         sizeof(DOCKBAR_ITEM));
        if (VAR_6 != ((void*)0))
        {

            VAR_6->DockBar = *VAR_3;
            VAR_6->Context = VAR_4;
            VAR_6->hWndTool = ((void*)0);
            VAR_6->PrevDock = VAR_3->Position;

            VAR_6->Callbacks = VAR_5;


            if (VAR_5->CreateClient != ((void*)0) &&
                !VAR_5->CreateClient(VAR_2,
                                         &VAR_6->DockBar,
                                         VAR_4,
                                         VAR_7,
                                         &VAR_6->hWndClient))
            {
                FUNC_1(VAR_1,
                         0,
                         VAR_6);

                return VAR_0;
            }


            VAR_6->Next = VAR_2->Items;
            VAR_2->Items = VAR_6;

            return FUNC_2(VAR_2,
                                    VAR_6,
                                    VAR_3->Position);
        }
    }

    return VAR_0;
}
