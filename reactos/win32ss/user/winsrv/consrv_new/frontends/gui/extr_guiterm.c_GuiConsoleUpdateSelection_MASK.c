
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_19__ {void* Bottom; void* Right; void* Top; void* Left; } ;
struct TYPE_17__ {int Y; int X; } ;
struct TYPE_18__ {int dwFlags; TYPE_4__ srSelection; TYPE_2__ dwSelectionAnchor; } ;
struct TYPE_21__ {int Y; int X; } ;
struct TYPE_16__ {TYPE_5__* Data; } ;
struct TYPE_22__ {TYPE_3__ Selection; TYPE_6__ dwSelectionCursor; TYPE_1__ TermIFace; } ;
struct TYPE_20__ {int hWindow; } ;
typedef TYPE_4__ SMALL_RECT ;
typedef int RECT ;
typedef TYPE_5__* PGUI_CONSOLE_DATA ;
typedef TYPE_6__* PCOORD ;
typedef TYPE_7__* PCONSOLE ;
typedef int HRGN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_5__*,int *,TYPE_4__*) ;
 void* FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_4__*,int) ;
 void* FUNC_10 (int ,int ) ;

__attribute__((used)) static VOID
FUNC_11(PCONSOLE VAR_6, PCOORD VAR_7)
{
    PGUI_CONSOLE_DATA VAR_8 = VAR_6->TermIFace.Data;
    RECT VAR_9, VAR_10;

    FUNC_7(VAR_8, &VAR_9, &VAR_6->Selection.srSelection);

    if (VAR_7 != ((void*)0))
    {
        SMALL_RECT VAR_11;

        VAR_11.Left = FUNC_10(VAR_6->Selection.dwSelectionAnchor.X, VAR_7->X);
        VAR_11.Top = FUNC_10(VAR_6->Selection.dwSelectionAnchor.Y, VAR_7->Y);
        VAR_11.Right = FUNC_8(VAR_6->Selection.dwSelectionAnchor.X, VAR_7->X);
        VAR_11.Bottom = FUNC_8(VAR_6->Selection.dwSelectionAnchor.Y, VAR_7->Y);

        FUNC_7(VAR_8, &VAR_10, &VAR_11);

        if (VAR_6->Selection.dwFlags & VAR_1)
        {
            if (FUNC_9(&VAR_11, &VAR_6->Selection.srSelection, sizeof(SMALL_RECT)) != 0)
            {
                HRGN VAR_12, VAR_13;


                if ((VAR_12 = FUNC_3(&VAR_9)))
                {
                    if ((VAR_13 = FUNC_3(&VAR_10)))
                    {
                        if (FUNC_0(VAR_12, VAR_13, VAR_12, VAR_5) != VAR_2)
                        {
                            FUNC_6(VAR_8->hWindow, VAR_12, VAR_3);
                        }
                        FUNC_4(VAR_13);
                    }
                    FUNC_4(VAR_12);
                }
            }
        }
        else
        {
            FUNC_5(VAR_8->hWindow, &VAR_10, VAR_3);
        }
        VAR_6->Selection.dwFlags |= VAR_1;
        VAR_6->Selection.srSelection = VAR_11;
        VAR_6->dwSelectionCursor = *VAR_7;
        FUNC_1(VAR_6, VAR_4);
    }
    else
    {

        if (VAR_6->Selection.dwFlags & VAR_1)
        {
            FUNC_5(VAR_8->hWindow, &VAR_9, VAR_3);
        }
        VAR_6->Selection.dwFlags = VAR_0;
        FUNC_2(VAR_6, VAR_4);
    }
}
