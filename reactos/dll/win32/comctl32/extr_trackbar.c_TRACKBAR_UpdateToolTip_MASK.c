
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ti ;
typedef char WCHAR ;
struct TYPE_14__ {int x; int y; } ;
struct TYPE_13__ {int right; int bottom; } ;
struct TYPE_10__ {int top; int bottom; int left; int right; } ;
struct TYPE_12__ {int dwStyle; scalar_t__ fLocation; int hwndToolTip; int hwndSelf; TYPE_1__ rcThumb; int lPos; } ;
struct TYPE_11__ {int cbSize; int uFlags; char* lpszText; int hwnd; } ;
typedef TYPE_2__ TTTOOLINFOW ;
typedef TYPE_3__ TRACKBAR_INFO ;
typedef TYPE_4__ RECT ;
typedef TYPE_5__ POINT ;
typedef int LRESULT ;
typedef int LPARAM ;


 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_8 (const TRACKBAR_INFO *VAR_10)
{
    WCHAR VAR_11[80];
    static const WCHAR VAR_12[] = { '%', 'l', 'd', 0 };
    TTTOOLINFOW VAR_13;
    POINT VAR_14;
    RECT VAR_15;
    LRESULT VAR_16;

    if (!VAR_10->hwndToolTip) return;

    FUNC_6(&VAR_13, sizeof(VAR_13));
    VAR_13.cbSize = sizeof(VAR_13);
    VAR_13.hwnd = VAR_10->hwndSelf;
    VAR_13.uFlags = VAR_5 | VAR_6 | VAR_4;

    FUNC_7 (VAR_11, VAR_12, VAR_10->lPos);
    VAR_13.lpszText = VAR_11;
    FUNC_5 (VAR_10->hwndToolTip, VAR_9, 0, (LPARAM)&VAR_13);

    FUNC_1 (VAR_10->hwndSelf, &VAR_15);
    VAR_16 = FUNC_5 (VAR_10->hwndToolTip, VAR_7, 0, (LPARAM)&VAR_13);
    if (VAR_10->dwStyle & VAR_0) {
 if (VAR_10->fLocation == VAR_1)
     VAR_14.x = 0 - FUNC_3(VAR_16) - VAR_3;
 else
     VAR_14.x = VAR_15.right + VAR_3;
     VAR_14.y = (VAR_10->rcThumb.top + VAR_10->rcThumb.bottom - FUNC_2(VAR_16))/2;
    } else {
 if (VAR_10->fLocation == VAR_2)
     VAR_14.y = 0 - FUNC_2(VAR_16) - VAR_3;
 else
            VAR_14.y = VAR_15.bottom + VAR_3;
        VAR_14.x = (VAR_10->rcThumb.left + VAR_10->rcThumb.right - FUNC_3(VAR_16))/2;
    }
    FUNC_0(VAR_10->hwndSelf, &VAR_14);

    FUNC_5 (VAR_10->hwndToolTip, VAR_8,
                  0, FUNC_4(VAR_14.x, VAR_14.y));
}
