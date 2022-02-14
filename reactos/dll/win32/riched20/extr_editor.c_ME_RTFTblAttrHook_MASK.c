
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_20__ {TYPE_2__* pCursors; int bEmulateVersion10; } ;
struct TYPE_18__ {int* rgxTabs; } ;
struct TYPE_15__ {TYPE_6__ fmt; } ;
struct TYPE_16__ {TYPE_3__ para; } ;
struct TYPE_19__ {TYPE_4__ member; } ;
struct TYPE_17__ {int rtfMinor; int rtfParam; TYPE_11__* tableDef; void* borderType; TYPE_9__* editor; } ;
struct TYPE_14__ {TYPE_7__* pPara; } ;
struct TYPE_13__ {int rightBoundary; } ;
struct TYPE_12__ {int numCellsDefined; int gapH; int leftEdge; TYPE_1__* cells; } ;
typedef TYPE_5__ RTF_Info ;
typedef TYPE_6__ PARAFORMAT2 ;
typedef TYPE_7__ ME_DisplayItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_9__*,TYPE_11__*) ;
 void* FUNC_1 (TYPE_9__*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
void FUNC_2(RTF_Info *VAR_10)
{
  switch (VAR_10->rtfMinor)
  {
    case 130:
    {
      if (!VAR_10->editor->bEmulateVersion10)
        VAR_10->borderType = 0;
      else
        VAR_10->borderType = VAR_9;
      if (!VAR_10->tableDef) {
        VAR_10->tableDef = FUNC_1(VAR_10->editor);
      } else {
        FUNC_0(VAR_10->editor, VAR_10->tableDef);
      }
      break;
    }
    case 135:
    {
      int VAR_11;
      if (!VAR_10->tableDef)
      {
        VAR_10->tableDef = FUNC_1(VAR_10->editor);
      }
      VAR_11 = VAR_10->tableDef->numCellsDefined;
      if (VAR_11 >= VAR_0)
        break;
      VAR_10->tableDef->cells[VAR_11].rightBoundary = VAR_10->rtfParam;
      if (VAR_11 < VAR_1) {


        ME_DisplayItem *VAR_12 = VAR_10->editor->pCursors[0].pPara;
        PARAFORMAT2 *VAR_13 = &VAR_12->member.para.fmt;
        VAR_13->rgxTabs[VAR_11] &= ~0x00FFFFFF;
        VAR_13->rgxTabs[VAR_11] |= 0x00FFFFFF & VAR_10->rtfParam;
      }
      VAR_10->tableDef->numCellsDefined++;
      break;
    }
    case 131:
      VAR_10->borderType = VAR_9;
      break;
    case 133:
      VAR_10->borderType = VAR_7;
      break;
    case 134:
      VAR_10->borderType = VAR_6;
      break;
    case 132:
      VAR_10->borderType = VAR_8;
      break;
    case 136:
      VAR_10->borderType = VAR_5;
      break;
    case 138:
      VAR_10->borderType = VAR_3;
      break;
    case 139:
      VAR_10->borderType = VAR_2;
      break;
    case 137:
      VAR_10->borderType = VAR_4;
      break;
    case 129:
      if (VAR_10->tableDef)
        VAR_10->tableDef->gapH = VAR_10->rtfParam;
      break;
    case 128:
      if (VAR_10->tableDef)
        VAR_10->tableDef->leftEdge = VAR_10->rtfParam;
      break;
  }
}
