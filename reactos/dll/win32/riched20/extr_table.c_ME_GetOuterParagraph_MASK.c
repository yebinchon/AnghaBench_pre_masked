
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nFlags; scalar_t__ pCell; TYPE_3__* prev_para; } ;
struct TYPE_10__ {TYPE_1__ para; } ;
struct TYPE_11__ {TYPE_2__ member; } ;
typedef TYPE_3__ ME_DisplayItem ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (scalar_t__,int ) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;

ME_DisplayItem* FUNC_2(ME_DisplayItem *VAR_2)
{
  if (VAR_2->member.para.nFlags & VAR_0)
    VAR_2 = VAR_2->member.para.prev_para;
  while (VAR_2->member.para.pCell)
  {
    VAR_2 = FUNC_1(VAR_2);
    if (!VAR_2->member.para.pCell)
      break;
    VAR_2 = FUNC_0(VAR_2->member.para.pCell, VAR_1);
  }
  return VAR_2;
}
