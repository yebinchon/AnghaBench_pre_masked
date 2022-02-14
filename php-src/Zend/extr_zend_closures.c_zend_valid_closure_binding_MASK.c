
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {int fn_flags; TYPE_4__* scope; int function_name; } ;
struct TYPE_11__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;
struct TYPE_12__ {int this_ptr; TYPE_2__ func; } ;
typedef TYPE_3__ zend_closure ;
struct TYPE_13__ {scalar_t__ type; int name; } ;
typedef TYPE_4__ zend_class_entry ;
typedef int zend_bool ;
struct TYPE_14__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static zend_bool FUNC_5(
  zend_closure *VAR_5, zval *VAR_6, zend_class_entry *VAR_7)
{
 zend_function *VAR_8 = &VAR_5->func;
 zend_bool VAR_9 = (VAR_8->common.fn_flags & VAR_1) != 0;
 if (VAR_6) {
  if (VAR_8->common.fn_flags & VAR_2) {
   FUNC_4(VAR_0, "Cannot bind an instance to a static closure");
   return 0;
  }

  if (VAR_9 && VAR_8->common.scope &&
    !FUNC_3(FUNC_2(VAR_6), VAR_8->common.scope)) {

   FUNC_4(VAR_0, "Cannot bind method %s::%s() to object of class %s",
     FUNC_0(VAR_8->common.scope->name),
     FUNC_0(VAR_8->common.function_name),
     FUNC_0(FUNC_2(VAR_6)->name));
   return 0;
  }
 } else if (VAR_9 && VAR_8->common.scope
   && !(VAR_8->common.fn_flags & VAR_2)) {
  FUNC_4(VAR_0, "Cannot unbind $this of method");
  return 0;
 } else if (!VAR_9 && !FUNC_1(VAR_5->this_ptr)
   && (VAR_8->common.fn_flags & VAR_3)) {
  FUNC_4(VAR_0, "Cannot unbind $this of closure using $this");
  return 0;
 }

 if (VAR_7 && VAR_7 != VAR_8->common.scope && VAR_7->type == VAR_4) {

  FUNC_4(VAR_0, "Cannot bind closure to scope of internal class %s",
    FUNC_0(VAR_7->name));
  return 0;
 }

 if (VAR_9 && VAR_7 != VAR_8->common.scope) {
  FUNC_4(VAR_0, "Cannot rebind scope of closure created by ReflectionFunctionAbstract::getClosure()");
  return 0;
 }

 return 1;
}
