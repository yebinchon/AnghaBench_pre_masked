
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_21__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_38__ {int nPos; } ;
struct TYPE_37__ {int cx; int cy; } ;
struct TYPE_34__ {int y; } ;
struct TYPE_35__ {int nHeight; TYPE_5__ pt; } ;
struct TYPE_32__ {int y; } ;
struct TYPE_33__ {TYPE_3__ pt; } ;
struct TYPE_36__ {TYPE_6__ row; TYPE_4__ para; } ;
struct TYPE_31__ {int x; } ;
struct TYPE_26__ {TYPE_2__ pt; } ;
struct TYPE_29__ {TYPE_12__ run; } ;
struct TYPE_30__ {TYPE_1__ member; } ;
struct TYPE_28__ {int nOffset; TYPE_13__* pPara; TYPE_21__* pRun; } ;
struct TYPE_27__ {TYPE_7__ member; } ;
struct TYPE_24__ {int nPos; } ;
struct TYPE_25__ {int styleFlags; TYPE_10__ vert_si; TYPE_9__ horz_si; TYPE_8__ sizeWindow; } ;
typedef TYPE_11__ ME_TextEditor ;
typedef TYPE_12__ ME_Run ;
typedef TYPE_13__ ME_DisplayItem ;
typedef TYPE_14__ ME_Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_13__* FUNC_0 (TYPE_21__*,int ) ;
 int FUNC_1 (TYPE_11__*,int) ;
 int FUNC_2 (TYPE_11__*,TYPE_12__*,int ,int ) ;
 int FUNC_3 (TYPE_11__*,int,int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_13__*) ;
 int VAR_3 ;

void FUNC_5(ME_TextEditor *VAR_4, ME_Cursor *VAR_5)
{
  ME_Run *VAR_6 = &VAR_5->pRun->member.run;
  ME_DisplayItem *VAR_7 = FUNC_0(VAR_5->pRun, VAR_3);
  ME_DisplayItem *VAR_8 = VAR_5->pPara;
  int VAR_9, VAR_10, VAR_11;

  FUNC_4(VAR_7);
  FUNC_4(VAR_8);

  if (VAR_4->styleFlags & VAR_0)
  {
    VAR_9 = VAR_6->pt.x + FUNC_2(VAR_4, VAR_6, VAR_5->nOffset, VAR_2);
    if (VAR_9 > VAR_4->horz_si.nPos + VAR_4->sizeWindow.cx)
      VAR_9 = VAR_9 + 1 - VAR_4->sizeWindow.cx;
    else if (VAR_9 > VAR_4->horz_si.nPos)
      VAR_9 = VAR_4->horz_si.nPos;

    if (~VAR_4->styleFlags & VAR_1)
    {
      FUNC_1(VAR_4, VAR_9);
      return;
    }
  } else {
    if (~VAR_4->styleFlags & VAR_1)
      return;
    VAR_9 = VAR_4->horz_si.nPos;
  }

  VAR_10 = VAR_8->member.para.pt.y + VAR_7->member.row.pt.y;
  VAR_11 = VAR_7->member.row.nHeight;

  if (VAR_10 < VAR_4->vert_si.nPos)
    FUNC_3(VAR_4, VAR_9, VAR_10);
  else if (VAR_10 + VAR_11 > VAR_4->vert_si.nPos + VAR_4->sizeWindow.cy)
    FUNC_3(VAR_4, VAR_9, VAR_10 + VAR_11 - VAR_4->sizeWindow.cy);
  else if (VAR_9 != VAR_4->horz_si.nPos)
    FUNC_3(VAR_4, VAR_9, VAR_4->vert_si.nPos);
}
