
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int VOID ;
struct TYPE_33__ {int left; int top; int right; int bottom; } ;
struct TYPE_32__ {int top; int right; int bottom; scalar_t__ left; } ;
struct TYPE_31__ {int left; int top; int right; int bottom; } ;
struct TYPE_30__ {int left; int top; int right; int bottom; } ;
struct TYPE_29__ {int left; int top; int right; int bottom; } ;
struct TYPE_28__ {int left; int top; int right; int bottom; } ;
struct TYPE_27__ {int left; int top; int right; int bottom; } ;
struct TYPE_26__ {int left; int top; int right; int bottom; } ;
struct TYPE_25__ {int left; int top; int right; int bottom; } ;
struct TYPE_23__ {int left; int right; int bottom; int top; } ;
struct TYPE_22__ {int left; int top; int right; int bottom; } ;
struct TYPE_21__ {int left; int top; int right; int bottom; } ;
struct TYPE_20__ {int left; int top; int right; int bottom; } ;
struct TYPE_19__ {int left; int top; int right; int bottom; } ;
struct TYPE_18__ {int left; int top; int right; int bottom; } ;
struct TYPE_24__ {int cxEdge; int cySizeFrame; int cyEdge; int cyCaption; int cyBorder; int cyMenu; TYPE_15__ rcDialogButton; TYPE_14__ rcDialogClient; TYPE_13__ rcDialogFrame; TYPE_12__ rcDialogCaption; TYPE_11__ rcDialogCaptionButtons; TYPE_10__ rcDesktop; TYPE_9__ rcActiveClient; TYPE_8__ rcActiveScroll; scalar_t__ cxScrollbar; TYPE_7__ rcActiveFrame; TYPE_6__ rcActiveMenuBar; TYPE_5__ rcActiveCaption; TYPE_4__ rcActiveCaptionButtons; TYPE_3__ rcInactiveCaption; TYPE_2__ rcInactiveFrame; TYPE_1__ rcInactiveCaptionButtons; } ;
typedef TYPE_16__* PPREVIEW_DATA ;



__attribute__((used)) static VOID
FUNC_0(PPREVIEW_DATA VAR_0)
{
    int VAR_1, VAR_2;


    VAR_0->rcInactiveFrame.left = VAR_0->rcDesktop.left + 8;
    VAR_0->rcInactiveFrame.top = VAR_0->rcDesktop.top + 8;
    VAR_0->rcInactiveFrame.right = VAR_0->rcDesktop.right - 25;
    VAR_0->rcInactiveFrame.bottom = VAR_0->rcDesktop.bottom - 30;


    VAR_0->rcInactiveCaption.left = VAR_0->rcInactiveFrame.left + VAR_0->cxEdge + VAR_0->cySizeFrame + 1;
    VAR_0->rcInactiveCaption.top = VAR_0->rcInactiveFrame.top + VAR_0->cyEdge + VAR_0->cySizeFrame + 1;
    VAR_0->rcInactiveCaption.right = VAR_0->rcInactiveFrame.right - VAR_0->cxEdge - VAR_0->cySizeFrame - 1;
    VAR_0->rcInactiveCaption.bottom = VAR_0->rcInactiveCaption.top + VAR_0->cyCaption - VAR_0->cyBorder;


    VAR_0->rcInactiveCaptionButtons.left = VAR_0->rcInactiveCaption.right - 2 - 2 - 3 * 16;
    VAR_0->rcInactiveCaptionButtons.top = VAR_0->rcInactiveCaption.top + 2;
    VAR_0->rcInactiveCaptionButtons.right = VAR_0->rcInactiveCaption.right - 2;
    VAR_0->rcInactiveCaptionButtons.bottom = VAR_0->rcInactiveCaption.bottom - 2;


    VAR_0->rcActiveFrame.left = VAR_0->rcInactiveFrame.left + 3 + VAR_0->cySizeFrame;
    VAR_0->rcActiveFrame.top = VAR_0->rcInactiveCaption.bottom + 1;
    VAR_0->rcActiveFrame.right = VAR_0->rcDesktop.right - 10;
    VAR_0->rcActiveFrame.bottom = VAR_0->rcDesktop.bottom - 25;


    VAR_0->rcActiveCaption.left = VAR_0->rcActiveFrame.left + VAR_0->cxEdge + VAR_0->cySizeFrame + 1;
    VAR_0->rcActiveCaption.top = VAR_0->rcActiveFrame.top + VAR_0->cxEdge + VAR_0->cySizeFrame + 1;
    VAR_0->rcActiveCaption.right = VAR_0->rcActiveFrame.right - VAR_0->cxEdge - VAR_0->cySizeFrame - 1;
    VAR_0->rcActiveCaption.bottom = VAR_0->rcActiveCaption.top + VAR_0->cyCaption - VAR_0->cyBorder;


    VAR_0->rcActiveCaptionButtons.left = VAR_0->rcActiveCaption.right - 2 - 2 - 3 * 16;
    VAR_0->rcActiveCaptionButtons.top = VAR_0->rcActiveCaption.top + 2;
    VAR_0->rcActiveCaptionButtons.right = VAR_0->rcActiveCaption.right - 2;
    VAR_0->rcActiveCaptionButtons.bottom = VAR_0->rcActiveCaption.bottom - 2;


    VAR_0->rcActiveMenuBar.left = VAR_0->rcActiveFrame.left + VAR_0->cxEdge + VAR_0->cySizeFrame + 1;
    VAR_0->rcActiveMenuBar.top = VAR_0->rcActiveCaption.bottom + 1;
    VAR_0->rcActiveMenuBar.right = VAR_0->rcActiveFrame.right - VAR_0->cxEdge - VAR_0->cySizeFrame - 1;
    VAR_0->rcActiveMenuBar.bottom = VAR_0->rcActiveMenuBar.top + VAR_0->cyMenu + 1;


    VAR_0->rcActiveClient.left = VAR_0->rcActiveFrame.left + VAR_0->cxEdge + VAR_0->cySizeFrame + 1;
    VAR_0->rcActiveClient.top = VAR_0->rcActiveMenuBar.bottom;
    VAR_0->rcActiveClient.right = VAR_0->rcActiveFrame.right - VAR_0->cxEdge - VAR_0->cySizeFrame - 1;
    VAR_0->rcActiveClient.bottom = VAR_0->rcActiveFrame.bottom - VAR_0->cyEdge - VAR_0->cySizeFrame - 1;


    VAR_0->rcActiveScroll.left = VAR_0->rcActiveClient.right - 2 - VAR_0->cxScrollbar;
    VAR_0->rcActiveScroll.top = VAR_0->rcActiveClient.top + 2;
    VAR_0->rcActiveScroll.right = VAR_0->rcActiveClient.right - 2;
    VAR_0->rcActiveScroll.bottom = VAR_0->rcActiveClient.bottom - 2;



    VAR_0->rcDialogFrame.left = VAR_0->rcActiveClient.left + 4;
    VAR_0->rcDialogFrame.top = (VAR_0->rcDesktop.bottom * 60) / 100;
    VAR_0->rcDialogFrame.right = (VAR_0->rcDesktop.right * 65) / 100;
    VAR_0->rcDialogFrame.bottom = VAR_0->rcDesktop.bottom - 5;


    VAR_0->rcDialogCaption.left = VAR_0->rcDialogFrame.left + 3;
    VAR_0->rcDialogCaption.top = VAR_0->rcDialogFrame.top + 3;
    VAR_0->rcDialogCaption.right = VAR_0->rcDialogFrame.right - 3;
    VAR_0->rcDialogCaption.bottom = VAR_0->rcDialogFrame.top + VAR_0->cyCaption + 1 + 1;


    VAR_0->rcDialogCaptionButtons.left = VAR_0->rcDialogCaption.right - 2 - 16;
    VAR_0->rcDialogCaptionButtons.top = VAR_0->rcDialogCaption.top + 2;
    VAR_0->rcDialogCaptionButtons.right = VAR_0->rcDialogCaption.right - 2;
    VAR_0->rcDialogCaptionButtons.bottom = VAR_0->rcDialogCaption.bottom - 2;


    VAR_0->rcDialogClient.left = VAR_0->rcDialogFrame.left + 3;
    VAR_0->rcDialogClient.top = VAR_0->rcDialogCaption.bottom + 1;
    VAR_0->rcDialogClient.right = VAR_0->rcDialogFrame.right - 3;
    VAR_0->rcDialogClient.bottom = VAR_0->rcDialogFrame.bottom - 3;


    VAR_1 = 80;
    VAR_2 = 28;

    VAR_0->rcDialogButton.left =
        (VAR_0->rcDialogClient.right + VAR_0->rcDialogClient.left - VAR_1) / 2;
    VAR_0->rcDialogButton.right = VAR_0->rcDialogButton.left + VAR_1;
    VAR_0->rcDialogButton.bottom = VAR_0->rcDialogClient.bottom - 2;
    VAR_0->rcDialogButton.top = VAR_0->rcDialogButton.bottom - VAR_2;
}
