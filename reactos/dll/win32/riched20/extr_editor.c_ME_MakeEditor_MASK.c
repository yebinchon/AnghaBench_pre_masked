
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int pPara; } ;
struct TYPE_15__ {int cbSize; scalar_t__ nPos; scalar_t__ nPage; scalar_t__ nMax; scalar_t__ nMin; } ;
struct TYPE_14__ {int cbSize; scalar_t__ nPos; scalar_t__ nPage; scalar_t__ nMax; scalar_t__ nMin; } ;
struct TYPE_13__ {scalar_t__ cpMax; scalar_t__ cpMin; } ;
struct TYPE_16__ {scalar_t__ cy; scalar_t__ cx; } ;
struct TYPE_17__ {int styleFlags; int nCursors; int nUDArrowX; int rgbBackColor; int nParagraphs; int mode; int bWordWrap; int reobj_list; scalar_t__ wheel_remain; TYPE_4__ horz_si; TYPE_3__ vert_si; TYPE_2__ notified_cr; scalar_t__ cPasswordMask; int nSelectionType; scalar_t__ selofs; int * texthost; int bDefaultFormatRect; int rcFormat; TYPE_1__* pFontCache; void* bMouseCaptured; void* bDialogMode; void* bHaveFocus; void* AutoURLDetect_bEnable; int * lpOleCallback; int * pfnWordBreak; void* bHideSelection; TYPE_8__* pCursors; int pLastSelEndPara; int pLastSelStartPara; scalar_t__ nLastSelEnd; scalar_t__ nLastSelStart; int nUndoMode; int nUndoLimit; scalar_t__ nUndoStackSize; int redo_stack; int undo_stack; int nTextLimit; scalar_t__ nModifyStep; scalar_t__ nEventMask; void* bCaretAtEnd; int hbrBackground; scalar_t__ nTotalWidth; scalar_t__ nLastTotalWidth; scalar_t__ nTotalLength; scalar_t__ nLastTotalLength; int style_list; scalar_t__ nAvailWidth; scalar_t__ nZoomDenominator; scalar_t__ nZoomNumerator; int pBuffer; scalar_t__ total_rows; int * first_marked_para; scalar_t__ exStyleFlags; int bEmulateVersion10; int * reOle; TYPE_5__ sizeWindow; int * hwndParent; int * hWnd; } ;
struct TYPE_12__ {int * hFont; scalar_t__ nAge; scalar_t__ nRefs; } ;
typedef int SCROLLINFO ;
typedef TYPE_6__ ME_TextEditor ;
typedef scalar_t__ LONG ;
typedef int ITextHost ;
typedef int DWORD ;
typedef int BOOL ;


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
 void* VAR_12 ;
 int FUNC_0 (int ) ;
 int VAR_13 ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 void* FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int VAR_34 ;
 int VAR_35 ;

ME_TextEditor *FUNC_13(ITextHost *VAR_36, BOOL VAR_37)
{
  ME_TextEditor *VAR_38 = FUNC_11(sizeof(*VAR_38));
  int VAR_39;
  DWORD VAR_40;
  LONG VAR_41;

  VAR_38->hWnd = ((void*)0);
  VAR_38->hwndParent = ((void*)0);
  VAR_38->sizeWindow.cx = VAR_38->sizeWindow.cy = 0;
  VAR_38->texthost = VAR_36;
  VAR_38->reOle = ((void*)0);
  VAR_38->bEmulateVersion10 = VAR_37;
  VAR_38->styleFlags = 0;
  VAR_38->exStyleFlags = 0;
  VAR_38->first_marked_para = ((void*)0);
  VAR_38->total_rows = 0;
  FUNC_2(VAR_36,
                              (VAR_27|VAR_25|
                               VAR_26|VAR_29|
                               VAR_24|VAR_28|
                               VAR_22|VAR_30|
                               VAR_31|VAR_23),
                              &VAR_40);
  FUNC_3(VAR_36, &VAR_38->styleFlags);
  VAR_38->styleFlags &= (VAR_33|VAR_32|VAR_3|
                     VAR_2|VAR_4);
  VAR_38->pBuffer = FUNC_7();
  VAR_38->nZoomNumerator = VAR_38->nZoomDenominator = 0;
  VAR_38->nAvailWidth = 0;
  FUNC_12( &VAR_38->style_list );
  FUNC_6(VAR_38);






  VAR_38->nCursors = 4;
  VAR_38->pCursors = FUNC_11(VAR_38->nCursors * sizeof(*VAR_38->pCursors));
  FUNC_8(VAR_38, &VAR_38->pCursors[0]);
  VAR_38->pCursors[1] = VAR_38->pCursors[0];
  VAR_38->pCursors[2] = VAR_38->pCursors[0];
  VAR_38->pCursors[3] = VAR_38->pCursors[1];
  VAR_38->nLastTotalLength = VAR_38->nTotalLength = 0;
  VAR_38->nLastTotalWidth = VAR_38->nTotalWidth = 0;
  VAR_38->nUDArrowX = -1;
  VAR_38->rgbBackColor = -1;
  VAR_38->hbrBackground = FUNC_0(VAR_0);
  VAR_38->bCaretAtEnd = VAR_12;
  VAR_38->nEventMask = 0;
  VAR_38->nModifyStep = 0;
  VAR_38->nTextLimit = VAR_16;
  FUNC_12( &VAR_38->undo_stack );
  FUNC_12( &VAR_38->redo_stack );
  VAR_38->nUndoStackSize = 0;
  VAR_38->nUndoLimit = VAR_15;
  VAR_38->nUndoMode = VAR_35;
  VAR_38->nParagraphs = 1;
  VAR_38->nLastSelStart = VAR_38->nLastSelEnd = 0;
  VAR_38->pLastSelStartPara = VAR_38->pLastSelEndPara = VAR_38->pCursors[0].pPara;
  VAR_38->bHideSelection = VAR_12;
  VAR_38->pfnWordBreak = ((void*)0);
  VAR_38->lpOleCallback = ((void*)0);
  VAR_38->mode = VAR_18 | VAR_17;
  VAR_38->mode |= (VAR_40 & VAR_27) ? VAR_20 : VAR_19;
  VAR_38->AutoURLDetect_bEnable = VAR_12;
  VAR_38->bHaveFocus = VAR_12;
  VAR_38->bDialogMode = VAR_12;
  VAR_38->bMouseCaptured = VAR_12;
  for (VAR_39=0; VAR_39<VAR_13; VAR_39++)
  {
    VAR_38->pFontCache[VAR_39].nRefs = 0;
    VAR_38->pFontCache[VAR_39].nAge = 0;
    VAR_38->pFontCache[VAR_39].hFont = ((void*)0);
  }

  FUNC_5(VAR_38);
  FUNC_10(&VAR_38->rcFormat);
  VAR_38->bDefaultFormatRect = VAR_21;
  FUNC_4(VAR_38->texthost, &VAR_41);
  if (VAR_41) {

    VAR_38->selofs = VAR_14;
    VAR_38->styleFlags |= VAR_10;
  } else {
    VAR_38->selofs = 0;
  }
  VAR_38->nSelectionType = VAR_34;

  VAR_38->cPasswordMask = 0;
  if (VAR_40 & VAR_29)
    FUNC_1(VAR_36, &VAR_38->cPasswordMask);

  if (VAR_40 & VAR_22)
    VAR_38->styleFlags |= VAR_1;
  if (VAR_40 & VAR_25) {
    VAR_38->styleFlags |= VAR_5;
    VAR_38->bWordWrap = (VAR_40 & VAR_31) != 0;
  } else {
    VAR_38->bWordWrap = VAR_12;
  }
  if (VAR_40 & VAR_26)
    VAR_38->styleFlags |= VAR_8;
  if (!(VAR_40 & VAR_24))
    VAR_38->styleFlags |= VAR_6;
  if (VAR_40 & VAR_28)
    VAR_38->styleFlags |= VAR_9;
  if (VAR_40 & VAR_30)
    VAR_38->styleFlags |= VAR_11;
  if (VAR_40 & VAR_23)
    VAR_38->styleFlags |= VAR_7;

  VAR_38->notified_cr.cpMin = VAR_38->notified_cr.cpMax = 0;


  VAR_38->vert_si.cbSize = sizeof(SCROLLINFO);
  VAR_38->vert_si.nMin = 0;
  VAR_38->vert_si.nMax = 0;
  VAR_38->vert_si.nPage = 0;
  VAR_38->vert_si.nPos = 0;

  VAR_38->horz_si.cbSize = sizeof(SCROLLINFO);
  VAR_38->horz_si.nMin = 0;
  VAR_38->horz_si.nMax = 0;
  VAR_38->horz_si.nPage = 0;
  VAR_38->horz_si.nPos = 0;

  VAR_38->wheel_remain = 0;

  FUNC_12( &VAR_38->reobj_list );
  FUNC_9(((void*)0));

  return VAR_38;
}
