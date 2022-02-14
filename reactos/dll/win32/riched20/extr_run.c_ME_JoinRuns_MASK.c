
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int nCharOfs; scalar_t__ len; } ;
struct TYPE_15__ {TYPE_7__ run; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_2__ member; struct TYPE_17__* next; } ;
struct TYPE_16__ {int nCursors; TYPE_1__* pCursors; } ;
struct TYPE_14__ {int nOffset; TYPE_4__* pRun; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef TYPE_4__ ME_DisplayItem ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_7__*) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (TYPE_3__*,int ) ;

void FUNC_7(ME_TextEditor *VAR_1, ME_DisplayItem *VAR_2)
{
  ME_DisplayItem *VAR_3 = VAR_2->next;
  int VAR_4;
  FUNC_5(VAR_2->type == VAR_0 && VAR_3->type == VAR_0);
  FUNC_5(VAR_2->member.run.nCharOfs != -1);
  FUNC_6(VAR_1, FUNC_2(VAR_2));


  for (VAR_4=0; VAR_4<VAR_1->nCursors; VAR_4++) {
    if (VAR_1->pCursors[VAR_4].pRun == VAR_3) {
      VAR_1->pCursors[VAR_4].pRun = VAR_2;
      VAR_1->pCursors[VAR_4].nOffset += VAR_2->member.run.len;
    }
  }

  VAR_2->member.run.len += VAR_3->member.run.len;
  FUNC_3(VAR_3);
  FUNC_1(VAR_3);
  FUNC_4(VAR_1, &VAR_2->member.run);
  FUNC_0(VAR_1);
}
