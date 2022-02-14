
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_19__ {int nOffset; TYPE_3__* pRun; TYPE_7__* pPara; } ;
struct TYPE_15__ {scalar_t__ nCharOfs; TYPE_7__* prev_para; } ;
struct TYPE_16__ {TYPE_4__ para; } ;
struct TYPE_18__ {TYPE_5__ member; } ;
struct TYPE_17__ {TYPE_8__* pCursors; } ;
struct TYPE_12__ {int nCharOfs; } ;
struct TYPE_13__ {TYPE_1__ run; } ;
struct TYPE_14__ {TYPE_2__ member; } ;
typedef TYPE_6__ ME_TextEditor ;
typedef TYPE_7__ ME_DisplayItem ;
typedef TYPE_8__ ME_Cursor ;



void
FUNC_0(ME_TextEditor *VAR_0, ME_DisplayItem **VAR_1, ME_DisplayItem **VAR_2)
{
  ME_Cursor *VAR_3 = &VAR_0->pCursors[1];

  *VAR_1 = VAR_0->pCursors[0].pPara;
  *VAR_2 = VAR_0->pCursors[1].pPara;
  if (*VAR_1 == *VAR_2)
    return;

  if ((*VAR_2)->member.para.nCharOfs < (*VAR_1)->member.para.nCharOfs) {
    ME_DisplayItem *VAR_4 = *VAR_1;

    *VAR_1 = *VAR_2;
    *VAR_2 = VAR_4;
    VAR_3 = &VAR_0->pCursors[0];
  }



  if (!VAR_3->pRun->member.run.nCharOfs && !VAR_3->nOffset)
    *VAR_2 = (*VAR_2)->member.para.prev_para;
}
