
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pPara; scalar_t__ nOffset; int * pRun; } ;
struct TYPE_5__ {scalar_t__ bCaretAtEnd; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int ME_DisplayItem ;
typedef TYPE_2__ ME_Cursor ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(ME_TextEditor *VAR_3, ME_Cursor *VAR_4)
{
  ME_DisplayItem *VAR_5 = FUNC_0(VAR_4->pRun, VAR_2);
  if (VAR_5) {
    ME_DisplayItem *VAR_6;
    if (VAR_3->bCaretAtEnd && !VAR_4->nOffset) {
      VAR_5 = FUNC_0(VAR_5, VAR_2);
      if (!VAR_5)
        return;
    }
    VAR_6 = FUNC_1(VAR_5, VAR_1);
    if (VAR_6) {
      VAR_4->pRun = VAR_6;
      FUNC_3(VAR_4->pPara == FUNC_2(VAR_6));
      VAR_4->nOffset = 0;
    }
  }
  VAR_3->bCaretAtEnd = VAR_0;
}
