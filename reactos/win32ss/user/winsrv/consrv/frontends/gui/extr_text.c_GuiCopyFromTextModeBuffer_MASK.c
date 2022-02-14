
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int Bottom; int Right; int Top; int Left; } ;
struct TYPE_6__ {TYPE_4__ srSelection; int dwSelectionAnchor; } ;
struct TYPE_7__ {TYPE_1__ Selection; scalar_t__ LineSelection; } ;
typedef int PTEXTMODE_SCREEN_BUFFER ;
typedef TYPE_2__* PGUI_CONSOLE_DATA ;
typedef int COORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (char*,int ,int ,int ,int ,char*) ;
 int FUNC_3 (int *,int *,int *,TYPE_4__*) ;

VOID
FUNC_4(PTEXTMODE_SCREEN_BUFFER VAR_0,
                          PGUI_CONSOLE_DATA VAR_1)
{




    BOOL VAR_2 = VAR_1->LineSelection;

    FUNC_2("Selection is (%d|%d) to (%d|%d) in %s mode\n",
           VAR_1->Selection.srSelection.Left,
           VAR_1->Selection.srSelection.Top,
           VAR_1->Selection.srSelection.Right,
           VAR_1->Selection.srSelection.Bottom,
           (VAR_2 ? "line" : "block"));

    if (!VAR_2)
    {
        FUNC_0(VAR_0, &VAR_1->Selection.srSelection);
    }
    else
    {
        COORD VAR_3, VAR_4;

        FUNC_3(&VAR_3, &VAR_4,
                             &VAR_1->Selection.dwSelectionAnchor,
                             &VAR_1->Selection.srSelection);

        FUNC_1(VAR_0, &VAR_3, &VAR_4);
    }
}
