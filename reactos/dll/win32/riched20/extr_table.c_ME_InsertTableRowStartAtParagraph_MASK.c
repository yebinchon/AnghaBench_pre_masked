
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {TYPE_5__* pPara; int pRun; scalar_t__ nOffset; } ;
struct TYPE_14__ {int dwMask; int wEffects; } ;
struct TYPE_15__ {int nFlags; TYPE_5__* next_para; TYPE_1__ fmt; int pCell; } ;
struct TYPE_16__ {TYPE_2__ para; } ;
struct TYPE_18__ {TYPE_3__ member; } ;
struct TYPE_17__ {TYPE_6__* pCursors; } ;
typedef TYPE_4__ ME_TextEditor ;
typedef TYPE_5__ ME_DisplayItem ;
typedef TYPE_6__ ME_Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 TYPE_5__* FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

ME_DisplayItem* FUNC_3(ME_TextEditor *VAR_8,
                                                  ME_DisplayItem *VAR_9)
{
  ME_DisplayItem *VAR_10, *VAR_11;
  ME_Cursor VAR_12 = VAR_8->pCursors[0];
  ME_DisplayItem *VAR_13;
  VAR_8->pCursors[0].pPara = VAR_9;
  VAR_8->pCursors[0].pRun = FUNC_0(VAR_9, VAR_7);
  VAR_8->pCursors[0].nOffset = 0;
  VAR_8->pCursors[1] = VAR_8->pCursors[0];
  VAR_13 = FUNC_2(VAR_8);
  VAR_12.pPara = FUNC_1(VAR_12.pRun);
  VAR_8->pCursors[0] = VAR_12;
  VAR_8->pCursors[1] = VAR_8->pCursors[0];

  VAR_11 = VAR_8->pCursors[0].pPara->member.para.next_para;
  VAR_10 = VAR_13->member.para.next_para;
  VAR_9 = VAR_10->member.para.next_para;
  while (VAR_9 != VAR_11)
  {
    VAR_9->member.para.pCell = VAR_10->member.para.pCell;
    VAR_9->member.para.nFlags |= VAR_0;
    VAR_9->member.para.nFlags &= ~(VAR_2|VAR_1);
    VAR_9->member.para.fmt.dwMask |= VAR_5|VAR_6;
    VAR_9->member.para.fmt.wEffects |= VAR_3;
    VAR_9->member.para.fmt.wEffects &= ~VAR_4;
    VAR_10 = VAR_9;
    VAR_9 = VAR_9->member.para.next_para;
  }
  return VAR_13;
}
