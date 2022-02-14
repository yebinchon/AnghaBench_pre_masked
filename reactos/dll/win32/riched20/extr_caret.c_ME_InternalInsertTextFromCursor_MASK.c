
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_9__ {TYPE_1__* pRun; } ;
struct TYPE_8__ {int bCaretAtEnd; TYPE_3__* pCursors; } ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_2__ ME_TextEditor ;
typedef int ME_Style ;
typedef int ME_DisplayItem ;
typedef TYPE_3__ ME_Cursor ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,TYPE_3__*,int *,int const*,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static ME_DisplayItem *
FUNC_2(ME_TextEditor *VAR_2, int VAR_3,
                                const WCHAR *VAR_4, int VAR_5, ME_Style *VAR_6,
                                int VAR_7)
{
  ME_Cursor *VAR_8 = &VAR_2->pCursors[VAR_3];

  VAR_2->bCaretAtEnd = VAR_0;

  FUNC_1(VAR_8->pRun->type == VAR_1);

  return FUNC_0(VAR_2, VAR_8, VAR_6, VAR_4, VAR_5, VAR_7);
}
