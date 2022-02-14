
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_24__ {int x; } ;
struct TYPE_21__ {int left; int right; } ;
struct TYPE_29__ {int hDC; TYPE_4__ pt; TYPE_3__* editor; TYPE_1__ rcView; } ;
struct TYPE_25__ {int dwMask; int wBorders; int wEffects; int dySpaceAfter; int dySpaceBefore; } ;
struct TYPE_28__ {int nHeight; TYPE_5__ fmt; } ;
struct TYPE_27__ {int x; int y; } ;
struct TYPE_26__ {int left; int right; int top; int bottom; } ;
struct TYPE_22__ {int cx; } ;
struct TYPE_23__ {int hbrBackground; int nTotalWidth; TYPE_2__ sizeWindow; int texthost; scalar_t__ bEmulateVersion10; } ;
struct TYPE_20__ {scalar_t__ dble; int pen_style; } ;
typedef TYPE_6__ RECT ;
typedef TYPE_7__ POINT ;
typedef TYPE_8__ ME_Paragraph ;
typedef TYPE_9__ ME_Context ;
typedef int * HPEN ;
typedef int COLORREF ;
typedef int BOOL ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,TYPE_6__*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (TYPE_9__*,int) ;
 int FUNC_8 (TYPE_9__*,int) ;
 void* FUNC_9 (TYPE_9__*,int ) ;
 int FUNC_10 (int ,int,int,TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_11 (int ,int *) ;
 int FUNC_12 (TYPE_6__*) ;
 TYPE_10__* VAR_6 ;
 int FUNC_13 (int ,int ) ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_14(ME_Context* VAR_8, ME_Paragraph* VAR_9, int VAR_10, RECT* VAR_11)
{
  int VAR_12, VAR_13, VAR_14, VAR_15;
  RECT VAR_16;
  BOOL VAR_17;

  FUNC_12(VAR_11);
  if (!(VAR_9->fmt.dwMask & (VAR_2 | VAR_4 | VAR_3))) return;

  VAR_13 = VAR_14 = VAR_15 = 0;
  VAR_12 = (VAR_9->fmt.wBorders >> 8) & 0xF;
  VAR_17 = (!(VAR_8->editor->bEmulateVersion10 &&
                     VAR_9->fmt.dwMask & VAR_5 &&
                     VAR_9->fmt.wEffects & VAR_1) &&
                   (VAR_9->fmt.dwMask & VAR_2) &&
                    VAR_12 != 0 &&
                    (VAR_9->fmt.wBorders & 0xF));
  if (VAR_17)
  {
    if (VAR_9->fmt.wBorders & 0x00B0)
      FUNC_3("Unsupported border flags %x\n", VAR_9->fmt.wBorders);
    VAR_13 = FUNC_8(VAR_8, VAR_9->fmt.wBorders);
    if (VAR_9->fmt.wBorders & 4) VAR_14 = VAR_13;
    if (VAR_9->fmt.wBorders & 8) VAR_15 = VAR_13;
  }

  if (VAR_9->fmt.dwMask & VAR_4)
  {
    VAR_16.left = VAR_8->rcView.left;
    VAR_16.right = VAR_8->rcView.right;
    VAR_16.top = VAR_10;
    VAR_11->top = FUNC_9(VAR_8, VAR_9->fmt.dySpaceBefore);
    VAR_16.bottom = VAR_10 + VAR_11->top + VAR_14;
    FUNC_4(VAR_8->hDC, &VAR_16, VAR_8->editor->hbrBackground);
  }

  if (VAR_9->fmt.dwMask & VAR_3)
  {
    VAR_16.left = VAR_8->rcView.left;
    VAR_16.right = VAR_8->rcView.right;
    VAR_16.bottom = VAR_10 + VAR_9->nHeight;
    VAR_11->bottom = FUNC_9(VAR_8, VAR_9->fmt.dySpaceAfter);
    VAR_16.top = VAR_16.bottom - VAR_11->bottom - VAR_15;
    FUNC_4(VAR_8->hDC, &VAR_16, VAR_8->editor->hbrBackground);
  }



  if (VAR_17) {
    int VAR_18, VAR_19;
    COLORREF VAR_20;
    HPEN VAR_21 = ((void*)0), VAR_22 = ((void*)0);
    POINT VAR_23;

    if (VAR_9->fmt.wBorders & 64)
      VAR_20 = FUNC_5(VAR_8->editor->texthost,
                                      VAR_0);
    else
      VAR_20 = VAR_7[(VAR_9->fmt.wBorders >> 12) & 0xF];

    VAR_19 = VAR_8->pt.x + FUNC_13(VAR_8->editor->sizeWindow.cx,
                              VAR_8->editor->nTotalWidth);

    VAR_18 = FUNC_7(VAR_8, VAR_12);
    VAR_21 = FUNC_0(VAR_6[VAR_12].pen_style, VAR_18, VAR_20);
    VAR_22 = FUNC_11(VAR_8->hDC, VAR_21);
    FUNC_10(VAR_8->hDC, 0, 0, &VAR_23);






    if (VAR_9->fmt.wBorders & 1)
    {
      FUNC_10(VAR_8->hDC, VAR_8->pt.x, VAR_10 + VAR_11->top, ((void*)0));
      FUNC_6(VAR_8->hDC, VAR_8->pt.x, VAR_10 + VAR_9->nHeight - VAR_11->bottom);
      if (VAR_6[VAR_12].dble) {
        VAR_16.left = VAR_8->pt.x + 1;
        VAR_16.right = VAR_16.left + VAR_13;
        VAR_16.top = VAR_10 + VAR_11->top;
        VAR_16.bottom = VAR_10 + VAR_9->nHeight - VAR_11->bottom;
        FUNC_4(VAR_8->hDC, &VAR_16, VAR_8->editor->hbrBackground);
        FUNC_10(VAR_8->hDC, VAR_8->pt.x + VAR_18 + 1, VAR_10 + VAR_11->top + ((VAR_9->fmt.wBorders & (4)) ? (VAR_18 + 1) : 0), ((void*)0));
        FUNC_6(VAR_8->hDC, VAR_8->pt.x + VAR_18 + 1, VAR_10 + VAR_9->nHeight - VAR_11->bottom - ((VAR_9->fmt.wBorders & (8)) ? (VAR_18 + 1) : 0));
      }
      VAR_11->left += VAR_13;
    }
    if (VAR_9->fmt.wBorders & 2)
    {
      FUNC_10(VAR_8->hDC, VAR_19 - 1, VAR_10 + VAR_11->top, ((void*)0));
      FUNC_6(VAR_8->hDC, VAR_19 - 1, VAR_10 + VAR_9->nHeight - VAR_11->bottom);
      if (VAR_6[VAR_12].dble) {
        VAR_16.left = VAR_19 - VAR_18 - 1;
        VAR_16.right = VAR_16.left + VAR_18;
        VAR_16.top = VAR_10 + VAR_11->top;
        VAR_16.bottom = VAR_10 + VAR_9->nHeight - VAR_11->bottom;
        FUNC_4(VAR_8->hDC, &VAR_16, VAR_8->editor->hbrBackground);
        FUNC_10(VAR_8->hDC, VAR_19 - 1 - VAR_18 - 1, VAR_10 + VAR_11->top + ((VAR_9->fmt.wBorders & (4)) ? (VAR_18 + 1) : 0), ((void*)0));
        FUNC_6(VAR_8->hDC, VAR_19 - 1 - VAR_18 - 1, VAR_10 + VAR_9->nHeight - VAR_11->bottom - ((VAR_9->fmt.wBorders & (8)) ? (VAR_18 + 1) : 0));
      }
      VAR_11->right += VAR_13;
    }
    if (VAR_9->fmt.wBorders & 4)
    {
      FUNC_10(VAR_8->hDC, VAR_8->pt.x, VAR_10 + VAR_11->top, ((void*)0));
      FUNC_6(VAR_8->hDC, VAR_19, VAR_10 + VAR_11->top);
      if (VAR_6[VAR_12].dble) {
        FUNC_10(VAR_8->hDC, VAR_8->pt.x + ((VAR_9->fmt.wBorders & (1)) ? (VAR_18 + 1) : 0), VAR_10 + VAR_11->top + VAR_18 + 1, ((void*)0));
        FUNC_6(VAR_8->hDC, VAR_19 - ((VAR_9->fmt.wBorders & (2)) ? (VAR_18 + 1) : 0), VAR_10 + VAR_11->top + VAR_18 + 1);
      }
      VAR_11->top += VAR_13;
    }
    if (VAR_9->fmt.wBorders & 8)
    {
      FUNC_10(VAR_8->hDC, VAR_8->pt.x, VAR_10 + VAR_9->nHeight - VAR_11->bottom - 1, ((void*)0));
      FUNC_6(VAR_8->hDC, VAR_19, VAR_10 + VAR_9->nHeight - VAR_11->bottom - 1);
      if (VAR_6[VAR_12].dble) {
        FUNC_10(VAR_8->hDC, VAR_8->pt.x + ((VAR_9->fmt.wBorders & (1)) ? (VAR_18 + 1) : 0), VAR_10 + VAR_9->nHeight - VAR_11->bottom - 1 - VAR_18 - 1, ((void*)0));
        FUNC_6(VAR_8->hDC, VAR_19 - ((VAR_9->fmt.wBorders & (2)) ? (VAR_18 + 1) : 0), VAR_10 + VAR_9->nHeight - VAR_11->bottom - 1 - VAR_18 - 1);
      }
      VAR_11->bottom += VAR_13;
    }


    FUNC_10(VAR_8->hDC, VAR_23.x, VAR_23.y, ((void*)0));
    FUNC_11(VAR_8->hDC, VAR_22);
    FUNC_2(VAR_21);
  }
}
