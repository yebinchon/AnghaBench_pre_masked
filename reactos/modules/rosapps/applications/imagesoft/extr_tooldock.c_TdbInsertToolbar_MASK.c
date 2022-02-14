
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int rbi ;
typedef int WPARAM ;
typedef int UINT ;
struct TYPE_23__ {scalar_t__ DisplayTextId; int Position; int BarId; } ;
struct TYPE_22__ {size_t PrevDock; int PrevBandIndex; TYPE_7__ DockBar; int * hWndClient; int Context; TYPE_1__* Callbacks; } ;
struct TYPE_21__ {int member_0; } ;
struct TYPE_20__ {int * hRebar; } ;
struct TYPE_19__ {int cbSize; int fMask; int * hwndChild; int * lpText; scalar_t__ lParam; int fStyle; int wID; int member_0; } ;
struct TYPE_18__ {int (* InsertBand ) (TYPE_3__*,TYPE_7__*,int ,int*,TYPE_2__*) ;int (* DockBand ) (TYPE_3__*,TYPE_7__*,int ,int const,int,TYPE_2__*) ;} ;
typedef TYPE_2__ REBARBANDINFO ;
typedef TYPE_3__* PTOOLBAR_DOCKS ;
typedef TYPE_4__ POINT ;
typedef TYPE_5__* PDOCKBAR_ITEM ;
typedef int * LPTSTR ;
typedef scalar_t__ LPARAM ;
typedef int HLOCAL ;
typedef size_t DOCK_POSITION ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int **,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*,int,int,TYPE_2__*,TYPE_4__,int *,int,int) ;
 int VAR_10 ;
 int FUNC_4 (TYPE_3__*,TYPE_7__*,int ,int*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_7__*,int ,int const,int,TYPE_2__*) ;

__attribute__((used)) static BOOL
FUNC_6(PTOOLBAR_DOCKS VAR_11,
                 PDOCKBAR_ITEM VAR_12,
                 DOCK_POSITION VAR_13)
{
    LPTSTR VAR_14 = ((void*)0);
    REBARBANDINFO VAR_15 = {0};
    BOOL VAR_16 = VAR_0;

    VAR_15.cbSize = sizeof(VAR_15);
    VAR_15.fMask = VAR_2 | VAR_4 | VAR_3;
    VAR_15.wID = VAR_12->DockBar.BarId;
    VAR_15.fStyle = VAR_6;
    VAR_15.lParam = (LPARAM)VAR_12;

    if (VAR_12->DockBar.DisplayTextId != 0)
    {
        if (FUNC_0(&VAR_14,
                               VAR_10,
                               VAR_12->DockBar.DisplayTextId))
        {
            VAR_15.fMask |= VAR_5;
            VAR_15.lpText = VAR_14;
        }
    }

    if (VAR_12->hWndClient != ((void*)0))
    {
        VAR_15.fMask |= VAR_1;
        VAR_15.hwndChild = VAR_12->hWndClient;
    }

    switch (VAR_12->DockBar.Position)
    {
        case 128:
        {
            POINT VAR_17 = {0};


            VAR_16 = FUNC_3(VAR_11,
                                      VAR_12,
                                      VAR_12->DockBar.Position,
                                      (UINT)-1,
                                      &VAR_15,
                                      VAR_17,
                                      ((void*)0),
                                      (UINT)-1,
                                      VAR_0);
            break;
        }

        default:
        {
            UINT VAR_18 = -1;
            BOOL VAR_19 = VAR_9;

            if (VAR_12->Callbacks->InsertBand != ((void*)0))
            {
                VAR_19 = VAR_12->Callbacks->InsertBand(VAR_11,
                                                      &VAR_12->DockBar,
                                                      VAR_12->Context,
                                                      &VAR_18,
                                                      &VAR_15);
            }

            if (VAR_19)
            {
                VAR_12->Callbacks->DockBand(VAR_11,
                                          &VAR_12->DockBar,
                                          VAR_12->Context,
                                          128,
                                          VAR_12->DockBar.Position,
                                          &VAR_15);

                if (VAR_15.fMask & VAR_1)
                    VAR_12->hWndClient = VAR_15.hwndChild;
                else
                    VAR_12->hWndClient = ((void*)0);

                VAR_16 = FUNC_2(VAR_11->hRebar[VAR_13],
                                  VAR_8,
                                  (WPARAM)VAR_18,
                                  (LPARAM)&VAR_15) != 0;
                if (VAR_16)
                {
                    VAR_12->PrevDock = VAR_13;
                    VAR_12->PrevBandIndex = (UINT)FUNC_2(VAR_11->hRebar[VAR_13],
                                                            VAR_7,
                                                            (WPARAM)VAR_12->DockBar.BarId,
                                                            0);
                }
            }

            break;
        }
    }

    if (VAR_14 != ((void*)0))
    {
        FUNC_1((HLOCAL)VAR_14);
    }

    return VAR_16;
}
