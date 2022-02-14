
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* prev_para; } ;
struct TYPE_7__ {TYPE_1__ para; } ;
struct TYPE_8__ {scalar_t__ type; struct TYPE_8__* prev; TYPE_2__ member; } ;
typedef TYPE_3__ ME_DisplayItem ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

BOOL FUNC_0(ME_DisplayItem **VAR_5, ME_DisplayItem **VAR_6, BOOL VAR_7)
{
  ME_DisplayItem *VAR_8 = (*VAR_6)->prev;
  while (VAR_8->type != VAR_4)
  {
    if (VAR_8->type == VAR_2) {
      if (!VAR_7) return VAR_0;
      if (VAR_5 && VAR_8->member.para.prev_para->type == VAR_2)
        *VAR_5 = VAR_8->member.para.prev_para;
    } else if (VAR_8->type == VAR_3) {
      *VAR_6 = VAR_8;
      return VAR_1;
    }
    VAR_8 = VAR_8->prev;
  }
  return VAR_0;
}
