
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ static_variables; } ;
struct TYPE_8__ {int fn_flags; TYPE_4__* scope; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ op_array; TYPE_2__ common; } ;
typedef TYPE_3__ zend_function ;
struct TYPE_10__ {int ce_flags; } ;
typedef TYPE_4__ zend_class_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(zend_function *VAR_5, zend_class_entry *VAR_6)
{
 if ((VAR_5->common.scope->ce_flags & VAR_2) == VAR_2) {

  VAR_5->common.scope = VAR_6;

  if (VAR_5->common.fn_flags & VAR_0) {
   VAR_6->ce_flags |= VAR_1;
  }
  if (VAR_5->type == VAR_4 && VAR_5->op_array.static_variables) {
   VAR_6->ce_flags |= VAR_3;
  }
 }
}
