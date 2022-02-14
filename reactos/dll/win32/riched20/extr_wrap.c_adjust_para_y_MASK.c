
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_61__ TYPE_9__ ;
typedef struct TYPE_60__ TYPE_8__ ;
typedef struct TYPE_59__ TYPE_7__ ;
typedef struct TYPE_58__ TYPE_6__ ;
typedef struct TYPE_57__ TYPE_5__ ;
typedef struct TYPE_56__ TYPE_4__ ;
typedef struct TYPE_55__ TYPE_3__ ;
typedef struct TYPE_54__ TYPE_2__ ;
typedef struct TYPE_53__ TYPE_24__ ;
typedef struct TYPE_52__ TYPE_23__ ;
typedef struct TYPE_51__ TYPE_22__ ;
typedef struct TYPE_50__ TYPE_21__ ;
typedef struct TYPE_49__ TYPE_20__ ;
typedef struct TYPE_48__ TYPE_1__ ;
typedef struct TYPE_47__ TYPE_19__ ;
typedef struct TYPE_46__ TYPE_18__ ;
typedef struct TYPE_45__ TYPE_17__ ;
typedef struct TYPE_44__ TYPE_16__ ;
typedef struct TYPE_43__ TYPE_15__ ;
typedef struct TYPE_42__ TYPE_14__ ;
typedef struct TYPE_41__ TYPE_13__ ;
typedef struct TYPE_40__ TYPE_12__ ;
typedef struct TYPE_39__ TYPE_11__ ;
typedef struct TYPE_38__ TYPE_10__ ;


struct TYPE_60__ {int y; scalar_t__ x; } ;
struct TYPE_53__ {int nHeight; int yTextOffset; TYPE_8__ pt; TYPE_7__* next_cell; scalar_t__ nWidth; TYPE_4__* prev_cell; } ;
struct TYPE_61__ {TYPE_24__ cell; } ;
struct TYPE_41__ {int y; scalar_t__ x; } ;
struct TYPE_57__ {TYPE_13__ pt; } ;
struct TYPE_58__ {TYPE_5__ cell; } ;
struct TYPE_59__ {TYPE_6__ member; } ;
struct TYPE_54__ {int nHeight; } ;
struct TYPE_55__ {TYPE_2__ cell; } ;
struct TYPE_56__ {TYPE_3__ member; } ;
struct TYPE_52__ {TYPE_13__ pt; } ;
struct TYPE_48__ {scalar_t__ x; } ;
struct TYPE_40__ {int dxStartIndent; } ;
struct TYPE_45__ {int nFlags; int nHeight; TYPE_10__* pCell; TYPE_16__* next_para; TYPE_1__ pt; scalar_t__ nWidth; TYPE_12__ fmt; } ;
struct TYPE_46__ {int width; } ;
struct TYPE_39__ {int width; } ;
struct TYPE_47__ {TYPE_18__ bottom; TYPE_11__ top; } ;
struct TYPE_50__ {int yTextOffset; int nHeight; TYPE_22__* prev_cell; TYPE_13__ pt; TYPE_19__ border; scalar_t__ nWidth; TYPE_22__* next_cell; } ;
struct TYPE_49__ {TYPE_17__ para; TYPE_21__ cell; } ;
struct TYPE_51__ {TYPE_20__ member; } ;
struct TYPE_42__ {int nFlags; TYPE_10__* pCell; } ;
struct TYPE_43__ {TYPE_14__ para; } ;
struct TYPE_44__ {TYPE_15__ member; } ;
struct TYPE_38__ {TYPE_9__ member; } ;
typedef TYPE_22__ ME_DisplayItem ;
typedef TYPE_23__ ME_Context ;
typedef TYPE_24__ ME_Cell ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_22__* FUNC_0 (TYPE_22__*,int ) ;
 TYPE_22__* FUNC_1 (TYPE_22__*,int ) ;
 int FUNC_2 (TYPE_22__*,TYPE_22__**,TYPE_22__**) ;
 scalar_t__ FUNC_3 (TYPE_23__*,int) ;
 int FUNC_4 (TYPE_23__*,int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(ME_DisplayItem *VAR_4, ME_Context *VAR_5, ME_DisplayItem *VAR_6, ME_DisplayItem *VAR_7)
{
    if (VAR_4->member.para.nFlags & VAR_1)
    {
        ME_DisplayItem *VAR_8 = FUNC_1(VAR_4, VAR_2);
        ME_DisplayItem *VAR_9;
        int VAR_10 = 0;
        VAR_8->member.cell.pt = VAR_5->pt;

        while (VAR_8->member.cell.next_cell)
        {
            VAR_10 = FUNC_6(VAR_10, VAR_8->member.cell.border.top.width);
            VAR_8 = VAR_8->member.cell.next_cell;
        }
        VAR_9 = FUNC_1(VAR_8, VAR_3);
        FUNC_5(VAR_9->member.para.nFlags & VAR_0);
        if (VAR_10 > 0)
        {
            VAR_10 = FUNC_6(FUNC_4(VAR_5, VAR_10), 1);
            while (VAR_8)
            {
                VAR_8->member.cell.yTextOffset = VAR_10;
                VAR_8 = VAR_8->member.cell.prev_cell;
            }
            VAR_5->pt.y += VAR_10;
        }
        if (VAR_9->member.para.fmt.dxStartIndent > 0)
        {
            int VAR_11 = VAR_9->member.para.fmt.dxStartIndent;
            VAR_8 = FUNC_1(VAR_4, VAR_2);
            VAR_8->member.cell.pt.x += FUNC_3(VAR_5, VAR_11);
            VAR_5->pt.x = VAR_8->member.cell.pt.x;
        }
    }
    else if (VAR_4->member.para.nFlags & VAR_0)
    {

        ME_DisplayItem *VAR_12;
        int VAR_13, VAR_14, VAR_15 = 0;
        ME_DisplayItem *VAR_16 = FUNC_0(VAR_4, VAR_2);
        VAR_4->member.para.nWidth = VAR_16->member.cell.pt.x + VAR_16->member.cell.nWidth;
        if (!(VAR_4->member.para.next_para->member.para.nFlags & VAR_1))
        {

            VAR_16 = VAR_16->member.cell.prev_cell;
            while (VAR_16)
            {
                VAR_15 = FUNC_6(VAR_15, VAR_16->member.cell.border.bottom.width);
                VAR_16 = VAR_16->member.cell.prev_cell;
            }
            VAR_15 = FUNC_4(VAR_5, VAR_15);
            VAR_16 = FUNC_0(VAR_4, VAR_2);
        }
        VAR_13 = VAR_16->member.cell.nHeight;
        VAR_14 = VAR_16->member.cell.prev_cell->member.cell.nHeight + VAR_15;
        VAR_16->member.cell.nHeight = VAR_14;
        VAR_4->member.para.nHeight = VAR_14;
        VAR_16 = VAR_16->member.cell.prev_cell;
        VAR_16->member.cell.nHeight = VAR_14;
        while (VAR_16->member.cell.prev_cell)
        {
            VAR_16 = VAR_16->member.cell.prev_cell;
            VAR_16->member.cell.nHeight = VAR_14;
        }

        VAR_12 = FUNC_0(VAR_16, VAR_3);
        VAR_12->member.para.nHeight = VAR_14;
        VAR_5->pt.x = VAR_12->member.para.pt.x;
        VAR_5->pt.y = VAR_16->member.cell.pt.y + VAR_14;
        if (VAR_13 < VAR_14)
        {


            FUNC_2(VAR_4, &VAR_6, &VAR_7);
            VAR_16 = FUNC_0(VAR_4, VAR_2);
            while (VAR_16)
            {
                FUNC_2(FUNC_0(VAR_16, VAR_3), &VAR_6, &VAR_7);
                VAR_16 = VAR_16->member.cell.prev_cell;
            }
        }
    }
    else if (VAR_4->member.para.pCell &&
             VAR_4->member.para.pCell != VAR_4->member.para.next_para->member.para.pCell)
    {

        ME_Cell *VAR_17 = &VAR_4->member.para.pCell->member.cell;
        VAR_17->nHeight = VAR_5->pt.y + VAR_4->member.para.nHeight - VAR_17->pt.y;



        if (VAR_17->prev_cell)
            VAR_17->nHeight = FUNC_6(VAR_17->nHeight, VAR_17->prev_cell->member.cell.nHeight);

        VAR_5->pt.x = VAR_17->pt.x + VAR_17->nWidth;
        VAR_5->pt.y = VAR_17->pt.y;
        VAR_17->next_cell->member.cell.pt = VAR_5->pt;
        if (!(VAR_4->member.para.next_para->member.para.nFlags & VAR_0))
            VAR_5->pt.y += VAR_17->yTextOffset;
    }
    else
    {
        if (VAR_4->member.para.pCell)
        {

            VAR_5->pt.x = VAR_4->member.para.pCell->member.cell.pt.x;
        }
        else

            VAR_5->pt.x = 0;
        VAR_5->pt.y += VAR_4->member.para.nHeight;
    }
}
