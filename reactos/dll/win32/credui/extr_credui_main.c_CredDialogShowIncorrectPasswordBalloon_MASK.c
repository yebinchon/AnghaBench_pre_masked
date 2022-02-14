
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int toolinfo ;
struct cred_dialog_params {scalar_t__ fBalloonTipActive; int hwndBalloonTip; int * pszUsername; } ;
typedef int WCHAR ;
struct TYPE_6__ {int right; int top; int bottom; } ;
struct TYPE_5__ {int cbSize; int uId; int hwnd; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef TYPE_2__ RECT ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct cred_dialog_params*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,int *,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int ,scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_9(HWND VAR_9, struct cred_dialog_params *VAR_10)
{
    TTTOOLINFOW VAR_11;
    RECT VAR_12;
    INT VAR_13;
    INT VAR_14;
    WCHAR VAR_15[256];




    if (!VAR_10->pszUsername[0])
        return;


    if (VAR_10->fBalloonTipActive)
        return;

    if (!FUNC_5(VAR_8, VAR_1, VAR_15, FUNC_0(VAR_15)))
    {
        FUNC_2("failed to load IDS_INCORRECTPASSWORDTITLE\n");
        return;
    }

    FUNC_1(VAR_9, VAR_10);

    FUNC_8(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.cbSize = sizeof(VAR_11);
    VAR_11.hwnd = VAR_9;
    VAR_11.uId = VAR_2;

    FUNC_7(VAR_10->hwndBalloonTip, VAR_5, VAR_4, (LPARAM)VAR_15);

    FUNC_4(FUNC_3(VAR_9, VAR_0), &VAR_12);

    VAR_13 = VAR_12.right - 12;
    VAR_14 = (VAR_12.top + VAR_12.bottom) / 2;
    FUNC_7(VAR_10->hwndBalloonTip, VAR_7, 0, FUNC_6(VAR_13, VAR_14));

    FUNC_7(VAR_10->hwndBalloonTip, VAR_6, VAR_3, (LPARAM)&VAR_11);

    VAR_10->fBalloonTipActive = VAR_3;
}
