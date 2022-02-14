
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int si ;
struct TYPE_14__ {int nMax; int nPage; void* nPos; } ;
struct TYPE_13__ {scalar_t__ cx; int cy; } ;
struct TYPE_12__ {scalar_t__ nMax; scalar_t__ nPage; void* nPos; } ;
struct TYPE_16__ {int styleFlags; scalar_t__ nTotalWidth; int nTotalLength; int texthost; scalar_t__ hWnd; TYPE_3__ vert_si; TYPE_2__ sizeWindow; TYPE_1__ horz_si; } ;
struct TYPE_15__ {int cbSize; int fMask; int nMax; scalar_t__ nPage; void* nPos; scalar_t__ nMin; } ;
typedef TYPE_4__ SCROLLINFO ;
typedef TYPE_5__ ME_TextEditor ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,void*,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 void* FUNC_8 (void*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (scalar_t__,int ,TYPE_4__*,int) ;
 int FUNC_10 (char*,scalar_t__,int,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_11(ME_TextEditor *VAR_12)
{



  SCROLLINFO VAR_13;
  BOOL VAR_14, VAR_15;

  if (FUNC_7(VAR_12))
    FUNC_0("ME_UpdateScrollBar had to call ME_WrapMarkedParagraphs\n");

  VAR_13.cbSize = sizeof(VAR_13);
  VAR_13.fMask = VAR_6 | VAR_8 | VAR_7;
  VAR_13.nMin = 0;
  if (VAR_12->styleFlags & VAR_0)
    VAR_13.fMask |= VAR_5;


  VAR_14 = VAR_12->horz_si.nMax > VAR_12->horz_si.nPage;
  VAR_15 = VAR_12->nTotalWidth > VAR_12->sizeWindow.cx;
  if (VAR_12->horz_si.nPos && !VAR_15)
  {
    FUNC_4(VAR_12, 0);


    return;
  }

  VAR_13.nMax = VAR_12->nTotalWidth;
  VAR_13.nPos = VAR_12->horz_si.nPos;
  VAR_13.nPage = VAR_12->sizeWindow.cx;

  if (VAR_13.nMax != VAR_12->horz_si.nMax ||
      VAR_13.nPage != VAR_12->horz_si.nPage)
  {
    FUNC_10("min=%d max=%d page=%d\n", VAR_13.nMin, VAR_13.nMax, VAR_13.nPage);
    VAR_12->horz_si.nMax = VAR_13.nMax;
    VAR_12->horz_si.nPage = VAR_13.nPage;
    if ((VAR_15 || VAR_14) &&
        VAR_12->styleFlags & VAR_10)
    {
      if (VAR_13.nMax > 0xFFFF)
      {

        VAR_13.nPos = FUNC_8(VAR_13.nPos, 0xFFFF, VAR_13.nMax);
        VAR_13.nMax = 0xFFFF;
      }
      if (VAR_12->hWnd) {
        FUNC_9(VAR_12->hWnd, VAR_3, &VAR_13, VAR_9);
      } else {
        FUNC_2(VAR_12->texthost, VAR_3, VAR_13.nMin, VAR_13.nMax, VAR_2);
        FUNC_1(VAR_12->texthost, VAR_3, VAR_13.nPos, VAR_9);
      }

      VAR_14 = FUNC_5(&VAR_13);
    }
  }

  if (VAR_12->styleFlags & VAR_10)
  {
    if (VAR_13.fMask & VAR_5) {
      VAR_15 = VAR_9;
    } else if (!(VAR_12->styleFlags & VAR_10)) {
      VAR_15 = VAR_2;
    }

    if (VAR_14 != VAR_15)
      FUNC_3(VAR_12->texthost, VAR_3, VAR_15);
  }


  VAR_14 = VAR_12->vert_si.nMax > VAR_12->vert_si.nPage;
  VAR_15 = VAR_12->nTotalLength > VAR_12->sizeWindow.cy &&
                            (VAR_12->styleFlags & VAR_1);

  if (VAR_12->vert_si.nPos && !VAR_15)
  {
    FUNC_6(VAR_12, 0);


    return;
  }

  VAR_13.nMax = VAR_12->nTotalLength;
  VAR_13.nPos = VAR_12->vert_si.nPos;
  VAR_13.nPage = VAR_12->sizeWindow.cy;

  if (VAR_13.nMax != VAR_12->vert_si.nMax ||
      VAR_13.nPage != VAR_12->vert_si.nPage)
  {
    FUNC_10("min=%d max=%d page=%d\n", VAR_13.nMin, VAR_13.nMax, VAR_13.nPage);
    VAR_12->vert_si.nMax = VAR_13.nMax;
    VAR_12->vert_si.nPage = VAR_13.nPage;
    if ((VAR_15 || VAR_14) &&
        VAR_12->styleFlags & VAR_11)
    {
      if (VAR_13.nMax > 0xFFFF)
      {

        VAR_13.nPos = FUNC_8(VAR_13.nPos, 0xFFFF, VAR_13.nMax);
        VAR_13.nMax = 0xFFFF;
      }
      if (VAR_12->hWnd) {
        FUNC_9(VAR_12->hWnd, VAR_4, &VAR_13, VAR_9);
      } else {
        FUNC_2(VAR_12->texthost, VAR_4, VAR_13.nMin, VAR_13.nMax, VAR_2);
        FUNC_1(VAR_12->texthost, VAR_4, VAR_13.nPos, VAR_9);
      }

      VAR_14 = FUNC_5(&VAR_13);
    }
  }

  if (VAR_12->styleFlags & VAR_11)
  {
    if (VAR_13.fMask & VAR_5) {
      VAR_15 = VAR_9;
    } else if (!(VAR_12->styleFlags & VAR_11)) {
      VAR_15 = VAR_2;
    }

    if (VAR_14 != VAR_15)
      FUNC_3(VAR_12->texthost, VAR_4,
                                VAR_15);
  }
}
