
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rbi ;
typedef int WPARAM ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int * hRebar; } ;
struct TYPE_4__ {int cbSize; int lParam; int fMask; int member_0; } ;
typedef TYPE_1__ REBARBANDINFO ;
typedef TYPE_2__* PTOOLBAR_DOCKS ;
typedef int * PDOCKBAR_ITEM ;
typedef int LPARAM ;
typedef size_t DOCK_POSITION ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static PDOCKBAR_ITEM
FUNC_1(PTOOLBAR_DOCKS VAR_2,
                         DOCK_POSITION VAR_3,
                         UINT VAR_4)
{
    REBARBANDINFO VAR_5 = {0};

    VAR_5.cbSize = sizeof(VAR_5);
    VAR_5.fMask = VAR_0;

    if (FUNC_0(VAR_2->hRebar[VAR_3],
                    VAR_1,
                    (WPARAM)VAR_4,
                    (LPARAM)&VAR_5))
    {
        return (PDOCKBAR_ITEM)VAR_5.lParam;
    }

    return ((void*)0);
}
