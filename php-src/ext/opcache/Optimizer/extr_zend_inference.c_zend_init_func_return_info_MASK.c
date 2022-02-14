
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_6__ {int is_instanceof; scalar_t__ has_range; TYPE_2__ range; scalar_t__ ce; int type; } ;
typedef TYPE_1__ zend_ssa_var_info ;
typedef TYPE_2__ zend_ssa_range ;
typedef int zend_script ;
struct TYPE_8__ {int fn_flags; int * arg_info; } ;
typedef TYPE_3__ zend_op_array ;
typedef int zend_arg_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int *,scalar_t__*) ;

void FUNC_1(const zend_op_array *VAR_3,
                                const zend_script *VAR_4,
                                zend_ssa_var_info *VAR_5)
{
 if (VAR_3->fn_flags & VAR_1) {
  zend_arg_info *VAR_6 = VAR_3->arg_info - 1;
  zend_ssa_range VAR_7 = {0, 0, 0, 0};

  VAR_5->type = FUNC_0(VAR_4, VAR_6, &VAR_5->ce);
  if (VAR_3->fn_flags & VAR_2) {
   VAR_5->type |= VAR_0;
  }
  VAR_5->is_instanceof = (VAR_5->ce) ? 1 : 0;
  VAR_5->range = VAR_7;
  VAR_5->has_range = 0;
 }
}
