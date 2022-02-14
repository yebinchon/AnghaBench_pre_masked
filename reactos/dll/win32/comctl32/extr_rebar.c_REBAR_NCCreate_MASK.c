
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ncm ;
struct TYPE_15__ {scalar_t__ lfWeight; } ;
struct TYPE_14__ {int clrBtnFace; int clrBtnText; } ;
struct TYPE_13__ {int style; int cy; int cx; int y; int x; } ;
struct TYPE_12__ {int cbSize; TYPE_9__ lfCaptionFont; } ;
struct TYPE_11__ {int iOldBand; int ichevronhotBand; int iGrabbedBand; int orgStyle; int dwStyle; scalar_t__ hDefaultFont; scalar_t__ hFont; int bands; scalar_t__ fStatus; void* hcurDrag; void* hcurVert; void* hcurHorz; void* hcurArrow; int DoRedraw; int hwndSelf; int clrBtnFace; int clrBtnText; void* clrText; void* clrBk; } ;
typedef int RECT ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ NONCLIENTMETRICSW ;
typedef int LRESULT ;
typedef int LPWSTR ;
typedef int HWND ;
typedef scalar_t__ HFONT ;
typedef int DWORD_PTR ;
typedef TYPE_3__ CREATESTRUCTW ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_7 (int ,int ) ;
 int VAR_10 ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int,TYPE_2__*,int ) ;
 int FUNC_13 (char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__ VAR_15 ;
 int VAR_16 ;
 int FUNC_15 (int *) ;

__attribute__((used)) static LRESULT
FUNC_16 (HWND VAR_17, const CREATESTRUCTW *VAR_18)
{
    REBAR_INFO *VAR_19 = FUNC_8 (VAR_17);
    RECT VAR_20, VAR_21;
    NONCLIENTMETRICSW VAR_22;
    HFONT VAR_23;

    if (VAR_19) {
 FUNC_3("Strange info structure pointer *not* NULL\n");
 return VAR_3;
    }

    if (FUNC_14(VAR_16)) {
 FUNC_6(VAR_17, &VAR_20);
 FUNC_4(VAR_17, &VAR_21);
        FUNC_13("window=(%s) client=(%s) cs=(%d,%d %dx%d)\n",
              FUNC_15(&VAR_20), FUNC_15(&VAR_21),
       VAR_18->x, VAR_18->y, VAR_18->cx, VAR_18->cy);
    }


    VAR_19 = FUNC_0 (sizeof(REBAR_INFO));
    FUNC_10 (VAR_17, 0, (DWORD_PTR)VAR_19);


    VAR_19->clrBk = VAR_2;
    VAR_19->clrText = VAR_2;
    VAR_19->clrBtnText = VAR_15.clrBtnText;
    VAR_19->clrBtnFace = VAR_15.clrBtnFace;
    VAR_19->iOldBand = -1;
    VAR_19->ichevronhotBand = -2;
    VAR_19->iGrabbedBand = -1;
    VAR_19->hwndSelf = VAR_17;
    VAR_19->DoRedraw = VAR_13;
    VAR_19->hcurArrow = FUNC_7 (0, (LPWSTR)VAR_6);
    VAR_19->hcurHorz = FUNC_7 (0, (LPWSTR)VAR_9);
    VAR_19->hcurVert = FUNC_7 (0, (LPWSTR)VAR_8);
    VAR_19->hcurDrag = FUNC_7 (0, (LPWSTR)VAR_7);
    VAR_19->fStatus = 0;
    VAR_19->hFont = FUNC_5 (VAR_12);
    VAR_19->bands = FUNC_2(8);


    FUNC_9(VAR_19, VAR_10);


    VAR_19->orgStyle = VAR_18->style;

    VAR_19->dwStyle = VAR_18->style | VAR_14;
    if ((VAR_19->dwStyle & VAR_0) == 0)
        VAR_19->dwStyle |= VAR_1;
    FUNC_11 (VAR_17, VAR_5, VAR_19->dwStyle);


    VAR_22.cbSize = sizeof(VAR_22);
    FUNC_12 (VAR_11, VAR_22.cbSize, &VAR_22, 0);

    if (VAR_22.lfCaptionFont.lfWeight > VAR_4) {
 VAR_22.lfCaptionFont.lfWeight = VAR_4;
    }
    VAR_23 = FUNC_1 (&VAR_22.lfCaptionFont);
    if (VAR_23) {
        VAR_19->hFont = VAR_19->hDefaultFont = VAR_23;
    }

    return VAR_13;
}
