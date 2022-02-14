
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ nPos; } ;
struct TYPE_11__ {scalar_t__ nPos; } ;
struct TYPE_13__ {scalar_t__ nSelectionType; int texthost; int * pCursors; int bCaretAtEnd; TYPE_2__ vert_si; TYPE_1__ horz_si; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef int ME_Cursor ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,int,int *,int *,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int *,int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_8(ME_TextEditor *VAR_4, int VAR_5, int VAR_6)
{
  ME_Cursor VAR_7;

  if (VAR_4->nSelectionType == VAR_2)
      return;
  VAR_5 += VAR_4->horz_si.nPos;
  VAR_6 += VAR_4->vert_si.nPos;

  VAR_7 = VAR_4->pCursors[0];

  FUNC_3(VAR_4, VAR_5, VAR_6, &VAR_7, &VAR_4->bCaretAtEnd, VAR_1);

  FUNC_4(VAR_4);
  VAR_4->pCursors[0] = VAR_7;
  FUNC_2(VAR_4);

  if (VAR_4->nSelectionType != VAR_3 &&
      FUNC_7(&VAR_4->pCursors[1], &VAR_4->pCursors[3], sizeof(ME_Cursor)))
  {


      FUNC_1(VAR_4, &VAR_4->pCursors[1]);
  } else {
      FUNC_1(VAR_4, &VAR_4->pCursors[0]);
  }

  FUNC_4(VAR_4);
  FUNC_0(VAR_4->texthost, VAR_0);
  FUNC_6(VAR_4);
  FUNC_5(VAR_4);
}
