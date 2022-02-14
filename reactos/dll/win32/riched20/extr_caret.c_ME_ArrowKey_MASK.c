
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int texthost; int * pCursors; void* bCaretAtEnd; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int ME_Cursor ;
typedef void* BOOL ;


 void* VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 void* FUNC_10 (TYPE_1__*,int *,int,void*) ;
 int FUNC_11 (TYPE_1__*,int *,int,void*) ;
 void* FUNC_12 (TYPE_1__*,int *,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
BOOL
FUNC_16(ME_TextEditor *VAR_1, int VAR_2, BOOL VAR_3, BOOL VAR_4)
{
  int VAR_5 = 0;
  ME_Cursor *VAR_6 = &VAR_1->pCursors[VAR_5];
  ME_Cursor VAR_7 = *VAR_6;
  BOOL VAR_8 = VAR_0;

  FUNC_7(VAR_1);
  switch(VAR_2) {
    case 132:
      VAR_1->bCaretAtEnd = VAR_0;
      if (VAR_4)
        VAR_8 = FUNC_12(VAR_1, &VAR_7, -1);
      else
        VAR_8 = FUNC_10(VAR_1, &VAR_7, -1, VAR_3);
      break;
    case 129:
      VAR_1->bCaretAtEnd = VAR_0;
      if (VAR_4)
        VAR_8 = FUNC_12(VAR_1, &VAR_7, +1);
      else
        VAR_8 = FUNC_10(VAR_1, &VAR_7, +1, VAR_3);
      break;
    case 128:
      FUNC_11(VAR_1, &VAR_7, -1, VAR_3);
      break;
    case 135:
      FUNC_11(VAR_1, &VAR_7, +1, VAR_3);
      break;
    case 130:
      FUNC_6(VAR_1, &VAR_7);
      break;
    case 131:
      FUNC_5(VAR_1, &VAR_7);
      break;
    case 133: {
      if (VAR_4)
        FUNC_2(VAR_1, &VAR_7);
      else
        FUNC_4(VAR_1, &VAR_7);
      VAR_1->bCaretAtEnd = VAR_0;
      break;
    }
    case 134:
      if (VAR_4)
        FUNC_1(VAR_1, &VAR_7);
      else
        FUNC_3(VAR_1, &VAR_7);
      break;
  }

  if (!VAR_3)
    VAR_1->pCursors[1] = VAR_7;
  *VAR_6 = VAR_7;

  FUNC_9(VAR_1);
  FUNC_13(VAR_1);
  FUNC_0(VAR_1->texthost, VAR_0);
  FUNC_8(VAR_1, &VAR_7);
  FUNC_15(VAR_1);
  FUNC_14(VAR_1);
  return VAR_8;
}
