
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hwndToolTip; int Self; } ;
struct TYPE_4__ {int cbSize; int lpszText; scalar_t__ hinst; int uId; int hwnd; } ;
typedef TYPE_1__ TTTOOLINFOA ;
typedef TYPE_2__ STATUS_INFO ;
typedef int LRESULT ;
typedef int LPSTR ;
typedef int LPARAM ;
typedef int INT ;


 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_2 (const STATUS_INFO *VAR_1, INT VAR_2, LPSTR VAR_3)
{
    FUNC_1("part %d: \"%s\"\n", VAR_2, VAR_3);
    if (VAR_1->hwndToolTip) {
 TTTOOLINFOA VAR_4;
 VAR_4.cbSize = sizeof(TTTOOLINFOA);
 VAR_4.hwnd = VAR_1->Self;
 VAR_4.uId = VAR_2;
 VAR_4.hinst = 0;
 VAR_4.lpszText = VAR_3;
 FUNC_0 (VAR_1->hwndToolTip, VAR_0, 0, (LPARAM)&VAR_4);
    }

    return 0;
}
