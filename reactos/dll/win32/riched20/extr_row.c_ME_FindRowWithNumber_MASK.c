
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int nRows; TYPE_5__* next_para; } ;
struct TYPE_11__ {TYPE_1__ para; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_2__ member; } ;
struct TYPE_13__ {TYPE_3__* pBuffer; } ;
struct TYPE_12__ {TYPE_5__* pFirst; } ;
typedef TYPE_4__ ME_TextEditor ;
typedef TYPE_5__ ME_DisplayItem ;


 TYPE_5__* FUNC_0 (TYPE_5__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

ME_DisplayItem *
FUNC_1(ME_TextEditor *VAR_2, int VAR_3)
{
  ME_DisplayItem *VAR_4 = FUNC_0(VAR_2->pBuffer->pFirst, VAR_0);
  int VAR_5 = 0;

  while (VAR_4->type == VAR_0 &&
         VAR_5 + VAR_4->member.para.nRows <= VAR_3)
  {
    VAR_5 += VAR_4->member.para.nRows;
    VAR_4 = VAR_4->member.para.next_para;
  }
  if (VAR_4->type != VAR_0)
    return ((void*)0);
  for (VAR_4 = FUNC_0(VAR_4, VAR_1); VAR_4 && VAR_5 < VAR_3; VAR_5++)
    VAR_4 = FUNC_0(VAR_4, VAR_1);
  return VAR_4;
}
