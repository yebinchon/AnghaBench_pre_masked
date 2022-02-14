
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fn_flags; int num_args; TYPE_2__* arg_info; } ;
typedef TYPE_1__ zend_op_array ;
struct TYPE_6__ {int type; } ;
typedef TYPE_2__ zend_arg_info ;
typedef int uint32_t ;
struct TYPE_7__ {size_t num_types; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ) ;

__attribute__((used)) static size_t FUNC_5(const zend_op_array *VAR_2, uint32_t VAR_3)
{
 zend_arg_info *VAR_4;
 if (VAR_3 > 0) {
  if (!(VAR_2->fn_flags & VAR_0)) {
   return 0;
  }
  if (FUNC_0(VAR_3 <= VAR_2->num_args)) {
   VAR_4 = &VAR_2->arg_info[VAR_3-1];
  } else if (FUNC_1(VAR_2->fn_flags & VAR_1)) {
   VAR_4 = &VAR_2->arg_info[VAR_2->num_args];
  } else {
   return 0;
  }
 } else {
  VAR_4 = VAR_2->arg_info - 1;
 }

 if (FUNC_2(VAR_4->type)) {
  if (FUNC_3(VAR_4->type)) {
   return FUNC_4(VAR_4->type)->num_types;
  }
  return 1;
 }

 return 0;
}
