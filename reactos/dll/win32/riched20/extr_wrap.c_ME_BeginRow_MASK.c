
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_22__ ;
typedef struct TYPE_36__ TYPE_20__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_19__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_17__ ;
typedef struct TYPE_31__ TYPE_16__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_45__ {int dxStartIndent; } ;
struct TYPE_42__ {scalar_t__ nRightBoundary; } ;
struct TYPE_43__ {TYPE_6__ cell; } ;
struct TYPE_44__ {TYPE_7__ member; } ;
struct TYPE_30__ {int dwMask; int wEffects; } ;
struct TYPE_40__ {int nFlags; TYPE_3__* pCell; TYPE_15__ fmt; } ;
struct TYPE_41__ {TYPE_4__ para; } ;
struct TYPE_33__ {int nRightBoundary; scalar_t__ nWidth; TYPE_8__* prev_cell; } ;
struct TYPE_38__ {TYPE_18__ cell; } ;
struct TYPE_39__ {TYPE_2__ member; } ;
struct TYPE_35__ {TYPE_18__ cell; } ;
struct TYPE_37__ {TYPE_1__ member; } ;
struct TYPE_25__ {TYPE_9__ fmt; } ;
struct TYPE_26__ {TYPE_10__ para; } ;
struct TYPE_36__ {TYPE_11__ member; } ;
struct TYPE_27__ {int x; } ;
struct TYPE_34__ {TYPE_13__* editor; TYPE_12__ pt; scalar_t__ nAvailWidth; } ;
struct TYPE_32__ {TYPE_5__ member; } ;
struct TYPE_29__ {int y; int x; } ;
struct TYPE_31__ {TYPE_14__ pt; TYPE_19__* context; scalar_t__ nRightMargin; scalar_t__ nFirstMargin; scalar_t__ nLeftMargin; scalar_t__ nRow; scalar_t__ nAvailWidth; void* bWordWrap; int * pLastSplittableRun; void* bOverflown; int * pRowStart; TYPE_17__* pPara; } ;
struct TYPE_28__ {scalar_t__ bEmulateVersion10; void* bWordWrap; } ;
typedef TYPE_15__ PARAFORMAT2 ;
typedef TYPE_16__ ME_WrapContext ;
typedef TYPE_17__ ME_DisplayItem ;
typedef TYPE_18__ ME_Cell ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_22__* FUNC_0 (TYPE_17__*,int ) ;
 TYPE_20__* FUNC_1 (TYPE_17__*) ;
 int FUNC_2 (TYPE_19__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(ME_WrapContext *VAR_7)
{
  PARAFORMAT2 *VAR_8;
  ME_DisplayItem *VAR_9 = VAR_7->pPara;

  VAR_8 = &VAR_9->member.para.fmt;
  VAR_7->pRowStart = ((void*)0);
  VAR_7->bOverflown = VAR_0;
  VAR_7->pLastSplittableRun = ((void*)0);
  VAR_7->bWordWrap = VAR_7->context->editor->bWordWrap;
  if (VAR_9->member.para.nFlags & (VAR_2|VAR_1)) {
    VAR_7->nAvailWidth = 0;
    VAR_7->bWordWrap = VAR_0;
    if (VAR_9->member.para.nFlags & VAR_1)
    {
      ME_Cell *VAR_10 = &FUNC_0(VAR_9, VAR_6)->member.cell;
      VAR_10->nWidth = 0;
    }
  } else if (VAR_9->member.para.pCell) {
    ME_Cell *VAR_11 = &VAR_9->member.para.pCell->member.cell;
    int VAR_12;

    VAR_12 = VAR_11->nRightBoundary;
    if (VAR_11->prev_cell)
      VAR_12 -= VAR_11->prev_cell->member.cell.nRightBoundary;
    if (!VAR_11->prev_cell)
    {
      int VAR_13 = FUNC_1(VAR_9)->member.para.fmt.dxStartIndent;
      VAR_12 -= VAR_13;
    }
    VAR_11->nWidth = FUNC_3(FUNC_2(VAR_7->context, VAR_12), 0);

    VAR_7->nAvailWidth = VAR_11->nWidth
        - (VAR_7->nRow ? VAR_7->nLeftMargin : VAR_7->nFirstMargin) - VAR_7->nRightMargin;
    VAR_7->bWordWrap = VAR_5;
  } else {
    VAR_7->nAvailWidth = VAR_7->context->nAvailWidth
        - (VAR_7->nRow ? VAR_7->nLeftMargin : VAR_7->nFirstMargin) - VAR_7->nRightMargin;
  }
  VAR_7->pt.x = VAR_7->context->pt.x;
  if (VAR_7->context->editor->bEmulateVersion10 &&
      VAR_8->dwMask & VAR_4 && VAR_8->wEffects & VAR_3)

    VAR_7->pt.y++;
}
