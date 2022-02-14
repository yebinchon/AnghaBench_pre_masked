
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_63__ TYPE_9__ ;
typedef struct TYPE_62__ TYPE_8__ ;
typedef struct TYPE_61__ TYPE_7__ ;
typedef struct TYPE_60__ TYPE_6__ ;
typedef struct TYPE_59__ TYPE_5__ ;
typedef struct TYPE_58__ TYPE_4__ ;
typedef struct TYPE_57__ TYPE_3__ ;
typedef struct TYPE_56__ TYPE_30__ ;
typedef struct TYPE_55__ TYPE_2__ ;
typedef struct TYPE_54__ TYPE_23__ ;
typedef struct TYPE_53__ TYPE_22__ ;
typedef struct TYPE_52__ TYPE_21__ ;
typedef struct TYPE_51__ TYPE_20__ ;
typedef struct TYPE_50__ TYPE_1__ ;
typedef struct TYPE_49__ TYPE_19__ ;
typedef struct TYPE_48__ TYPE_18__ ;
typedef struct TYPE_47__ TYPE_17__ ;
typedef struct TYPE_46__ TYPE_16__ ;
typedef struct TYPE_45__ TYPE_15__ ;
typedef struct TYPE_44__ TYPE_14__ ;
typedef struct TYPE_43__ TYPE_13__ ;
typedef struct TYPE_42__ TYPE_12__ ;
typedef struct TYPE_41__ TYPE_11__ ;
typedef struct TYPE_40__ TYPE_10__ ;


struct TYPE_62__ {TYPE_13__* pCell; } ;
struct TYPE_63__ {TYPE_8__ para; } ;
struct TYPE_61__ {int y; } ;
struct TYPE_54__ {int nHeight; TYPE_7__ pt; } ;
struct TYPE_60__ {TYPE_23__ cell; } ;
struct TYPE_59__ {int y; } ;
struct TYPE_58__ {TYPE_21__* pLast; TYPE_1__* pFirst; } ;
struct TYPE_57__ {int nPos; } ;
struct TYPE_56__ {TYPE_6__ member; } ;
struct TYPE_55__ {scalar_t__ nPos; } ;
struct TYPE_47__ {int top; scalar_t__ bottom; int right; scalar_t__ left; } ;
struct TYPE_46__ {int y; scalar_t__ x; } ;
struct TYPE_53__ {int * hDC; TYPE_18__* editor; TYPE_17__ rcView; TYPE_16__ pt; } ;
struct TYPE_44__ {int nHeight; int nFlags; TYPE_21__* next_para; TYPE_13__* pCell; TYPE_10__* prev_para; TYPE_5__ pt; } ;
struct TYPE_45__ {TYPE_14__ para; } ;
struct TYPE_52__ {scalar_t__ type; TYPE_15__ member; } ;
struct TYPE_51__ {scalar_t__ nTotalLength; scalar_t__ nLastTotalLength; scalar_t__ nTotalWidth; scalar_t__ nLastTotalWidth; TYPE_4__* pBuffer; TYPE_3__ vert_si; TYPE_2__ horz_si; } ;
struct TYPE_50__ {TYPE_21__* next; } ;
struct TYPE_49__ {int top; int bottom; int right; scalar_t__ left; } ;
struct TYPE_48__ {int hbrBackground; } ;
struct TYPE_41__ {scalar_t__ yTextOffset; } ;
struct TYPE_42__ {TYPE_11__ cell; } ;
struct TYPE_43__ {TYPE_12__ member; } ;
struct TYPE_40__ {TYPE_9__ member; } ;
typedef TYPE_19__ RECT ;
typedef TYPE_20__ ME_TextEditor ;
typedef TYPE_21__ ME_DisplayItem ;
typedef TYPE_22__ ME_Context ;
typedef TYPE_23__ ME_Cell ;
typedef int * HRGN ;
typedef int HDC ;


 int * FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_19__*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,scalar_t__,int,int ,int) ;
 int FUNC_5 (TYPE_19__*,TYPE_19__*,TYPE_19__ const*) ;
 int FUNC_6 (TYPE_19__*) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_22__*) ;
 int FUNC_8 (TYPE_22__*,TYPE_21__*) ;
 TYPE_30__* FUNC_9 (TYPE_21__*,int ) ;
 int FUNC_10 (TYPE_22__*,TYPE_20__*,int ) ;
 int FUNC_11 (TYPE_20__*) ;
 int FUNC_12 (TYPE_20__*,int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ) ;
 int VAR_2 ;
 int FUNC_15 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_16(ME_TextEditor *VAR_5, HDC VAR_6, const RECT *VAR_7)
{
  ME_DisplayItem *VAR_8;
  ME_Context VAR_9;
  int VAR_10, VAR_11;
  HRGN VAR_12;

  VAR_12 = FUNC_0(0, 0, 0, 0);
  if (!FUNC_3(VAR_6, VAR_12))
  {
    FUNC_1(VAR_12);
    VAR_12 = ((void*)0);
  }
  FUNC_4(VAR_6, VAR_7->left, VAR_7->top,
                     VAR_7->right, VAR_7->bottom);

  FUNC_10(&VAR_9, VAR_5, VAR_6);
  FUNC_14(VAR_6, VAR_2);
  FUNC_11(VAR_5);
  VAR_8 = VAR_5->pBuffer->pFirst->next;


  VAR_9.pt.x = VAR_9.rcView.left - VAR_5->horz_si.nPos;
  VAR_9.pt.y = VAR_9.rcView.top - VAR_5->vert_si.nPos;
  while(VAR_8 != VAR_5->pBuffer->pLast)
  {
    FUNC_15(VAR_8->type == VAR_4);

    VAR_10 = VAR_9.pt.y + VAR_8->member.para.pt.y;
    if (VAR_8->member.para.pCell
        != VAR_8->member.para.next_para->member.para.pCell)
    {
      ME_Cell *VAR_13 = ((void*)0);
      VAR_13 = &FUNC_9(VAR_8->member.para.next_para, VAR_3)->member.cell;
      VAR_11 = VAR_9.pt.y + VAR_13->pt.y + VAR_13->nHeight;
    } else {
      VAR_11 = VAR_10 + VAR_8->member.para.nHeight;
    }
    if (VAR_8->member.para.pCell && !(VAR_8->member.para.nFlags & VAR_1) &&
        VAR_8->member.para.pCell != VAR_8->member.para.prev_para->member.para.pCell)
    {

      VAR_10 -= VAR_8->member.para.pCell->member.cell.yTextOffset;
    }


    if (VAR_10 < VAR_7->bottom && VAR_11 > VAR_7->top)
      FUNC_8(&VAR_9, VAR_8);
    VAR_8 = VAR_8->member.para.next_para;
  }
  if (VAR_9.pt.y + VAR_5->nTotalLength < VAR_9.rcView.bottom)
  {

    RECT VAR_14;
    VAR_14.top = VAR_9.pt.y + VAR_5->nTotalLength;
    VAR_14.left = VAR_9.rcView.left;
    VAR_14.bottom = VAR_9.rcView.bottom;
    VAR_14.right = VAR_9.rcView.right;

    FUNC_5(&VAR_14, &VAR_14, VAR_7);

    if (!FUNC_6(&VAR_14))
      FUNC_2(VAR_6, &VAR_14, VAR_9.editor->hbrBackground);
  }
  if (VAR_5->nTotalLength != VAR_5->nLastTotalLength ||
      VAR_5->nTotalWidth != VAR_5->nLastTotalWidth)
    FUNC_12(VAR_5, VAR_0);
  VAR_5->nLastTotalLength = VAR_5->nTotalLength;
  VAR_5->nLastTotalWidth = VAR_5->nTotalWidth;

  FUNC_13(VAR_6, VAR_12);
  if (VAR_12)
    FUNC_1(VAR_12);

  VAR_9.hDC = ((void*)0);
  FUNC_7(&VAR_9);
}
