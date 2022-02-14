
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_9__ {int nPos; int nMax; int nMin; scalar_t__ nPage; } ;
struct TYPE_8__ {int nPos; int nMax; int nMin; } ;
struct TYPE_11__ {int styleFlags; scalar_t__ nTotalWidth; scalar_t__ nTotalLength; int texthost; TYPE_3__ sizeWindow; scalar_t__ hWnd; int rcFormat; TYPE_2__ vert_si; TYPE_1__ horz_si; } ;
typedef TYPE_4__ ME_TextEditor ;
typedef int LONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int,int,int *,int *,int *,int *,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int) ;

void FUNC_11(ME_TextEditor *VAR_9, int VAR_10, int VAR_11)
{
  BOOL VAR_12, VAR_13;
  int VAR_14 = 0, VAR_15 = 0;

  if (VAR_9->horz_si.nPos != VAR_10) {
    VAR_10 = FUNC_10(VAR_10, VAR_9->horz_si.nMax);
    VAR_10 = FUNC_9(VAR_10, VAR_9->horz_si.nMin);
    VAR_14 = VAR_9->horz_si.nPos - VAR_10;
    VAR_9->horz_si.nPos = VAR_10;
    if (VAR_9->horz_si.nMax > 0xFFFF)
      VAR_10 = FUNC_7(VAR_10, 0xFFFF, VAR_9->horz_si.nMax);
    FUNC_3(VAR_9->texthost, VAR_3, VAR_10, VAR_6);
  }

  if (VAR_9->vert_si.nPos != VAR_11) {
    VAR_11 = FUNC_10(VAR_11, VAR_9->vert_si.nMax - (int)VAR_9->vert_si.nPage);
    VAR_11 = FUNC_9(VAR_11, VAR_9->vert_si.nMin);
    VAR_15 = VAR_9->vert_si.nPos - VAR_11;
    VAR_9->vert_si.nPos = VAR_11;
    if (VAR_9->vert_si.nMax > 0xFFFF)
      VAR_11 = FUNC_7(VAR_11, 0xFFFF, VAR_9->vert_si.nMax);
    FUNC_3(VAR_9->texthost, VAR_4, VAR_11, VAR_6);
  }

  if (FUNC_8(VAR_14) > VAR_9->sizeWindow.cx ||
      FUNC_8(VAR_15) > VAR_9->sizeWindow.cy)
    FUNC_1(VAR_9->texthost, ((void*)0), VAR_6);
  else
    FUNC_2(VAR_9->texthost, VAR_14, VAR_15,
                               &VAR_9->rcFormat, &VAR_9->rcFormat,
                               ((void*)0), ((void*)0), VAR_5);
  FUNC_5(VAR_9);

  if (VAR_9->hWnd)
  {
    LONG VAR_16 = FUNC_0(VAR_9->hWnd, VAR_2);
    if (VAR_9->styleFlags & VAR_7)
    {
      VAR_12 = (VAR_16 & VAR_7) != 0;
      VAR_13 = (VAR_9->nTotalWidth > VAR_9->sizeWindow.cx
                                 && (VAR_9->styleFlags & VAR_7))
                                || (VAR_9->styleFlags & VAR_0);
      if (VAR_12 != VAR_13)
        FUNC_4(VAR_9->texthost, VAR_3,
                                  VAR_13);
    }

    if (VAR_9->styleFlags & VAR_8)
    {
      VAR_12 = (VAR_16 & VAR_8) != 0;
      VAR_13 = (VAR_9->nTotalLength > VAR_9->sizeWindow.cy
                                 && (VAR_9->styleFlags & VAR_8)
                                 && (VAR_9->styleFlags & VAR_1))
                                || (VAR_9->styleFlags & VAR_0);
      if (VAR_12 != VAR_13)
        FUNC_4(VAR_9->texthost, VAR_4,
                                  VAR_13);
    }
  }
  FUNC_6(VAR_9);
}
