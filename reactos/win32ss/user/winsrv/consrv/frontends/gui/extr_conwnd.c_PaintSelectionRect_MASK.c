
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int srSelection; int dwSelectionAnchor; } ;
struct TYPE_9__ {TYPE_1__ Selection; int LineSelection; } ;
struct TYPE_8__ {int hdc; int rcPaint; } ;
typedef TYPE_2__* PPAINTSTRUCT ;
typedef TYPE_3__* PGUI_CONSOLE_DATA ;
typedef int HRGN ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static VOID
FUNC_5(PGUI_CONSOLE_DATA VAR_3, PPAINTSTRUCT VAR_4)
{
    HRGN VAR_5 = FUNC_1(&VAR_4->rcPaint);
    HRGN VAR_6 = FUNC_2(VAR_3, VAR_3->LineSelection,
                                       &VAR_3->Selection.dwSelectionAnchor,
                                       &VAR_3->Selection.srSelection);



    int VAR_7 = FUNC_0(VAR_5, VAR_5, VAR_6, VAR_2);
    if (VAR_7 != VAR_0 && VAR_7 != VAR_1)
    {
        FUNC_4(VAR_4->hdc, VAR_5);
    }

    FUNC_3(VAR_6);
    FUNC_3(VAR_5);
}
