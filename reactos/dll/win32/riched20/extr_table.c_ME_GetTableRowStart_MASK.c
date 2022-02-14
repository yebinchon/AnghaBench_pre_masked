
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int nFlags; TYPE_4__* pCell; TYPE_4__* prev_para; } ;
struct TYPE_10__ {TYPE_4__* prev_cell; } ;
struct TYPE_11__ {TYPE_3__ para; TYPE_1__ cell; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_2__ member; } ;
typedef TYPE_4__ ME_DisplayItem ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

ME_DisplayItem* FUNC_2(ME_DisplayItem *VAR_4)
{
  ME_DisplayItem *VAR_5;
  FUNC_1(VAR_4);
  if (VAR_4->member.para.nFlags & VAR_1)
    return VAR_4;
  if (VAR_4->member.para.nFlags & VAR_0)
    VAR_4 = VAR_4->member.para.prev_para;
  VAR_5 = VAR_4->member.para.pCell;
  FUNC_1(VAR_5 && VAR_5->type == VAR_2);
  while (VAR_5->member.cell.prev_cell)
    VAR_5 = VAR_5->member.cell.prev_cell;

  VAR_4 = FUNC_0(VAR_5, VAR_3);
  FUNC_1(VAR_4 && VAR_4->member.para.nFlags & VAR_1);
  return VAR_4;
}
