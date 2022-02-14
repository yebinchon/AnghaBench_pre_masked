
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hwndToolTip; int Self; } ;
struct TYPE_4__ {int cbSize; char* lpszText; int uId; int hwnd; } ;
typedef TYPE_1__ TTTOOLINFOA ;
typedef TYPE_2__ STATUS_INFO ;
typedef int LRESULT ;
typedef scalar_t__ LPSTR ;
typedef int LPARAM ;
typedef int INT ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,char*,int ) ;

__attribute__((used)) static LRESULT
FUNC_3 (const STATUS_INFO *VAR_2, INT VAR_3, LPSTR VAR_4, INT VAR_5)
{
    FUNC_1("\n");
    if (VAR_4) {
        CHAR VAR_6[VAR_0];
        VAR_6[0]='\0';

        if (VAR_2->hwndToolTip) {
            TTTOOLINFOA VAR_7;
            VAR_7.cbSize = sizeof(TTTOOLINFOA);
            VAR_7.hwnd = VAR_2->Self;
            VAR_7.uId = VAR_3;
            VAR_7.lpszText = VAR_6;
            FUNC_0 (VAR_2->hwndToolTip, VAR_1, 0, (LPARAM)&VAR_7);
        }
        FUNC_2 (VAR_4, VAR_6, VAR_5);
    }
    return 0;
}
