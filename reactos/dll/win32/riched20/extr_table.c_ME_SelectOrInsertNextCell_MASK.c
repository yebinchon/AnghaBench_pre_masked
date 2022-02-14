
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_10__ ;


struct TYPE_38__ {TYPE_6__* pCursors; int bEmulateVersion10; } ;
struct TYPE_37__ {int nFlags; } ;
struct TYPE_32__ {int nFlags; TYPE_10__* prev_para; TYPE_10__* next_para; TYPE_10__* pCell; } ;
struct TYPE_34__ {TYPE_4__* next_cell; } ;
struct TYPE_36__ {TYPE_3__ para; TYPE_8__ run; TYPE_5__ cell; } ;
struct TYPE_35__ {scalar_t__ nOffset; TYPE_10__* pPara; TYPE_10__* pRun; } ;
struct TYPE_30__ {scalar_t__ next_cell; } ;
struct TYPE_31__ {TYPE_1__ cell; } ;
struct TYPE_33__ {TYPE_2__ member; } ;
struct TYPE_29__ {scalar_t__ type; TYPE_7__ member; } ;
typedef TYPE_9__ ME_TextEditor ;
typedef TYPE_10__ ME_DisplayItem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_10__* FUNC_0 (TYPE_9__*,TYPE_10__*) ;
 TYPE_10__* FUNC_1 (TYPE_10__*,scalar_t__) ;
 TYPE_10__* FUNC_2 (TYPE_10__*,scalar_t__) ;
 void* FUNC_3 (TYPE_10__*) ;
 TYPE_10__* FUNC_4 (TYPE_10__*) ;
 TYPE_10__* FUNC_5 (TYPE_10__*) ;
 TYPE_10__* FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_10__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_9(ME_TextEditor *VAR_8,
                                      ME_DisplayItem *VAR_9)
{
  ME_DisplayItem *VAR_10 = FUNC_3(VAR_9);
  int VAR_11;

  FUNC_8(VAR_9 && VAR_9->type == VAR_6);
  FUNC_8(FUNC_6(VAR_9));
  if (!VAR_8->bEmulateVersion10) {
    ME_DisplayItem *VAR_12;

    if (VAR_10->member.para.nFlags & VAR_1) {
      VAR_12 = VAR_10->member.para.next_para->member.para.pCell;
    } else if (VAR_10->member.para.nFlags & VAR_0) {
      VAR_12 = VAR_10->member.para.prev_para->member.para.pCell;
    } else {
      VAR_12 = VAR_10->member.para.pCell;
    }
    FUNC_8(VAR_12);

    if (VAR_12->member.cell.next_cell &&
        VAR_12->member.cell.next_cell->member.cell.next_cell)
    {
      VAR_12 = VAR_12->member.cell.next_cell;
    } else {
      VAR_10 = FUNC_4(FUNC_2(VAR_12, VAR_4));
      VAR_10 = VAR_10->member.para.next_para;
      FUNC_8(VAR_10);
      if (VAR_10->member.para.nFlags & VAR_1) {
        VAR_12 = VAR_10->member.para.next_para->member.para.pCell;
      } else {

        VAR_10 = VAR_10->member.para.prev_para;
        VAR_10 = FUNC_0(VAR_8, FUNC_5(VAR_10));

        VAR_10 = VAR_10->member.para.next_para;
        VAR_8->pCursors[0].pPara = VAR_10;
        VAR_8->pCursors[0].pRun = FUNC_2(VAR_10, VAR_6);
        VAR_8->pCursors[0].nOffset = 0;
        VAR_8->pCursors[1] = VAR_8->pCursors[0];
        FUNC_7(VAR_8);
        return;
      }
    }

    VAR_8->pCursors[1].pRun = FUNC_2(VAR_12, VAR_6);
    VAR_8->pCursors[1].pPara = FUNC_3(VAR_8->pCursors[1].pRun);
    VAR_8->pCursors[1].nOffset = 0;
    FUNC_8(VAR_8->pCursors[0].pRun);
    VAR_12 = VAR_12->member.cell.next_cell;
    VAR_8->pCursors[0].pRun = FUNC_1(VAR_12, VAR_6);
    VAR_8->pCursors[0].pPara = FUNC_3(VAR_8->pCursors[0].pRun);
    VAR_8->pCursors[0].nOffset = 0;
    FUNC_8(VAR_8->pCursors[1].pRun);
  } else {
    if (VAR_9->member.run.nFlags & VAR_2 &&
        FUNC_6(FUNC_2(VAR_9, VAR_5)))
    {
      VAR_9 = FUNC_2(VAR_9, VAR_6);
      FUNC_8(VAR_9);
    }
    for (VAR_11 = 0; VAR_11 < 2; VAR_11++)
    {
      while (!(VAR_9->member.run.nFlags & VAR_3))
      {
        VAR_9 = FUNC_2(VAR_9, VAR_7);
        if (VAR_9->type != VAR_6)
        {
          VAR_10 = VAR_9;
          if (FUNC_6(VAR_10))
          {
            VAR_9 = FUNC_2(VAR_10, VAR_6);
            FUNC_8(VAR_9);
            VAR_8->pCursors[0].pPara = VAR_10;
            VAR_8->pCursors[0].pRun = VAR_9;
            VAR_8->pCursors[0].nOffset = 0;
            VAR_11 = 1;
          } else {

            VAR_10 = FUNC_0(VAR_8, VAR_10->member.para.prev_para);

            VAR_8->pCursors[0].pPara = VAR_10;
            VAR_8->pCursors[0].pRun = FUNC_2(VAR_10, VAR_6);
            VAR_8->pCursors[0].nOffset = 0;
            VAR_8->pCursors[1] = VAR_8->pCursors[0];
            FUNC_7(VAR_8);
            return;
          }
        }
      }
      if (VAR_11 == 0)
        VAR_9 = FUNC_2(VAR_9, VAR_6);
      VAR_8->pCursors[VAR_11].pRun = VAR_9;
      VAR_8->pCursors[VAR_11].pPara = FUNC_3(VAR_9);
      VAR_8->pCursors[VAR_11].nOffset = 0;
    }
  }
}
