
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef scalar_t__ WPARAM ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int Buffer; int Length; } ;
struct TYPE_18__ {int Y; int X; } ;
struct TYPE_21__ {int dwFlags; TYPE_10__ dwSelectionAnchor; } ;
struct TYPE_25__ {int Lock; TYPE_4__ Title; TYPE_10__ dwSelectionCursor; TYPE_3__ Selection; } ;
struct TYPE_20__ {int Y; int X; } ;
struct TYPE_19__ {int Y; int X; } ;
struct TYPE_24__ {TYPE_2__ ViewSize; TYPE_1__ ViewOrigin; } ;
struct TYPE_23__ {scalar_t__ cmdIdLow; scalar_t__ cmdIdHigh; int hWindow; TYPE_7__* Console; } ;
typedef int SIZE_T ;
typedef TYPE_5__* PGUI_CONSOLE_DATA ;
typedef TYPE_6__* PCONSOLE_SCREEN_BUFFER ;
typedef TYPE_7__* PCONSOLE ;
typedef scalar_t__ LRESULT ;
typedef int * LPWSTR ;
typedef int LPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*,int ,scalar_t__) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,scalar_t__) ;
 int FUNC_9 (TYPE_7__*,TYPE_10__*) ;
 int FUNC_10 (TYPE_7__*,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,char*) ;

__attribute__((used)) static LRESULT
FUNC_15(PGUI_CONSOLE_DATA VAR_6, WPARAM VAR_7, LPARAM VAR_8)
{
    LRESULT VAR_9 = VAR_4;
    PCONSOLE VAR_10 = VAR_6->Console;
    PCONSOLE_SCREEN_BUFFER VAR_11;

    if (!FUNC_1(VAR_10, VAR_1, VAR_4))
    {
        VAR_9 = VAR_3;
        goto Quit;
    }
    VAR_11 = FUNC_0(VAR_10);






    if (VAR_6->cmdIdLow <= (UINT)VAR_7 && (UINT)VAR_7 <= VAR_6->cmdIdHigh)
    {
        FUNC_10(VAR_10, (UINT)VAR_7);
        goto Unlock_Quit;
    }


    switch (VAR_7)
    {
        case 132:
        {
            LPWSTR VAR_12 = ((void*)0);
            SIZE_T VAR_13 = 0;

            VAR_10->dwSelectionCursor.X = VAR_11->ViewOrigin.X;
            VAR_10->dwSelectionCursor.Y = VAR_11->ViewOrigin.Y;
            VAR_10->Selection.dwSelectionAnchor = VAR_10->dwSelectionCursor;
            VAR_10->Selection.dwFlags |= VAR_2;
            FUNC_9(VAR_10, &VAR_10->Selection.dwSelectionAnchor);

            VAR_13 = VAR_10->Title.Length + sizeof(L"Mark - ")/sizeof(WCHAR) + 1;
            VAR_12 = FUNC_2(0, VAR_13 * sizeof(WCHAR));
            FUNC_14(VAR_12, L"Mark - ");
            FUNC_13(VAR_12, VAR_10->Title.Buffer);
            FUNC_12(VAR_6->hWindow, VAR_12);
            FUNC_3(VAR_12);

            break;
        }

        case 134:
            FUNC_6(VAR_6);
            break;

        case 131:
            FUNC_7(VAR_6);
            break;

        case 129:
        {
            LPWSTR VAR_14 = ((void*)0);
            SIZE_T VAR_15 = 0;

            VAR_10->Selection.dwSelectionAnchor.X = 0;
            VAR_10->Selection.dwSelectionAnchor.Y = 0;
            VAR_10->dwSelectionCursor.X = VAR_11->ViewSize.X - 1;
            VAR_10->dwSelectionCursor.Y = VAR_11->ViewSize.Y - 1;
            VAR_10->Selection.dwFlags |= VAR_2 | VAR_0;
            FUNC_9(VAR_10, &VAR_10->dwSelectionCursor);

            VAR_15 = VAR_10->Title.Length + sizeof(L"Selection - ")/sizeof(WCHAR) + 1;
            VAR_14 = FUNC_2(0, VAR_15 * sizeof(WCHAR));
            FUNC_14(VAR_14, L"Selection - ");
            FUNC_13(VAR_14, VAR_10->Title.Buffer);
            FUNC_12(VAR_6->hWindow, VAR_14);
            FUNC_3(VAR_14);

            break;
        }

        case 130:
            FUNC_4("Scrolling is not handled yet\n");
            break;

        case 133:
            FUNC_4("Finding is not handled yet\n");
            break;

        case 135:
            FUNC_8(VAR_6, VAR_4);
            break;

        case 128:
            FUNC_8(VAR_6, VAR_3);
            break;

        default:
            VAR_9 = VAR_3;
            break;
    }

Unlock_Quit:
    FUNC_11(&VAR_10->Lock);
Quit:
    if (!VAR_9)
        VAR_9 = FUNC_5(VAR_6->hWindow, VAR_5, VAR_7, VAR_8);

    return VAR_9;
}
