
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {struct RClass* module_class; struct RClass* kernel_module; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int FUNC_7 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

void
FUNC_8(mrb_state* VAR_26)
{
  struct RClass *VAR_27 = VAR_26->kernel_module;
  struct RClass *VAR_28 = VAR_26->module_class;

  FUNC_7(VAR_26, VAR_27, "global_variables", VAR_1, FUNC_2());
  FUNC_7(VAR_26, VAR_27, "local_variables", VAR_4, FUNC_2());

  FUNC_7(VAR_26, VAR_27, "singleton_class", VAR_25, FUNC_2());
  FUNC_7(VAR_26, VAR_27, "instance_variable_defined?", VAR_17, FUNC_4(1));
  FUNC_7(VAR_26, VAR_27, "instance_variable_get", VAR_18, FUNC_4(1));
  FUNC_7(VAR_26, VAR_27, "instance_variable_set", VAR_19, FUNC_4(2));
  FUNC_7(VAR_26, VAR_27, "instance_variables", VAR_16, FUNC_2());
  FUNC_7(VAR_26, VAR_27, "methods", VAR_20, FUNC_3(1));
  FUNC_7(VAR_26, VAR_27, "private_methods", VAR_21, FUNC_3(1));
  FUNC_7(VAR_26, VAR_27, "protected_methods", VAR_22, FUNC_3(1));
  FUNC_7(VAR_26, VAR_27, "public_methods", VAR_23, FUNC_3(1));
  FUNC_7(VAR_26, VAR_27, "singleton_methods", VAR_24, FUNC_3(1));
  FUNC_7(VAR_26, VAR_27, "define_singleton_method", VAR_0, FUNC_4(1)|FUNC_1());
  FUNC_7(VAR_26, VAR_27, "send", VAR_3, FUNC_4(1)|FUNC_5()|FUNC_1());

  FUNC_7(VAR_26, VAR_28, "class_variables", VAR_5, FUNC_3(1));
  FUNC_7(VAR_26, VAR_28, "remove_class_variable", VAR_12, FUNC_4(1));
  FUNC_7(VAR_26, VAR_28, "class_variable_defined?", VAR_7, FUNC_4(1));
  FUNC_7(VAR_26, VAR_28, "class_variable_get", VAR_8, FUNC_4(1));
  FUNC_7(VAR_26, VAR_28, "class_variable_set", VAR_9, FUNC_4(2));
  FUNC_7(VAR_26, VAR_28, "included_modules", VAR_10, FUNC_2());
  FUNC_7(VAR_26, VAR_28, "instance_methods", VAR_11, FUNC_0());
  FUNC_7(VAR_26, VAR_28, "remove_method", VAR_13, FUNC_0());
  FUNC_7(VAR_26, VAR_28, "method_removed", VAR_2, FUNC_4(1));
  FUNC_7(VAR_26, VAR_28, "constants", VAR_6, FUNC_3(1));
  FUNC_6(VAR_26, VAR_28, "constants", VAR_14, FUNC_0());
  FUNC_6(VAR_26, VAR_28, "nesting", VAR_15, FUNC_2());
}
