
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int fsStyle; int idCommand; } ;
struct TYPE_8__ {scalar_t__ hwndToolTip; int hwndSelf; } ;
struct TYPE_7__ {int cbSize; int lpszText; scalar_t__ hinst; int uId; int hwnd; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef TYPE_2__ TOOLBAR_INFO ;
typedef TYPE_3__ TBUTTON_INFO ;
typedef int LPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(const TOOLBAR_INFO *VAR_3, const TBUTTON_INFO *VAR_4)
{
    if (VAR_3->hwndToolTip && !(VAR_4->fsStyle & VAR_0)) {
        TTTOOLINFOW VAR_5;

        FUNC_1(&VAR_5, sizeof(TTTOOLINFOW));
        VAR_5.cbSize = sizeof (TTTOOLINFOW);
        VAR_5.hwnd = VAR_3->hwndSelf;
        VAR_5.uId = VAR_4->idCommand;
        VAR_5.hinst = 0;
        VAR_5.lpszText = VAR_1;


        FUNC_0(VAR_3->hwndToolTip, VAR_2,
            0, (LPARAM)&VAR_5);
    }
}
