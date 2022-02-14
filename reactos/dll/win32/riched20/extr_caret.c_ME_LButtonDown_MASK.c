
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int left; } ;
struct TYPE_14__ {scalar_t__ nPos; } ;
struct TYPE_13__ {scalar_t__ nPos; } ;
struct TYPE_16__ {int nUDArrowX; scalar_t__ nSelectionType; int texthost; int * pCursors; TYPE_3__ rcFormat; int bCaretAtEnd; TYPE_2__ vert_si; TYPE_1__ horz_si; } ;
typedef TYPE_4__ ME_TextEditor ;
typedef int ME_Cursor ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int,int,int *,int *,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void FUNC_9(ME_TextEditor *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
  ME_Cursor VAR_11;
  BOOL VAR_12 = VAR_0, VAR_13;

  VAR_7->nUDArrowX = -1;

  VAR_8 += VAR_7->horz_si.nPos;
  VAR_9 += VAR_7->vert_si.nPos;

  VAR_11 = VAR_7->pCursors[0];
  VAR_12 = FUNC_5(VAR_7);
  VAR_13 = FUNC_0(VAR_1) < 0;

  FUNC_3(VAR_7, VAR_8, VAR_9, &VAR_7->pCursors[0], &VAR_7->bCaretAtEnd, VAR_0);

  if (VAR_8 >= VAR_7->rcFormat.left || VAR_13)
  {
    if (VAR_10 > 1)
    {
      VAR_7->pCursors[1] = VAR_7->pCursors[0];
      if (VAR_13) {
          if (VAR_8 >= VAR_7->rcFormat.left)
              FUNC_6(VAR_7, VAR_6);
          else
              FUNC_6(VAR_7, VAR_4);
      } else if (VAR_10 % 2 == 0) {
          FUNC_6(VAR_7, VAR_6);
      } else {
          FUNC_6(VAR_7, VAR_4);
      }
    }
    else if (!VAR_13)
    {
      VAR_7->nSelectionType = VAR_5;
      VAR_7->pCursors[1] = VAR_7->pCursors[0];
    }
    else if (!VAR_12)
    {
      VAR_7->nSelectionType = VAR_5;
      VAR_7->pCursors[1] = VAR_11;
    }
    else if (VAR_7->nSelectionType != VAR_5)
    {
      FUNC_2(VAR_7);
    }
  }
  else
  {
    if (VAR_10 < 2) {
        FUNC_6(VAR_7, VAR_3);
    } else if (VAR_10 % 2 == 0 || VAR_13) {
        FUNC_6(VAR_7, VAR_4);
    } else {
        FUNC_6(VAR_7, VAR_2);
    }
  }
  FUNC_4(VAR_7);
  FUNC_1(VAR_7->texthost, VAR_0);
  FUNC_8(VAR_7);
  FUNC_7(VAR_7);
}
