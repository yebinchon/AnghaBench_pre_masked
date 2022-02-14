
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int nFlags; int nCharOfs; } ;
struct TYPE_9__ {int nFlags; int nCharOfs; } ;
struct TYPE_8__ {int prev_cell; int next_cell; int nNestingLevel; } ;
struct TYPE_10__ {TYPE_2__ para; TYPE_6__ run; TYPE_1__ cell; } ;
struct TYPE_12__ {int type; struct TYPE_12__* next; TYPE_3__ member; } ;
struct TYPE_11__ {TYPE_5__* pFirst; } ;
typedef TYPE_4__ ME_TextBuffer ;
typedef TYPE_5__ ME_DisplayItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_6__*) ;







void FUNC_2(ME_TextBuffer *VAR_2)
{

  ME_DisplayItem *VAR_3 = VAR_2->pFirst;
  FUNC_0("DOCUMENT DUMP START\n");
  while(VAR_3) {
    switch(VAR_3->type)
    {
      case 128:
        FUNC_0("Start\n");
        break;
      case 133:
        FUNC_0("Cell(level=%d%s)\n", VAR_3->member.cell.nNestingLevel,
              !VAR_3->member.cell.next_cell ? ", END" :
                (!VAR_3->member.cell.prev_cell ? ", START" :""));
        break;
      case 132:
        FUNC_0("Paragraph(ofs=%d)\n", VAR_3->member.para.nCharOfs);
        if (VAR_3->member.para.nFlags & VAR_1)
          FUNC_0(" - (Table Row Start)\n");
        if (VAR_3->member.para.nFlags & VAR_0)
          FUNC_0(" - (Table Row End)\n");
        break;
      case 130:
        FUNC_0(" - StartRow\n");
        break;
      case 131:
        FUNC_0(" - Run(%s, %d, flags=%x)\n", FUNC_1( &VAR_3->member.run ),
          VAR_3->member.run.nCharOfs, VAR_3->member.run.nFlags);
        break;
      case 129:
        FUNC_0("End(ofs=%d)\n", VAR_3->member.para.nCharOfs);
        break;
      default:
        break;
    }
    VAR_3 = VAR_3->next;
  }
  FUNC_0("DOCUMENT DUMP END\n");
}
