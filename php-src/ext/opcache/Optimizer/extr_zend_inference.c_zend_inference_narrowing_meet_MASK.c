
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ underflow; scalar_t__ min; scalar_t__ overflow; scalar_t__ max; } ;
struct TYPE_5__ {int has_range; TYPE_2__ range; } ;
typedef TYPE_1__ zend_ssa_var_info ;
typedef TYPE_2__ zend_ssa_range ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(zend_ssa_var_info *VAR_2, zend_ssa_range *VAR_3)
{
 if (!VAR_2->has_range) {
  VAR_2->has_range = 1;
 } else {
  if (!VAR_3->underflow &&
      !VAR_2->range.underflow &&
      VAR_2->range.min < VAR_3->min) {
   VAR_3->min = VAR_2->range.min;
  }
  if (!VAR_3->overflow &&
      !VAR_2->range.overflow &&
      VAR_2->range.max > VAR_3->max) {
   VAR_3->max = VAR_2->range.max;
  }
  if (VAR_3->underflow) {
   VAR_3->min = VAR_1;
  }
  if (VAR_3->overflow) {
   VAR_3->max = VAR_0;
  }
  if (VAR_2->range.min == VAR_3->min &&
      VAR_2->range.max == VAR_3->max &&
      VAR_2->range.underflow == VAR_3->underflow &&
      VAR_2->range.overflow == VAR_3->overflow) {
   return 0;
  }
 }
 VAR_2->range = *VAR_3;
 return 1;
}
