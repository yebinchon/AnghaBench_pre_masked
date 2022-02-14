
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


struct TYPE_19__ {scalar_t__ nOffset; TYPE_5__* pRun; } ;
struct TYPE_17__ {int * style; } ;
struct TYPE_15__ {TYPE_4__ run; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_2__ member; } ;
struct TYPE_16__ {TYPE_6__* pCursors; TYPE_1__* pBuffer; } ;
struct TYPE_14__ {int * pCharStyle; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef int ME_Style ;
typedef TYPE_4__ ME_Run ;
typedef TYPE_5__ ME_DisplayItem ;
typedef TYPE_6__ ME_Cursor ;


 int FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_6__**,TYPE_6__**) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

ME_Style *FUNC_4(ME_TextEditor *VAR_2, int VAR_3)
{
  if (FUNC_3(VAR_2))
  {
    ME_Cursor *VAR_4, *VAR_5;

    FUNC_2(VAR_2, &VAR_4, &VAR_5);
    FUNC_0(VAR_4->pRun->member.run.style);
    return VAR_4->pRun->member.run.style;
  }
  if (VAR_2->pBuffer->pCharStyle) {
    FUNC_0(VAR_2->pBuffer->pCharStyle);
    return VAR_2->pBuffer->pCharStyle;
  }
  else
  {
    ME_Cursor *VAR_6 = &VAR_2->pCursors[VAR_3];
    ME_DisplayItem *VAR_7 = VAR_6->pRun;
    ME_DisplayItem *VAR_8 = ((void*)0);
    if (VAR_6->nOffset) {
      ME_Run *VAR_9 = &VAR_7->member.run;
      FUNC_0(VAR_9->style);
      return VAR_9->style;
    }
    VAR_8 = FUNC_1(VAR_7, VAR_1);
    if (VAR_8->type == VAR_0)
    {
      FUNC_0(VAR_8->member.run.style);
      return VAR_8->member.run.style;
    }
    else
    {
      FUNC_0(VAR_7->member.run.style);
      return VAR_7->member.run.style;
    }
  }
}
