
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int si ;
typedef int sbi ;
typedef enum SCROLL_HITTEST { ____Placeholder_SCROLL_HITTEST } SCROLL_HITTEST ;
struct TYPE_16__ {int top; int left; } ;
struct TYPE_17__ {int dwStyle; TYPE_1__ rcWindow; } ;
struct TYPE_21__ {int hWnd; TYPE_2__ wi; } ;
struct TYPE_20__ {scalar_t__ SCROLL_TrackingWin; } ;
struct TYPE_19__ {int cbSize; int* rgstate; scalar_t__ xyThumbTop; int rcScrollBar; } ;
struct TYPE_18__ {int cbSize; int fMask; } ;
typedef TYPE_3__ SCROLLINFO ;
typedef TYPE_4__ SCROLLBARINFO ;
typedef TYPE_5__* PWND_DATA ;
typedef int POINT ;
typedef TYPE_6__* PDRAW_CONTEXT ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_4__*) ;
 int FUNC_1 (int ,scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (TYPE_6__*,TYPE_4__*,int ,int ,int) ;
 int FUNC_5 (TYPE_6__*,TYPE_4__*,scalar_t__,int ,int ,int) ;
 int FUNC_6 (int ,TYPE_4__*,int ,int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_8 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ,int *) ;
 TYPE_5__* FUNC_10 (int ) ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_11(PDRAW_CONTEXT VAR_10, INT VAR_11, POINT* VAR_12)
{
    SCROLLINFO VAR_13;
    SCROLLBARINFO VAR_14;
    BOOL VAR_15;
    enum SCROLL_HITTEST VAR_16 = VAR_4;
    PWND_DATA VAR_17;

    if (((VAR_11 == VAR_2) && !(VAR_10->wi.dwStyle & VAR_9)) ||
        ((VAR_11 == VAR_1) && !(VAR_10->wi.dwStyle & VAR_8))) return;

    if (!(VAR_17 = FUNC_10(VAR_10->hWnd)))
        return;

    if (VAR_17->SCROLL_TrackingWin)
        return;


    VAR_14.cbSize = sizeof(VAR_14);
    VAR_13.cbSize = sizeof(VAR_13);
    VAR_13.fMask = VAR_6 ;
    FUNC_1(VAR_10->hWnd, VAR_11, &VAR_13);
    FUNC_0(VAR_10->hWnd, FUNC_8(VAR_11), &VAR_14);
    VAR_15 = FUNC_7(VAR_10->hWnd, VAR_11);
    if(VAR_14.rgstate[VAR_5] & VAR_7 &&
       VAR_14.rgstate[VAR_3] & VAR_7 )
    {
        VAR_14.xyThumbTop = 0;
    }


    FUNC_3(&VAR_14.rcScrollBar, -VAR_10->wi.rcWindow.left, -VAR_10->wi.rcWindow.top);

    if(VAR_12)
    {
        FUNC_9(VAR_10->hWnd, VAR_12);
        VAR_16 = FUNC_6(VAR_10->hWnd, &VAR_14, VAR_15, *VAR_12, VAR_0);
    }


    if(FUNC_2(&VAR_14.rcScrollBar)) return;


    FUNC_4( VAR_10, &VAR_14, VAR_15, 0, VAR_16 );
 FUNC_5( VAR_10, &VAR_14, VAR_14.xyThumbTop, VAR_15, 0, VAR_16 );
}
