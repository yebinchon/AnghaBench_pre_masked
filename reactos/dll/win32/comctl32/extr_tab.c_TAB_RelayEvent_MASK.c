
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_3__ {short x; short y; } ;
struct TYPE_4__ {TYPE_1__ pt; int time; int lParam; int wParam; int message; int hwnd; } ;
typedef TYPE_2__ MSG ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5 (HWND VAR_1, HWND VAR_2, UINT VAR_3,
            WPARAM VAR_4, LPARAM VAR_5)
{
    MSG VAR_6;

    VAR_6.hwnd = VAR_2;
    VAR_6.message = VAR_3;
    VAR_6.wParam = VAR_4;
    VAR_6.lParam = VAR_5;
    VAR_6.time = FUNC_1 ();
    VAR_6.pt.x = (short)FUNC_3(FUNC_0 ());
    VAR_6.pt.y = (short)FUNC_2(FUNC_0 ());

    FUNC_4 (VAR_1, VAR_0, 0, (LPARAM)&VAR_6);
}
