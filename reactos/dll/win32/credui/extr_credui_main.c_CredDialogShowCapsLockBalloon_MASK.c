
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int toolinfo ;
struct cred_dialog_params {scalar_t__ fBalloonTipActive; int hwndBalloonTip; } ;
typedef int WCHAR ;
struct TYPE_6__ {scalar_t__ bottom; scalar_t__ left; } ;
struct TYPE_5__ {int cbSize; int uId; int hwnd; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef TYPE_2__ RECT ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct cred_dialog_params*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int *,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,scalar_t__,int ) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_10(HWND VAR_12, struct cred_dialog_params *VAR_13)
{
    TTTOOLINFOW VAR_14;
    RECT VAR_15;
    INT VAR_16;
    INT VAR_17;
    WCHAR VAR_18[256];


    if (VAR_13->fBalloonTipActive)
        return;

    if (!FUNC_5(VAR_11, VAR_1, VAR_18, FUNC_0(VAR_18)))
    {
        FUNC_2("failed to load IDS_IDSCAPSLOCKONTITLE\n");
        return;
    }

    FUNC_1(VAR_12, VAR_13);

    FUNC_9(&VAR_14, 0, sizeof(VAR_14));
    VAR_14.cbSize = sizeof(VAR_14);
    VAR_14.hwnd = VAR_12;
    VAR_14.uId = VAR_3;

    FUNC_7(VAR_13->hwndBalloonTip, VAR_8, VAR_6, (LPARAM)VAR_18);

    FUNC_4(FUNC_3(VAR_12, VAR_0), &VAR_15);

    VAR_16 = VAR_15.left + 12;
    VAR_17 = VAR_15.bottom - 3;
    FUNC_7(VAR_13->hwndBalloonTip, VAR_10, 0, FUNC_6(VAR_16, VAR_17));

    FUNC_7(VAR_13->hwndBalloonTip, VAR_9, VAR_4, (LPARAM)&VAR_14);

    FUNC_8(VAR_12, VAR_2,
             FUNC_7(VAR_13->hwndBalloonTip, VAR_7, VAR_5, 0),
             ((void*)0));

    VAR_13->fBalloonTipActive = VAR_4;
}
