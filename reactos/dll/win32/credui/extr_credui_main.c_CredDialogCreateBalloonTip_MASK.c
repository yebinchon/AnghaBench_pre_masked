
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int toolinfo ;
struct cred_dialog_params {scalar_t__ hwndBalloonTip; } ;
typedef int WCHAR ;
struct TYPE_2__ {int cbSize; int uId; int * lpReserved; scalar_t__ lParam; int * lpszText; int * hinst; int rect; int hwnd; int uFlags; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int,int ,int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ,int ,int ,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_7(HWND VAR_17, struct cred_dialog_params *VAR_18)
{
    TTTOOLINFOW VAR_19;
    WCHAR VAR_20[256];

    if (VAR_18->hwndBalloonTip)
        return;

    VAR_18->hwndBalloonTip = FUNC_1(VAR_14, VAR_9,
        ((void*)0), VAR_15 | VAR_13 | VAR_12, VAR_0,
        VAR_0, VAR_0, VAR_0, VAR_17, ((void*)0),
        VAR_16, ((void*)0));
    FUNC_6(VAR_18->hwndBalloonTip, VAR_1, 0, 0, 0, 0,
                 VAR_5 | VAR_6 | VAR_4);

    if (!FUNC_3(VAR_16, VAR_3, VAR_20, FUNC_0(VAR_20)))
    {
        FUNC_2("failed to load IDS_INCORRECTPASSWORD\n");
        return;
    }

    VAR_19.cbSize = sizeof(VAR_19);
    VAR_19.uFlags = VAR_10;
    VAR_19.hwnd = VAR_17;
    VAR_19.uId = VAR_8;
    FUNC_5(&VAR_19.rect);
    VAR_19.hinst = ((void*)0);
    VAR_19.lpszText = VAR_20;
    VAR_19.lParam = 0;
    VAR_19.lpReserved = ((void*)0);
    FUNC_4(VAR_18->hwndBalloonTip, VAR_11, 0, (LPARAM)&VAR_19);

    if (!FUNC_3(VAR_16, VAR_2, VAR_20, FUNC_0(VAR_20)))
    {
        FUNC_2("failed to load IDS_CAPSLOCKON\n");
        return;
    }

    VAR_19.uId = VAR_7;
    FUNC_4(VAR_18->hwndBalloonTip, VAR_11, 0, (LPARAM)&VAR_19);
}
