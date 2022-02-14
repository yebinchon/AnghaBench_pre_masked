
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int lfMessageFont; int lfMenuFont; int lfCaptionFont; int iBorderWidth; int iScrollWidth; scalar_t__ iMenuHeight; scalar_t__ iCaptionHeight; } ;
struct TYPE_8__ {TYPE_1__ ncMetrics; int * crColor; } ;
struct TYPE_7__ {int cxEdge; int cyEdge; TYPE_3__ Scheme; int * hMessageFont; int * hMenuFont; int * hCaptionFont; int cyBorder; int cxScrollbar; scalar_t__ cyMenu; scalar_t__ cyCaption; int cySizeFrame; int * hbrWindow; int * hbrDesktop; int * hbrScrollbar; } ;
typedef TYPE_2__* PPREVIEW_DATA ;
typedef int HWND ;
typedef TYPE_3__ COLOR_SCHEME ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static VOID FUNC_4(HWND VAR_4, PPREVIEW_DATA VAR_5, COLOR_SCHEME *VAR_6)
{
    if (VAR_5->hbrScrollbar != ((void*)0))
        FUNC_2(VAR_5->hbrScrollbar);
    VAR_5->hbrScrollbar = FUNC_1(VAR_6->crColor[VAR_1]);
    if (VAR_5->hbrDesktop != ((void*)0))
        FUNC_2(VAR_5->hbrDesktop);

    VAR_5->hbrDesktop = FUNC_1(VAR_6->crColor[VAR_0]);
    if (VAR_5->hbrWindow != ((void*)0))
        FUNC_2(VAR_5->hbrWindow);
    VAR_5->hbrWindow = FUNC_1(VAR_6->crColor[VAR_2]);

    VAR_5->cxEdge = 2;
    VAR_5->cyEdge = 2;

    VAR_5->cySizeFrame = VAR_6->ncMetrics.iBorderWidth;

    VAR_5->cyCaption = VAR_6->ncMetrics.iCaptionHeight+1;
    VAR_5->cyMenu = VAR_6->ncMetrics.iMenuHeight -1;
    VAR_5->cxScrollbar = VAR_6->ncMetrics.iScrollWidth;
    VAR_5->cyBorder = VAR_6->ncMetrics.iBorderWidth;

    if (VAR_5->hCaptionFont != ((void*)0))
        FUNC_2(VAR_5->hCaptionFont);
    VAR_5->hCaptionFont = FUNC_0(&VAR_6->ncMetrics.lfCaptionFont);

    if (VAR_5->hMenuFont != ((void*)0))
        FUNC_2(VAR_5->hMenuFont);
    VAR_5->hMenuFont = FUNC_0(&VAR_6->ncMetrics.lfMenuFont);

    if (VAR_5->hMessageFont != ((void*)0))
        FUNC_2(VAR_5->hMessageFont);
    VAR_5->hMessageFont = FUNC_0(&VAR_6->ncMetrics.lfMessageFont);

    VAR_5->Scheme = *VAR_6;
    FUNC_3(VAR_4, ((void*)0), VAR_3);
}
