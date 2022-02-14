
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fn_flags; size_t num_args; TYPE_2__* arg_info; } ;
typedef TYPE_1__ zend_internal_function ;
struct TYPE_6__ {int type; } ;
typedef TYPE_2__ zend_internal_arg_info ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(zend_internal_function *VAR_3) {
 if ((VAR_3->fn_flags & (VAR_0|VAR_1)) &&
  VAR_3->arg_info) {

  uint32_t VAR_4;
  uint32_t VAR_5 = VAR_3->num_args + 1;
  zend_internal_arg_info *VAR_6 = VAR_3->arg_info - 1;

  if (VAR_3->fn_flags & VAR_2) {
   VAR_5++;
  }
  for (VAR_4 = 0 ; VAR_4 < VAR_5; VAR_4++) {
   FUNC_1(VAR_6[VAR_4].type, 1);
  }
  FUNC_0(VAR_6);
 }
}
