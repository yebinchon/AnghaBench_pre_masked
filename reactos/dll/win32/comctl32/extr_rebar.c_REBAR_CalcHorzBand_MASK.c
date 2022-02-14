
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_17__ {scalar_t__ left; scalar_t__ right; int bottom; int top; } ;
struct TYPE_14__ {scalar_t__ right; scalar_t__ top; int bottom; scalar_t__ left; } ;
struct TYPE_16__ {int fStatus; int fDraw; scalar_t__ cxHeader; int fStyle; scalar_t__ cyChild; scalar_t__ cxIdeal; scalar_t__ hwndChild; TYPE_2__ rcBand; TYPE_6__ rcChild; TYPE_6__ rcChevron; TYPE_6__ rcCapText; TYPE_6__ rcCapImage; TYPE_6__ rcGripper; } ;
struct TYPE_13__ {scalar_t__ cx; int cy; } ;
struct TYPE_15__ {scalar_t__ hwndSelf; TYPE_1__ imageSize; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ REBAR_INFO ;
typedef TYPE_4__ REBAR_BAND ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 int FUNC_2 (scalar_t__,TYPE_2__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_4__* FUNC_3 (TYPE_3__ const*,scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (TYPE_6__*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (char*,int ) ;
 int VAR_17 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8 (const REBAR_INFO *VAR_18, UINT VAR_19, UINT VAR_20)



{
    REBAR_BAND *VAR_21;
    UINT VAR_22, VAR_23;
    RECT VAR_24;

    for(VAR_22=VAR_19; VAR_22<VAR_20; VAR_22++){
      VAR_21 = FUNC_3(VAR_18, VAR_22);
      if (FUNC_0(VAR_21)) {
          FUNC_4 (&VAR_21->rcChild,
     VAR_21->rcBand.right, VAR_21->rcBand.top,
     VAR_21->rcBand.right, VAR_21->rcBand.bottom);
   continue;
      }


      FUNC_4 (&VAR_21->rcGripper, VAR_21->rcBand.left, VAR_21->rcBand.top,
        VAR_21->rcBand.left, VAR_21->rcBand.bottom);


      if ( VAR_21->fStatus & VAR_5) {
   VAR_21->fDraw |= VAR_1;
   VAR_21->rcGripper.left += VAR_15;
   VAR_21->rcGripper.right = VAR_21->rcGripper.left + VAR_4;
          FUNC_1(&VAR_21->rcGripper, 0, -2);

   FUNC_4 (&VAR_21->rcCapImage,
     VAR_21->rcGripper.right+VAR_11, VAR_21->rcBand.top,
     VAR_21->rcGripper.right+VAR_11, VAR_21->rcBand.bottom);
      }
      else {
   VAR_23 = 0;
   if (VAR_21->fStatus & (VAR_6 | VAR_7))

       VAR_23 = VAR_11;
   FUNC_4 (&VAR_21->rcCapImage,
     VAR_21->rcBand.left+VAR_23, VAR_21->rcBand.top,
     VAR_21->rcBand.left+VAR_23, VAR_21->rcBand.bottom);
      }


      if (VAR_21->fStatus & VAR_6) {
   VAR_21->fDraw |= VAR_2;
   VAR_21->rcCapImage.right += VAR_18->imageSize.cx;
   VAR_21->rcCapImage.bottom = VAR_21->rcCapImage.top + VAR_18->imageSize.cy;


   FUNC_4 (&VAR_21->rcCapText,
     VAR_21->rcCapImage.right+VAR_13, VAR_21->rcBand.top+1,
     VAR_21->rcBand.left+VAR_21->cxHeader, VAR_21->rcBand.bottom-1);
      }
      else {

   FUNC_4 (&VAR_21->rcCapText, VAR_21->rcCapImage.right, VAR_21->rcBand.top+1,
     VAR_21->rcBand.left+VAR_21->cxHeader, VAR_21->rcBand.bottom-1);
      }


      if ((VAR_21->fStatus & VAR_7) && !(VAR_21->fStyle & VAR_9)) {
   VAR_21->fDraw |= VAR_3;
   VAR_21->rcCapText.right = FUNC_6(VAR_21->rcCapText.left,
     VAR_21->rcCapText.right-VAR_14);
      }


      if (VAR_21->hwndChild) {

          VAR_21->rcChild.left = VAR_21->rcBand.left + VAR_21->cxHeader;
          VAR_21->rcChild.right = VAR_21->rcBand.right - VAR_12;

          if (VAR_21->cyChild > 0) {

              UINT VAR_25 = (VAR_21->rcBand.bottom - VAR_21->rcBand.top - VAR_21->cyChild) / 2;


              VAR_21->rcChild.top = VAR_21->rcBand.top + VAR_25;
              VAR_21->rcChild.bottom = VAR_21->rcBand.top + VAR_25 + VAR_21->cyChild;
          }
          else {
              VAR_21->rcChild.top = VAR_21->rcBand.top;
              VAR_21->rcChild.bottom = VAR_21->rcBand.bottom;
          }

   if ((VAR_21->fStyle & VAR_10) && (VAR_21->rcChild.right - VAR_21->rcChild.left < VAR_21->cxIdeal))
   {
       VAR_21->rcChild.right -= VAR_0;
       FUNC_4(&VAR_21->rcChevron, VAR_21->rcChild.right,
               VAR_21->rcChild.top, VAR_21->rcChild.right + VAR_0,
               VAR_21->rcChild.bottom);
   }
      }
      else {
          FUNC_4 (&VAR_21->rcChild,
     VAR_21->rcBand.left+VAR_21->cxHeader, VAR_21->rcBand.top,
     VAR_21->rcBand.right, VAR_21->rcBand.bottom);
      }


      if (VAR_21->fDraw & VAR_8) {
   VAR_21->fDraw &= ~VAR_8;
   VAR_24 = VAR_21->rcBand;
   VAR_24.right += VAR_16;
   VAR_24.bottom += VAR_16;
   FUNC_5("invalidating %s\n", FUNC_7(&VAR_24));
   FUNC_2(VAR_18->hwndSelf, &VAR_24, VAR_17);
   if (VAR_21->hwndChild) FUNC_2(VAR_21->hwndChild, ((void*)0), VAR_17);
      }

    }

}
