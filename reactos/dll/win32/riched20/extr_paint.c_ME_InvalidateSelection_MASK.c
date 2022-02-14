
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ type; } ;
struct TYPE_22__ {int nLastSelStart; int nLastSelEnd; TYPE_6__* pLastSelEndPara; TYPE_6__* pLastSelStartPara; TYPE_4__* pBuffer; } ;
struct TYPE_21__ {TYPE_3__* pLast; int pFirst; } ;
struct TYPE_18__ {TYPE_6__* prev_para; } ;
struct TYPE_19__ {TYPE_1__ para; } ;
struct TYPE_20__ {TYPE_2__ member; } ;
typedef TYPE_5__ ME_TextEditor ;
typedef TYPE_6__ ME_DisplayItem ;


 TYPE_6__* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_5__*,int*,int*) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__**,TYPE_6__**) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_6__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_0 ;

void
FUNC_7(ME_TextEditor *VAR_1)
{
  ME_DisplayItem *VAR_2, *VAR_3;
  ME_DisplayItem *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
  int VAR_6, VAR_7;
  int VAR_8 = FUNC_3(VAR_1);

  FUNC_1(VAR_1, &VAR_6, &VAR_7);


  if (VAR_6 == VAR_7 && VAR_1->nLastSelStart == VAR_1->nLastSelEnd)
    return;
  FUNC_5(VAR_1);
  FUNC_2(VAR_1, &VAR_2, &VAR_3);
  FUNC_6(VAR_2->type == VAR_0);
  FUNC_6(VAR_3->type == VAR_0);


  if (VAR_1->nLastSelStart > VAR_8 || VAR_1->nLastSelEnd > VAR_8) {
    VAR_4 = FUNC_0(VAR_1->pBuffer->pFirst, VAR_0);
    VAR_5 = VAR_1->pBuffer->pLast->member.para.prev_para;
  } else {

    if (VAR_6 < VAR_1->nLastSelStart) {
      VAR_4 = VAR_2;
      VAR_5 = VAR_1->pLastSelStartPara;
    } else if (VAR_6 > VAR_1->nLastSelStart) {
      VAR_4 = VAR_1->pLastSelStartPara;
      VAR_5 = VAR_2;
    }


    if (VAR_7 < VAR_1->nLastSelEnd) {
      if (!VAR_4) VAR_4 = VAR_3;
      VAR_5 = VAR_1->pLastSelEndPara;
    } else if (VAR_7 > VAR_1->nLastSelEnd) {
      if (!VAR_4) VAR_4 = VAR_1->pLastSelEndPara;
      VAR_5 = VAR_3;
    }
  }

  if (VAR_4)
    FUNC_4(VAR_1, VAR_4, VAR_5);

  FUNC_1(VAR_1, &VAR_1->nLastSelStart, &VAR_1->nLastSelEnd);
  FUNC_2(VAR_1, &VAR_1->pLastSelStartPara, &VAR_1->pLastSelEndPara);
  FUNC_6(VAR_1->pLastSelStartPara->type == VAR_0);
  FUNC_6(VAR_1->pLastSelEndPara->type == VAR_0);
}
