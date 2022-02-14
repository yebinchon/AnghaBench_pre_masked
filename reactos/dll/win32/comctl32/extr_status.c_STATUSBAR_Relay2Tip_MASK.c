
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_5__ {short x; short y; } ;
struct TYPE_7__ {TYPE_1__ pt; int time; int lParam; int wParam; int message; int hwnd; } ;
struct TYPE_6__ {int hwndToolTip; int Self; } ;
typedef TYPE_2__ STATUS_INFO ;
typedef TYPE_3__ MSG ;
typedef int LRESULT ;
typedef int LPARAM ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_5 (const STATUS_INFO *VAR_1, UINT VAR_2,
       WPARAM VAR_3, LPARAM VAR_4)
{
    MSG VAR_5;

    VAR_5.hwnd = VAR_1->Self;
    VAR_5.message = VAR_2;
    VAR_5.wParam = VAR_3;
    VAR_5.lParam = VAR_4;
    VAR_5.time = FUNC_1 ();
    VAR_5.pt.x = (short)FUNC_3(FUNC_0 ());
    VAR_5.pt.y = (short)FUNC_2(FUNC_0 ());

    return FUNC_4 (VAR_1->hwndToolTip, VAR_0, 0, (LPARAM)&VAR_5);
}
