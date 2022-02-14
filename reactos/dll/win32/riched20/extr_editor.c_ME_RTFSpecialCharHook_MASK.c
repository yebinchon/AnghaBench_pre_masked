
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;


typedef char WCHAR ;
struct TYPE_36__ {int dwMask; int wEffects; int cTabCount; int dxStartIndent; int dxOffset; } ;
struct TYPE_31__ {int nFlags; TYPE_7__ fmt; int border; TYPE_8__* pCell; TYPE_8__* next_para; } ;
struct TYPE_30__ {int nRightBoundary; TYPE_8__* next_cell; int border; int prev_cell; } ;
struct TYPE_32__ {TYPE_2__ para; TYPE_1__ cell; } ;
struct TYPE_37__ {TYPE_3__ member; } ;
struct TYPE_35__ {int rightBoundary; int border; } ;
struct TYPE_34__ {int numCellsInserted; int numCellsDefined; int border; int leftEdge; int gapH; struct TYPE_34__* parent; TYPE_8__* tableRowStart; TYPE_6__* cells; } ;
struct TYPE_33__ {int rtfMinor; int nestingLevel; char rtfMajor; int rtfClass; TYPE_12__* editor; int style; TYPE_5__* tableDef; int canInheritInTbl; } ;
struct TYPE_29__ {TYPE_8__* pPara; int nOffset; TYPE_8__* pRun; } ;
struct TYPE_28__ {TYPE_13__* pCursors; int bEmulateVersion10; } ;
typedef TYPE_4__ RTF_Info ;
typedef TYPE_5__ RTFTable ;
typedef TYPE_6__ RTFCell ;
typedef TYPE_7__ PARAFORMAT2 ;
typedef TYPE_8__ ME_DisplayItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int *,int ) ;
 TYPE_8__* FUNC_1 (TYPE_8__*,int ) ;
 int FUNC_2 (TYPE_13__*) ;
 TYPE_8__* FUNC_3 (TYPE_8__*) ;
 TYPE_8__* FUNC_4 (TYPE_12__*) ;
 TYPE_8__* FUNC_5 (TYPE_12__*) ;
 TYPE_8__* FUNC_6 (TYPE_12__*,TYPE_8__*) ;
 int FUNC_7 (TYPE_12__*,int ,char*,int,int ) ;
 int FUNC_8 (TYPE_12__*,TYPE_13__*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int,int ) ;






 int VAR_7 ;

void FUNC_14(RTF_Info *VAR_8)
{
  RTFTable *VAR_9 = VAR_8->tableDef;
  switch (VAR_8->rtfMinor)
  {
    case 132:
      if (VAR_8->editor->bEmulateVersion10)
        break;

    case 133:
      if (!VAR_9)
        break;
      FUNC_9(VAR_8);
      if (!VAR_8->editor->bEmulateVersion10) {
        if (VAR_9->tableRowStart)
        {
          if (!VAR_8->nestingLevel &&
              VAR_9->tableRowStart->member.para.nFlags & VAR_1)
          {
            ME_DisplayItem *VAR_10 = VAR_9->tableRowStart;
            VAR_10 = VAR_10->member.para.next_para;
            VAR_10 = FUNC_6(VAR_8->editor, VAR_10);
            VAR_9->tableRowStart = VAR_10;
            VAR_8->nestingLevel = 1;
          }
          FUNC_4(VAR_8->editor);
        }
      } else {
        ME_DisplayItem *VAR_11 = VAR_8->editor->pCursors[0].pPara;
        PARAFORMAT2 *VAR_12 = &VAR_11->member.para.fmt;
        if (VAR_12->dwMask & VAR_3 && VAR_12->wEffects & VAR_2 &&
            VAR_9->numCellsInserted < VAR_9->numCellsDefined)
        {
          WCHAR VAR_13 = '\t';
          FUNC_7(VAR_8->editor, 0, &VAR_13, 1, VAR_8->style);
          VAR_9->numCellsInserted++;
        }
      }
      break;
    case 131:
      if (VAR_8->editor->bEmulateVersion10)
        break;

    case 129:
    {
      ME_DisplayItem *VAR_14, *VAR_15, *VAR_16;
      int VAR_17;

      if (!VAR_9)
        break;
      FUNC_9(VAR_8);
      if (!VAR_8->editor->bEmulateVersion10) {
        if (!VAR_9->tableRowStart)
          break;
        if (!VAR_8->nestingLevel &&
            VAR_9->tableRowStart->member.para.nFlags & VAR_1)
        {
          VAR_14 = VAR_9->tableRowStart;
          VAR_14 = VAR_14->member.para.next_para;
          VAR_14 = FUNC_6(VAR_8->editor, VAR_14);
          VAR_9->tableRowStart = VAR_14;
          VAR_8->nestingLevel++;
        }
        VAR_14 = VAR_9->tableRowStart;
        VAR_15 = FUNC_1(VAR_14, VAR_5);
        FUNC_11(VAR_15 && !VAR_15->member.cell.prev_cell);
        if (VAR_9->numCellsDefined < 1)
        {


          const int VAR_18 = 2000;
          int VAR_19 = VAR_18;
          VAR_15->member.cell.nRightBoundary = VAR_19;
          while (VAR_15->member.cell.next_cell) {
            VAR_15 = VAR_15->member.cell.next_cell;
            VAR_19 += VAR_18;
            VAR_15->member.cell.nRightBoundary = VAR_19;
          }
          VAR_14 = FUNC_4(VAR_8->editor);
          VAR_15 = VAR_14->member.para.pCell;
          VAR_15->member.cell.nRightBoundary = VAR_19;
        } else {
          for (VAR_17 = 0; VAR_17 < VAR_9->numCellsDefined; VAR_17++)
          {
            RTFCell *VAR_20 = &VAR_9->cells[VAR_17];
            VAR_15->member.cell.nRightBoundary = VAR_20->rightBoundary;
            FUNC_0(VAR_8, &VAR_15->member.cell.border,
                                     VAR_20->border);
            VAR_15 = VAR_15->member.cell.next_cell;
            if (!VAR_15)
            {
              VAR_14 = FUNC_4(VAR_8->editor);
              VAR_15 = VAR_14->member.para.pCell;
            }
          }

          VAR_15->member.cell.nRightBoundary = VAR_9->cells[VAR_17-1].rightBoundary;
        }

        VAR_16 = FUNC_1(VAR_15, VAR_6);
        if (VAR_8->editor->pCursors[0].pRun != VAR_16 ||
            VAR_8->editor->pCursors[0].nOffset)
        {
          int VAR_21, VAR_22;

          VAR_8->editor->pCursors[1].pRun = VAR_16;
          VAR_8->editor->pCursors[1].pPara = FUNC_3(VAR_16);
          VAR_8->editor->pCursors[1].nOffset = 0;
          VAR_21 = FUNC_2(&VAR_8->editor->pCursors[1]);
          VAR_22 = FUNC_2(&VAR_8->editor->pCursors[0]) - VAR_21;
          FUNC_8(VAR_8->editor, &VAR_8->editor->pCursors[1],
                                VAR_22, VAR_4);
        }

        VAR_14 = FUNC_5(VAR_8->editor);
        VAR_14->member.para.fmt.dxOffset = FUNC_10(VAR_8->tableDef->gapH);
        VAR_14->member.para.fmt.dxStartIndent = VAR_8->tableDef->leftEdge;
        FUNC_0(VAR_8, &VAR_14->member.para.border,
                                 VAR_9->border);
        VAR_8->nestingLevel--;
        if (!VAR_8->nestingLevel)
        {
          if (VAR_8->canInheritInTbl) {
            VAR_9->tableRowStart = VAR_14;
          } else {
            while (VAR_8->tableDef) {
              VAR_9 = VAR_8->tableDef;
              VAR_8->tableDef = VAR_9->parent;
              FUNC_12(VAR_9);
            }
          }
        } else {
          VAR_8->tableDef = VAR_9->parent;
          FUNC_12(VAR_9);
        }
      } else {
        WCHAR VAR_23 = '\r';
        ME_DisplayItem *VAR_24 = VAR_8->editor->pCursors[0].pPara;
        PARAFORMAT2 *VAR_25 = &VAR_24->member.para.fmt;
        VAR_25->dxOffset = VAR_8->tableDef->gapH;
        VAR_25->dxStartIndent = VAR_8->tableDef->leftEdge;

        FUNC_0(VAR_8, &VAR_24->member.para.border,
                                 VAR_9->border);
        while (VAR_9->numCellsInserted < VAR_9->numCellsDefined)
        {
          WCHAR VAR_26 = '\t';
          FUNC_7(VAR_8->editor, 0, &VAR_26, 1, VAR_8->style);
          VAR_9->numCellsInserted++;
        }
        VAR_25->cTabCount = FUNC_13(VAR_9->numCellsDefined, VAR_0);
        if (!VAR_9->numCellsDefined)
          VAR_25->wEffects &= ~VAR_2;
        FUNC_7(VAR_8->editor, 0, &VAR_23, 1, VAR_8->style);
        VAR_9->numCellsInserted = 0;
      }
      break;
    }
    case 128:
    case 130:
      if (VAR_8->editor->bEmulateVersion10) {
        ME_DisplayItem *VAR_27;
        PARAFORMAT2 *VAR_28;
        FUNC_9(VAR_8);
        VAR_27 = VAR_8->editor->pCursors[0].pPara;
        VAR_28 = &VAR_27->member.para.fmt;
        if (VAR_28->dwMask & VAR_3 && VAR_28->wEffects & VAR_2)
        {

          VAR_8->rtfClass = VAR_7;
          VAR_8->rtfMajor = ' ';
        }
        else if (VAR_8->rtfMinor == 130 && VAR_9)
          VAR_9->numCellsInserted = 0;
      }
      break;
  }
}
