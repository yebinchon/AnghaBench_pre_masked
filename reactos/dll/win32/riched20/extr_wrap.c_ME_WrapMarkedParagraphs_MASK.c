
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


struct TYPE_34__ {int y; scalar_t__ x; } ;
struct TYPE_31__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_38__ {TYPE_5__ pt; TYPE_2__ rcView; } ;
struct TYPE_36__ {int nWidth; TYPE_5__ pt; TYPE_8__* next_marked; TYPE_8__* next_para; TYPE_8__* prev_para; int nCharOfs; } ;
struct TYPE_32__ {TYPE_7__ para; } ;
struct TYPE_37__ {scalar_t__ type; TYPE_3__ member; } ;
struct TYPE_30__ {scalar_t__ cy; scalar_t__ cx; } ;
struct TYPE_35__ {int nTotalWidth; scalar_t__ nTotalLength; scalar_t__ nLastTotalLength; TYPE_4__* pBuffer; TYPE_1__ sizeWindow; TYPE_8__* first_marked_para; int texthost; } ;
struct TYPE_33__ {TYPE_8__* pLast; } ;
typedef TYPE_6__ ME_TextEditor ;
typedef TYPE_7__ ME_Paragraph ;
typedef TYPE_8__ ME_DisplayItem ;
typedef TYPE_9__ ME_Context ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_9__*,TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_8__*,TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*,TYPE_8__**,TYPE_8__**) ;
 int FUNC_5 (TYPE_6__*,TYPE_9__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,TYPE_9__*,TYPE_8__*,TYPE_8__*) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (TYPE_6__*,TYPE_8__*) ;

BOOL FUNC_11(ME_TextEditor *VAR_2)
{
  ME_DisplayItem *VAR_3;
  ME_Context VAR_4;
  int VAR_5 = VAR_2->nTotalWidth, VAR_6 = 0, VAR_7;
  ME_DisplayItem *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
  ME_Paragraph *VAR_10;

  if (!VAR_2->first_marked_para)
    return VAR_0;

  FUNC_2(&VAR_4, VAR_2, FUNC_0(VAR_2->texthost));

  VAR_3 = VAR_2->first_marked_para;
  VAR_4.pt = VAR_3->member.para.pt;
  while (VAR_3 != VAR_2->pBuffer->pLast)
  {
    FUNC_7(VAR_3->type == VAR_1);

    VAR_7 = VAR_3->member.para.nWidth;
    FUNC_5(VAR_2, &VAR_4, VAR_3);
    if (VAR_7 == VAR_5 && VAR_3->member.para.nWidth < VAR_5)
      VAR_5 = FUNC_8(VAR_2);
    else
      VAR_5 = FUNC_9(VAR_5, VAR_3->member.para.nWidth);

    if (!VAR_3->member.para.nCharOfs)
      FUNC_4(VAR_3->member.para.prev_para, &VAR_8, &VAR_9);
    FUNC_4(VAR_3, &VAR_8, &VAR_9);
    FUNC_6(VAR_3, &VAR_4, VAR_8, VAR_9);

    if (VAR_3->member.para.next_para)
    {
      VAR_6 = VAR_4.pt.y - VAR_3->member.para.next_para->member.para.pt.y;
      if (VAR_6)
      {
        VAR_10 = &VAR_3->member.para;
        while (VAR_10->next_para && VAR_10 != &VAR_3->member.para.next_marked->member.para &&
               VAR_10 != &VAR_2->pBuffer->pLast->member.para)
        {
          FUNC_4(VAR_10->next_para, &VAR_8, &VAR_9);
          VAR_10->next_para->member.para.pt.y = VAR_4.pt.y;
          FUNC_6(VAR_10->next_para, &VAR_4, VAR_8, VAR_9);
          VAR_10 = &VAR_10->next_para->member.para;
        }
      }
    }
    if (VAR_3->member.para.next_marked)
    {
      ME_DisplayItem *VAR_11 = VAR_3;
      VAR_3 = VAR_3->member.para.next_marked;
      FUNC_10(VAR_2, VAR_11);
    }
    else
    {
      FUNC_10(VAR_2, VAR_3);
      VAR_3 = VAR_2->pBuffer->pLast;
    }
    VAR_4.pt.y = VAR_3->member.para.pt.y;
  }
  VAR_2->sizeWindow.cx = VAR_4.rcView.right-VAR_4.rcView.left;
  VAR_2->sizeWindow.cy = VAR_4.rcView.bottom-VAR_4.rcView.top;

  VAR_2->nTotalLength = VAR_4.pt.y;
  VAR_2->nTotalWidth = VAR_5;
  VAR_2->pBuffer->pLast->member.para.pt.x = 0;
  VAR_2->pBuffer->pLast->member.para.pt.y = VAR_4.pt.y;

  FUNC_1(&VAR_4);

  if (VAR_8 || VAR_2->nTotalLength < VAR_2->nLastTotalLength)
    FUNC_3(VAR_2, VAR_8, VAR_9);
  return !!VAR_8;
}
