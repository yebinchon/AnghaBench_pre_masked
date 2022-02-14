
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char underflow; char overflow; void* max; void* min; } ;
struct TYPE_8__ {int min_var; int max_var; int min_ssa_var; int max_ssa_var; int negative; TYPE_2__ range; } ;
typedef TYPE_3__ zend_ssa_range_constraint ;
struct TYPE_6__ {TYPE_3__ range; } ;
struct TYPE_9__ {int has_range_constraint; TYPE_1__ constraint; } ;
typedef TYPE_4__ zend_ssa_phi ;
typedef void* zend_long ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(
  zend_ssa_phi *VAR_2, int VAR_3, int VAR_4, zend_long VAR_5, zend_long VAR_6,
  char VAR_7, char VAR_8, char VAR_9)
{
 zend_ssa_range_constraint *VAR_10 = &VAR_2->constraint.range;
 VAR_10->min_var = VAR_3;
 VAR_10->max_var = VAR_4;
 VAR_10->min_ssa_var = -1;
 VAR_10->max_ssa_var = -1;
 VAR_10->range.min = VAR_5;
 VAR_10->range.max = VAR_6;
 VAR_10->range.underflow = VAR_7;
 VAR_10->range.overflow = VAR_8;
 VAR_10->negative = VAR_9 ? VAR_0 : VAR_1;
 VAR_2->has_range_constraint = 1;
}
