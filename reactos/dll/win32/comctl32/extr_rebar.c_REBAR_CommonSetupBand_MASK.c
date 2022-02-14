
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int fMask; int fStyle; scalar_t__ clrFore; scalar_t__ clrBack; scalar_t__ iImage; scalar_t__ hwndChild; scalar_t__ cxMinChild; scalar_t__ cyMinChild; scalar_t__ cbSize; scalar_t__ cyChild; int cyMaxChild; scalar_t__ cyIntegral; scalar_t__ cx; scalar_t__ hbmBack; scalar_t__ wID; scalar_t__ cxIdeal; scalar_t__ lParam; scalar_t__ cxHeader; } ;
struct TYPE_6__ {int fMask; int fStyle; scalar_t__ clrFore; scalar_t__ clrBack; scalar_t__ iImage; scalar_t__ hwndChild; scalar_t__ cxMinChild; scalar_t__ cyMinChild; scalar_t__ cyChild; int cyMaxChild; scalar_t__ cyIntegral; scalar_t__ cx; scalar_t__ hbmBack; scalar_t__ wID; scalar_t__ cxIdeal; scalar_t__ lParam; scalar_t__ cxHeader; scalar_t__ hwndPrevParent; } ;
typedef TYPE_1__ REBAR_BAND ;
typedef TYPE_2__ REBARBANDINFOW ;
typedef int HWND ;


 int VAR_0 ;
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
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static UINT
FUNC_4(HWND VAR_16, const REBARBANDINFOW *VAR_17, REBAR_BAND *VAR_18)



{
    UINT VAR_19 = 0x0;

    VAR_18->fMask |= VAR_17->fMask;

    if( (VAR_17->fMask & VAR_10) &&
        (VAR_18->fStyle != VAR_17->fStyle ) )
    {
 VAR_18->fStyle = VAR_17->fStyle;
        VAR_19 |= VAR_10;
    }

    if( (VAR_17->fMask & VAR_3) &&
       ( ( VAR_18->clrFore != VAR_17->clrFore ) ||
         ( VAR_18->clrBack != VAR_17->clrBack ) ) )
    {
 VAR_18->clrFore = VAR_17->clrFore;
 VAR_18->clrBack = VAR_17->clrBack;
        VAR_19 |= VAR_3;
    }

    if( (VAR_17->fMask & VAR_7) &&
       ( VAR_18->iImage != VAR_17->iImage ) )
    {
 VAR_18->iImage = VAR_17->iImage;
        VAR_19 |= VAR_7;
    }

    if( (VAR_17->fMask & VAR_1) &&
       (VAR_17->hwndChild != VAR_18->hwndChild ) )
    {
 if (VAR_17->hwndChild) {
     VAR_18->hwndChild = VAR_17->hwndChild;
     VAR_18->hwndPrevParent =
  FUNC_0 (VAR_18->hwndChild, VAR_16);

     FUNC_1(VAR_18->hwndChild, VAR_14 | VAR_15);

 }
 else {
     FUNC_2("child: %p  prev parent: %p\n",
     VAR_18->hwndChild, VAR_18->hwndPrevParent);
     VAR_18->hwndChild = 0;
     VAR_18->hwndPrevParent = 0;
 }
        VAR_19 |= VAR_1;
    }

    if( (VAR_17->fMask & VAR_2) &&
        ( (VAR_18->cxMinChild != VAR_17->cxMinChild) ||
          (VAR_18->cyMinChild != VAR_17->cyMinChild ) ||
          ( (VAR_17->cbSize >= VAR_13 && (VAR_18->fStyle & VAR_12)) &&
            ( (VAR_18->cyChild != VAR_17->cyChild ) ||
              (VAR_18->cyMaxChild != VAR_17->cyMaxChild ) ||
              (VAR_18->cyIntegral != VAR_17->cyIntegral ) ) ) ||
          ( (VAR_17->cbSize < VAR_13) &&
            ( (VAR_18->cyChild ||
               VAR_18->cyMaxChild ||
               VAR_18->cyIntegral ) ) ) ) )
    {
 VAR_18->cxMinChild = VAR_17->cxMinChild;
 VAR_18->cyMinChild = VAR_17->cyMinChild;

        if (VAR_17->cbSize >= VAR_13 && (VAR_18->fStyle & VAR_12)) {
     VAR_18->cyMaxChild = VAR_17->cyMaxChild;
            VAR_18->cyIntegral = VAR_17->cyIntegral;

            VAR_18->cyChild = FUNC_3(VAR_18, VAR_17->cyChild);
        }
 else {
     VAR_18->cyChild = VAR_18->cyMinChild;
     VAR_18->cyMaxChild = 0x7fffffff;
     VAR_18->cyIntegral = 0;
 }
        VAR_19 |= VAR_2;
    }

    if( (VAR_17->fMask & VAR_9) &&
        (VAR_18->cx != VAR_17->cx ) )
    {
 VAR_18->cx = VAR_17->cx;
        VAR_19 |= VAR_9;
    }

    if( (VAR_17->fMask & VAR_0) &&
       ( VAR_18->hbmBack != VAR_17->hbmBack ) )
    {
 VAR_18->hbmBack = VAR_17->hbmBack;
        VAR_19 |= VAR_0;
    }

    if( (VAR_17->fMask & VAR_5) &&
        (VAR_18->wID != VAR_17->wID ) )
    {
 VAR_18->wID = VAR_17->wID;
        VAR_19 |= VAR_5;
    }


    if (VAR_17->cbSize >= VAR_13) {
 if( (VAR_17->fMask & VAR_6) &&
            ( VAR_18->cxIdeal != VAR_17->cxIdeal ) )
        {
     VAR_18->cxIdeal = VAR_17->cxIdeal;
            VAR_19 |= VAR_6;
        }

 if( (VAR_17->fMask & VAR_8) &&
            (VAR_18->lParam != VAR_17->lParam ) )
        {
     VAR_18->lParam = VAR_17->lParam;
            VAR_19 |= VAR_8;
        }

 if( (VAR_17->fMask & VAR_4) &&
            (VAR_18->cxHeader != VAR_17->cxHeader ) )
        {
     VAR_18->cxHeader = VAR_17->cxHeader;
            VAR_18->fStyle |= VAR_11;
            VAR_19 |= VAR_4;
        }
    }

    return VAR_19;
}
