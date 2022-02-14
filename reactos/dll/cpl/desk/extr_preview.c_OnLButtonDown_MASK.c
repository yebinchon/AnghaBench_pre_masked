
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int rcDialogButton; int rcDialogCaptionButtons; int rcDialogCaption; int rcDialogFrame; int rcActiveScroll; int rcActiveClient; int rcActiveMenuBar; int rcActiveCaptionButtons; int rcActiveCaption; int rcActiveFrame; int rcInactiveCaptionButtons; int rcInactiveCaption; int rcInactiveFrame; } ;
typedef TYPE_1__* PPREVIEW_DATA ;
typedef TYPE_2__ POINT ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_12 ;

__attribute__((used)) static VOID
FUNC_5(HWND VAR_13, int VAR_14, int VAR_15, PPREVIEW_DATA VAR_16)
{
    UINT VAR_17 = VAR_5;
    POINT VAR_18;

    VAR_18.x = VAR_14;
    VAR_18.y = VAR_15;

    if (FUNC_3(&VAR_16->rcInactiveFrame, VAR_18))
        VAR_17 = VAR_7;

    if (FUNC_3(&VAR_16->rcInactiveCaption, VAR_18))
        VAR_17 = VAR_8;

    if (FUNC_3(&VAR_16->rcInactiveCaptionButtons, VAR_18))
        VAR_17 = VAR_4;

    if (FUNC_3(&VAR_16->rcActiveFrame, VAR_18))
        VAR_17 = VAR_2;

    if (FUNC_3(&VAR_16->rcActiveCaption, VAR_18))
        VAR_17 = VAR_3;

    if (FUNC_3(&VAR_16->rcActiveCaptionButtons, VAR_18))
        VAR_17 = VAR_4;




    if (FUNC_3(&VAR_16->rcActiveMenuBar, VAR_18))
        VAR_17 = VAR_9;

    if (FUNC_3(&VAR_16->rcActiveClient, VAR_18))
        VAR_17 = VAR_11;

    if (FUNC_3(&VAR_16->rcActiveScroll, VAR_18))
        VAR_17 = VAR_10;

    if (FUNC_3(&VAR_16->rcDialogFrame, VAR_18))
        VAR_17 = VAR_6;

    if (FUNC_3(&VAR_16->rcDialogCaption, VAR_18))
        VAR_17 = VAR_3;

    if (FUNC_3(&VAR_16->rcDialogCaptionButtons, VAR_18))
        VAR_17 = VAR_4;

    if (FUNC_3(&VAR_16->rcDialogButton, VAR_18))
        VAR_17 = VAR_1;

    FUNC_4(FUNC_0(VAR_13),
                VAR_12,
                FUNC_2(FUNC_1(VAR_13, VAR_0), 0),
                (LPARAM)VAR_17);
}
