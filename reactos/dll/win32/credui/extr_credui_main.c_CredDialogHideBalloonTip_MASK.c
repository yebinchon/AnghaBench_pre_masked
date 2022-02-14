
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int toolinfo ;
struct cred_dialog_params {int fBalloonTipActive; int hwndBalloonTip; } ;
struct TYPE_3__ {int cbSize; int uId; int hwnd; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(HWND VAR_2, struct cred_dialog_params *VAR_3)
{
    TTTOOLINFOW VAR_4;

    if (!VAR_3->hwndBalloonTip)
        return;

    FUNC_1(&VAR_4, 0, sizeof(VAR_4));

    VAR_4.cbSize = sizeof(VAR_4);
    VAR_4.hwnd = VAR_2;
    VAR_4.uId = 0;
    FUNC_0(VAR_3->hwndBalloonTip, VAR_1, VAR_0, (LPARAM)&VAR_4);
    VAR_4.uId = 1;
    FUNC_0(VAR_3->hwndBalloonTip, VAR_1, VAR_0, (LPARAM)&VAR_4);

    VAR_3->fBalloonTipActive = VAR_0;
}
