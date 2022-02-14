
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {int nFlags; int len; int para; scalar_t__ nCharOfs; int style; } ;
struct TYPE_18__ {int nOffset; int pPara; TYPE_4__* pRun; } ;
struct TYPE_14__ {TYPE_8__ run; } ;
struct TYPE_17__ {TYPE_1__ member; int next; } ;
struct TYPE_16__ {int nCursors; TYPE_2__* pCursors; } ;
struct TYPE_15__ {int nOffset; TYPE_4__* pRun; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef TYPE_4__ ME_DisplayItem ;
typedef TYPE_5__ ME_Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_8__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ) ;

ME_DisplayItem *FUNC_5(ME_TextEditor *VAR_2, ME_Cursor *VAR_3)
{
  ME_DisplayItem *VAR_4 = VAR_3->pRun;
  ME_DisplayItem *VAR_5;
  int VAR_6;
  int VAR_7 = VAR_3->nOffset;

  FUNC_3(!(VAR_4->member.run.nFlags & VAR_0));

  VAR_5 = FUNC_1(VAR_4->member.run.style,
                       VAR_4->member.run.nFlags & VAR_1);
  VAR_5->member.run.nCharOfs = VAR_4->member.run.nCharOfs + VAR_7;
  VAR_5->member.run.len = VAR_4->member.run.len - VAR_7;
  VAR_5->member.run.para = VAR_4->member.run.para;
  VAR_4->member.run.len = VAR_7;
  VAR_3->pRun = VAR_5;
  VAR_3->nOffset = 0;

  FUNC_0(VAR_4->next, VAR_5);

  FUNC_2(VAR_2, &VAR_4->member.run);
  FUNC_2(VAR_2, &VAR_5->member.run);
  for (VAR_6 = 0; VAR_6 < VAR_2->nCursors; VAR_6++) {
    if (VAR_2->pCursors[VAR_6].pRun == VAR_4 &&
        VAR_2->pCursors[VAR_6].nOffset >= VAR_7) {
      VAR_2->pCursors[VAR_6].pRun = VAR_5;
      VAR_2->pCursors[VAR_6].nOffset -= VAR_7;
    }
  }
  FUNC_4(VAR_2, VAR_3->pPara);
  return VAR_4;
}
