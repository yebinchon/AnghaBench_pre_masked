
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ overflow; int max; int min; scalar_t__ underflow; } ;
typedef TYPE_1__ zend_ssa_range ;
struct TYPE_8__ {int * var_info; } ;
typedef TYPE_2__ zend_ssa ;
typedef int zend_op_array ;


 int FUNC_0 (char*,int,int,char*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int const*,TYPE_2__*,int,int,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(const zend_op_array *VAR_0, zend_ssa *VAR_1, int VAR_2, int VAR_3)
{
 zend_ssa_range VAR_4;

 if (FUNC_1(VAR_0, VAR_1, VAR_2, 1, 0, &VAR_4)) {
  if (FUNC_2(&VAR_1->var_info[VAR_2], &VAR_4)) {
   FUNC_0("  change range (widening  SCC %2d) %2d [%s%ld..%ld%s]\n", VAR_3, VAR_2, (VAR_4.underflow?"-- ":""), VAR_4.min, VAR_4.max, (VAR_4.overflow?" ++":""));
   return 1;
  }
 }
 return 0;
}
