
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nFlags; TYPE_5__* next_para; } ;
struct TYPE_9__ {TYPE_1__ para; } ;
struct TYPE_12__ {TYPE_2__ member; } ;
struct TYPE_11__ {TYPE_3__* pCursors; } ;
struct TYPE_10__ {scalar_t__ nOffset; int pRun; TYPE_5__* pPara; } ;
typedef TYPE_4__ ME_TextEditor ;
typedef TYPE_5__ ME_DisplayItem ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_1 ;

void FUNC_1(ME_TextEditor *VAR_2)
{
  ME_DisplayItem *VAR_3 = VAR_2->pCursors[0].pPara;
  if (VAR_3 == VAR_2->pCursors[1].pPara &&
      VAR_3->member.para.nFlags & VAR_0) {


    VAR_3 = VAR_3->member.para.next_para;
    VAR_2->pCursors[0].pPara = VAR_3;
    VAR_2->pCursors[0].pRun = FUNC_0(VAR_3, VAR_1);
    VAR_2->pCursors[0].nOffset = 0;
    VAR_2->pCursors[1] = VAR_2->pCursors[0];
  }
}
