
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int nOffset; TYPE_2__* pRun; void* pPara; } ;
struct TYPE_15__ {int type; } ;
struct TYPE_14__ {int nSelectionType; TYPE_5__* pCursors; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int ME_SelectionType ;
typedef TYPE_2__ ME_DisplayItem ;
typedef int ME_DIType ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_2__*,int ) ;
 void* FUNC_1 (TYPE_2__*,int ) ;
 void* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_5__*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






__attribute__((used)) static void
FUNC_7(ME_TextEditor *VAR_7, ME_SelectionType VAR_8)
{






  VAR_7->nSelectionType = VAR_8;
  switch(VAR_8)
  {
    case 129:
      break;
    case 128:
      FUNC_3(VAR_7, &VAR_7->pCursors[0], +1);
      VAR_7->pCursors[1] = VAR_7->pCursors[0];
      FUNC_3(VAR_7, &VAR_7->pCursors[1], -1);
      break;
    case 131:
    case 130:
    {
      ME_DisplayItem *VAR_9;
      ME_DIType VAR_10, VAR_11;
      if (VAR_8 == 130) {
          VAR_11 = VAR_1;
          VAR_10 = VAR_2;
      } else {
          VAR_11 = VAR_4;
          VAR_10 = VAR_5;
      }
      VAR_9 = FUNC_1(VAR_7->pCursors[0].pRun, VAR_10);
      FUNC_6(VAR_9);
      if (VAR_9->type == VAR_6)
          VAR_7->pCursors[0].pRun = FUNC_0(VAR_9, VAR_3);
      else
          VAR_7->pCursors[0].pRun = FUNC_1(VAR_9, VAR_3);
      VAR_7->pCursors[0].pPara = FUNC_2(VAR_7->pCursors[0].pRun);
      VAR_7->pCursors[0].nOffset = 0;

      VAR_9 = FUNC_0(VAR_9, VAR_11);
      VAR_7->pCursors[1].pRun = FUNC_1(VAR_9, VAR_3);
      VAR_7->pCursors[1].pPara = FUNC_2(VAR_7->pCursors[1].pRun);
      VAR_7->pCursors[1].nOffset = 0;
      break;
    }
    case 132:

      VAR_7->nSelectionType = 132;
      FUNC_5(VAR_7, &VAR_7->pCursors[1]);
      FUNC_4(VAR_7, &VAR_7->pCursors[0], VAR_0);
      break;
    default: FUNC_6(0);
  }

  VAR_7->pCursors[2] = VAR_7->pCursors[0];
  VAR_7->pCursors[3] = VAR_7->pCursors[1];
}
