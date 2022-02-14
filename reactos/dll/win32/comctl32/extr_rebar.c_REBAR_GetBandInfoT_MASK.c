
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_11__ {scalar_t__ cbSize; int fMask; int fStyle; scalar_t__ clrBack; int cxHeader; int lParam; int cxIdeal; int wID; int hbmBack; int cx; int cyIntegral; int cyMaxChild; int cyChild; int cyMinChild; int cxMinChild; int hwndChild; int iImage; int cch; scalar_t__ lpText; int clrFore; } ;
struct TYPE_10__ {int fStyle; scalar_t__ clrBack; int cxHeader; int lParam; int cxIdeal; int wID; int hbmBack; int cx; int cyIntegral; int cyMaxChild; int cyChild; int cyMinChild; int cxMinChild; int hwndChild; int iImage; int lpText; int clrFore; } ;
struct TYPE_9__ {scalar_t__ uNumBands; scalar_t__ clrBtnFace; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef int LRESULT ;
typedef int LPSTR ;
typedef TYPE_3__* LPREBARBANDINFOW ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int VAR_17 ;

__attribute__((used)) static LRESULT
FUNC_5(const REBAR_INFO *VAR_18, UINT VAR_19, LPREBARBANDINFOW VAR_20, BOOL VAR_21)
{
    REBAR_BAND *VAR_22;

    if (!VAR_20 || VAR_20->cbSize < VAR_15)
 return VAR_1;

    if (VAR_19 >= VAR_18->uNumBands)
 return VAR_1;

    FUNC_4("index %u (bUnicode=%d)\n", VAR_19, VAR_21);


    VAR_22 = FUNC_1(VAR_18, VAR_19);

    if (VAR_20->fMask & VAR_12)
 VAR_20->fStyle = VAR_22->fStyle;

    if (VAR_20->fMask & VAR_5) {
 VAR_20->clrFore = VAR_22->clrFore;
 VAR_20->clrBack = VAR_22->clrBack;
 if (VAR_20->clrBack == VAR_0)
     VAR_20->clrBack = VAR_18->clrBtnFace;
    }

    if (VAR_20->fMask & VAR_13) {
        if (VAR_21)
            FUNC_2(VAR_22->lpText, VAR_20->lpText, VAR_20->cch);
        else
            FUNC_3(VAR_22->lpText, (LPSTR)VAR_20->lpText, VAR_20->cch);
    }

    if (VAR_20->fMask & VAR_9)
 VAR_20->iImage = VAR_22->iImage;

    if (VAR_20->fMask & VAR_3)
 VAR_20->hwndChild = VAR_22->hwndChild;

    if (VAR_20->fMask & VAR_4) {
 VAR_20->cxMinChild = VAR_22->cxMinChild;
 VAR_20->cyMinChild = VAR_22->cyMinChild;


        if (VAR_20->cbSize >= VAR_16 && (VAR_22->fStyle & VAR_14)) {
     VAR_20->cyChild = VAR_22->cyChild;
     VAR_20->cyMaxChild = VAR_22->cyMaxChild;
     VAR_20->cyIntegral = VAR_22->cyIntegral;
 }
    }

    if (VAR_20->fMask & VAR_11)
 VAR_20->cx = VAR_22->cx;

    if (VAR_20->fMask & VAR_2)
 VAR_20->hbmBack = VAR_22->hbmBack;

    if (VAR_20->fMask & VAR_7)
 VAR_20->wID = VAR_22->wID;


    if (VAR_20->cbSize >= VAR_16) {
 if (VAR_20->fMask & VAR_8)
     VAR_20->cxIdeal = VAR_22->cxIdeal;

 if (VAR_20->fMask & VAR_10)
     VAR_20->lParam = VAR_22->lParam;

 if (VAR_20->fMask & VAR_6)
     VAR_20->cxHeader = VAR_22->cxHeader;
    }

    FUNC_0(VAR_20);

    return VAR_17;
}
