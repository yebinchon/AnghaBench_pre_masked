
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_25__ {TYPE_5__ rcView; } ;
struct TYPE_19__ {scalar_t__ y; } ;
struct TYPE_20__ {scalar_t__ nHeight; TYPE_2__ pt; } ;
struct TYPE_21__ {TYPE_3__ para; } ;
struct TYPE_24__ {TYPE_4__ member; } ;
struct TYPE_18__ {int nPos; } ;
struct TYPE_23__ {scalar_t__ nTotalLength; scalar_t__ nLastTotalLength; int texthost; TYPE_1__ vert_si; } ;
typedef TYPE_5__ RECT ;
typedef TYPE_6__ ME_TextEditor ;
typedef TYPE_7__ ME_DisplayItem ;
typedef TYPE_8__ ME_Context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_8__*) ;
 TYPE_7__* FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_8__*,TYPE_6__*,int ) ;
 int VAR_0 ;

void FUNC_5(ME_TextEditor *VAR_1,
                                 ME_DisplayItem *VAR_2,
                                 ME_DisplayItem *VAR_3)
{
  ME_Context VAR_4;
  RECT VAR_5;
  int VAR_6;

  FUNC_4(&VAR_4, VAR_1, FUNC_0(VAR_1->texthost));
  VAR_5 = VAR_4.rcView;
  VAR_6 = VAR_1->vert_si.nPos;

  if (VAR_2) {
    VAR_2 = FUNC_3(VAR_2);
    VAR_3 = FUNC_3(VAR_3);
    VAR_5.top = VAR_4.rcView.top + VAR_2->member.para.pt.y - VAR_6;
  } else {
    VAR_5.top = VAR_4.rcView.top + VAR_1->nTotalLength - VAR_6;
  }
  if (VAR_1->nTotalLength < VAR_1->nLastTotalLength)
    VAR_5.bottom = VAR_4.rcView.top + VAR_1->nLastTotalLength - VAR_6;
  else
    VAR_5.bottom = VAR_4.rcView.top + VAR_3->member.para.pt.y + VAR_3->member.para.nHeight - VAR_6;
  FUNC_1(VAR_1->texthost, &VAR_5, VAR_0);

  FUNC_2(&VAR_4);
}
