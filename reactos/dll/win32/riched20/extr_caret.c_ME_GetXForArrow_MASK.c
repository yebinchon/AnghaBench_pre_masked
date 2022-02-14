
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int x; } ;
struct TYPE_18__ {int nWidth; TYPE_1__ pt; } ;
struct TYPE_17__ {int nOffset; TYPE_4__* pRun; } ;
struct TYPE_14__ {TYPE_8__ run; } ;
struct TYPE_16__ {TYPE_2__ member; } ;
struct TYPE_15__ {int nUDArrowX; scalar_t__ bCaretAtEnd; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef TYPE_4__ ME_DisplayItem ;
typedef TYPE_5__ ME_Cursor ;


 TYPE_4__* FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_8__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(ME_TextEditor *VAR_2, ME_Cursor *VAR_3)
{
  ME_DisplayItem *VAR_4 = VAR_3->pRun;
  int VAR_5;

  if (VAR_2->nUDArrowX != -1)
    VAR_5 = VAR_2->nUDArrowX;
  else {
    if (VAR_2->bCaretAtEnd)
    {
      VAR_4 = FUNC_0(VAR_4, VAR_1);
      FUNC_2(VAR_4);
      VAR_5 = VAR_4->member.run.pt.x + VAR_4->member.run.nWidth;
    }
    else {
      VAR_5 = VAR_4->member.run.pt.x;
      VAR_5 += FUNC_1(VAR_2, &VAR_4->member.run, VAR_3->nOffset, VAR_0);
    }
    VAR_2->nUDArrowX = VAR_5;
  }
  return VAR_5;
}
