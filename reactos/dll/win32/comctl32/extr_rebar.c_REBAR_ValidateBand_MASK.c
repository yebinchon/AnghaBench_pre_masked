
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int fStatus; int cxMinChild; int cyMinChild; int cx; int cyChild; int cyIntegral; int cxIdeal; int cxHeader; int fStyle; int iImage; int fMask; scalar_t__ cxMinBand; int cyHeader; scalar_t__ lpText; scalar_t__ cyMinBand; } ;
struct TYPE_13__ {scalar_t__ cy; scalar_t__ cx; } ;
struct TYPE_15__ {scalar_t__ uNumBands; int dwStyle; int hFont; TYPE_1__ imageSize; scalar_t__ himl; } ;
struct TYPE_14__ {scalar_t__ cy; scalar_t__ cx; } ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ REBAR_INFO ;
typedef TYPE_4__ REBAR_BAND ;
typedef int HFONT ;
typedef int HDC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_4__* FUNC_3 (TYPE_3__ const*,scalar_t__) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_3__ const*,TYPE_4__*) ;

__attribute__((used)) static VOID
FUNC_9 (const REBAR_INFO *VAR_20, REBAR_BAND *VAR_21)



{
    UINT VAR_22=0;
    UINT VAR_23=0, VAR_24 = 0;
    UINT VAR_25, VAR_26;
    REBAR_BAND *VAR_27;

    VAR_21->fStatus = 0;
    VAR_21->cxMinBand = 0;
    VAR_21->cyMinBand = 0;
    if (VAR_21->cxMinChild > 65535) VAR_21->cxMinChild = 0;
    if (VAR_21->cyMinChild > 65535) VAR_21->cyMinChild = 0;
    if (VAR_21->cx > 65535) VAR_21->cx = 0;
    if (VAR_21->cyChild > 65535) VAR_21->cyChild = 0;
    if (VAR_21->cyIntegral > 65535) VAR_21->cyIntegral = 0;
    if (VAR_21->cxIdeal > 65535) VAR_21->cxIdeal = 0;
    if (VAR_21->cxHeader > 65535) VAR_21->cxHeader = 0;
    VAR_26 = 0;
    for (VAR_25=0; VAR_25<VAR_20->uNumBands; VAR_25++){
 VAR_27 = FUNC_3(VAR_20, VAR_25);
 if (!FUNC_2(VAR_27) && !(VAR_27->fStyle & VAR_8))
     VAR_26++;
    }


    if ( (!(VAR_21->fStyle & VAR_11)) &&
   ( (VAR_21->fStyle & VAR_9) ||
     ( !(VAR_21->fStyle & VAR_8) && (VAR_26 > 1)))
       ) {
 VAR_21->fStatus |= VAR_4;
        if (VAR_20->dwStyle & VAR_0)
     if (VAR_20->dwStyle & VAR_14)
                VAR_22 += (VAR_2 + VAR_19);
            else
         VAR_22 += (VAR_3 + VAR_19);
        else
            VAR_22 += (VAR_19 + VAR_3);

        VAR_22 += VAR_15;
    }


    if (VAR_21->iImage != -1 && (VAR_20->himl)) {
 VAR_21->fStatus |= VAR_5;
        if (VAR_20->dwStyle & VAR_0) {
    VAR_22 += (VAR_20->imageSize.cy + VAR_17);
           VAR_24 = VAR_20->imageSize.cx + 4;
 }
 else {
    VAR_22 += (VAR_20->imageSize.cx + VAR_17);
           VAR_24 = VAR_20->imageSize.cy + 4;
 }
    }


    if ((VAR_21->fMask & VAR_7) && (VAR_21->lpText) &&
        !(VAR_21->fStyle & VAR_10)) {
 HDC VAR_28 = FUNC_0 (0);
 HFONT VAR_29 = FUNC_5 (VAR_28, VAR_20->hFont);
 SIZE VAR_30;

 VAR_21->fStatus |= VAR_6;
 FUNC_1 (VAR_28, VAR_21->lpText,
          FUNC_6 (VAR_21->lpText), &VAR_30);
 VAR_22 += ((VAR_20->dwStyle & VAR_0) ? (VAR_30.cy + VAR_18) : (VAR_30.cx + VAR_18));
 VAR_23 = (VAR_20->dwStyle & VAR_0) ? 0 : VAR_30.cy;

 FUNC_5 (VAR_28, VAR_29);
 FUNC_4 (0, VAR_28);
    }


    if ((VAR_21->fStatus & (VAR_5 | VAR_6)) &&
 !(VAR_21->fStatus & VAR_4)) {
 VAR_22 += VAR_15;
    }


    if (!(VAR_21->fStyle & VAR_12))
        VAR_21->cxHeader = VAR_22;
    VAR_21->cyHeader = FUNC_7(VAR_23, VAR_24);


    FUNC_8(VAR_20, VAR_21);

    VAR_21->cxMinBand = VAR_21->cxMinChild + VAR_21->cxHeader + VAR_16;
    if (VAR_21->fStyle & VAR_13 && VAR_21->cxMinChild < VAR_21->cxIdeal)
        VAR_21->cxMinBand += VAR_1;
}
