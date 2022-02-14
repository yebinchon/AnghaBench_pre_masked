
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int nCharOfs; } ;
struct TYPE_11__ {int nCharOfs; TYPE_6__* next_para; scalar_t__ nRows; } ;
struct TYPE_13__ {TYPE_3__ run; TYPE_2__ para; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_4__ member; } ;
struct TYPE_14__ {TYPE_1__* pBuffer; } ;
struct TYPE_10__ {TYPE_6__* pFirst; } ;
typedef TYPE_5__ ME_TextEditor ;
typedef TYPE_6__ ME_DisplayItem ;


 TYPE_6__* FUNC_0 (TYPE_6__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_1(ME_TextEditor *VAR_3, int VAR_4)
{
  ME_DisplayItem *VAR_5 = FUNC_0(VAR_3->pBuffer->pFirst, VAR_0);
  int VAR_6 = 0;

  while (VAR_5->type == VAR_0 &&
         VAR_5->member.para.next_para->member.para.nCharOfs <= VAR_4)
  {
    VAR_6 += VAR_5->member.para.nRows;
    VAR_5 = VAR_5->member.para.next_para;
  }
  if (VAR_5->type == VAR_0)
  {
    ME_DisplayItem *VAR_7 = VAR_5->member.para.next_para;

    VAR_4 -= VAR_5->member.para.nCharOfs;
    VAR_5 = FUNC_0(VAR_5, VAR_1);
    while ((VAR_5 = FUNC_0(VAR_5, VAR_2)) != ((void*)0))
    {
      if (VAR_5 == VAR_7)
        break;
      VAR_5 = FUNC_0(VAR_5, VAR_1);
      if (VAR_5->member.run.nCharOfs > VAR_4)
        break;
      VAR_6++;
    }
  }
  return VAR_6;
}
