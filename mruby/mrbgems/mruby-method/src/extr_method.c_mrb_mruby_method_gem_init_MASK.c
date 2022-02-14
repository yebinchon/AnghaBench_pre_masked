
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_6__ {struct RClass* module_class; struct RClass* kernel_module; int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_0 ;
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
 struct RClass* FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*) ;
 int VAR_14 ;

void
FUNC_6(mrb_state* VAR_15)
{
  struct RClass *VAR_16 = FUNC_3(VAR_15, "UnboundMethod", VAR_15->object_class);
  struct RClass *VAR_17 = FUNC_3(VAR_15, "Method", VAR_15->object_class);

  FUNC_5(VAR_15, VAR_16, "new");
  FUNC_4(VAR_15, VAR_16, "bind", VAR_14, FUNC_2(1));
  FUNC_4(VAR_15, VAR_16, "super_method", VAR_9, FUNC_1());
  FUNC_4(VAR_15, VAR_16, "==", VAR_3, FUNC_2(1));
  FUNC_4(VAR_15, VAR_16, "eql?", VAR_3, FUNC_2(1));
  FUNC_4(VAR_15, VAR_16, "to_s", VAR_10, FUNC_1());
  FUNC_4(VAR_15, VAR_16, "inspect", VAR_10, FUNC_1());
  FUNC_4(VAR_15, VAR_16, "arity", VAR_0, FUNC_1());
  FUNC_4(VAR_15, VAR_16, "source_location", VAR_8, FUNC_1());
  FUNC_4(VAR_15, VAR_16, "parameters", VAR_6, FUNC_1());
  FUNC_4(VAR_15, VAR_16, "bind_call", VAR_1, FUNC_2(1)|FUNC_0());
  FUNC_4(VAR_15, VAR_16, "owner", VAR_5, FUNC_1());
  FUNC_4(VAR_15, VAR_16, "name", VAR_4, FUNC_1());

  FUNC_5(VAR_15, VAR_17, "new");
  FUNC_4(VAR_15, VAR_17, "==", VAR_3, FUNC_2(1));
  FUNC_4(VAR_15, VAR_17, "eql?", VAR_3, FUNC_2(1));
  FUNC_4(VAR_15, VAR_17, "to_s", VAR_10, FUNC_1());
  FUNC_4(VAR_15, VAR_17, "inspect", VAR_10, FUNC_1());
  FUNC_4(VAR_15, VAR_17, "call", VAR_2, FUNC_0());
  FUNC_4(VAR_15, VAR_17, "[]", VAR_2, FUNC_0());
  FUNC_4(VAR_15, VAR_17, "unbind", VAR_11, FUNC_1());
  FUNC_4(VAR_15, VAR_17, "super_method", VAR_9, FUNC_1());
  FUNC_4(VAR_15, VAR_17, "arity", VAR_0, FUNC_1());
  FUNC_4(VAR_15, VAR_17, "source_location", VAR_8, FUNC_1());
  FUNC_4(VAR_15, VAR_17, "parameters", VAR_6, FUNC_1());
  FUNC_4(VAR_15, VAR_17, "owner", VAR_5, FUNC_1());
  FUNC_4(VAR_15, VAR_17, "receiver", VAR_7, FUNC_1());
  FUNC_4(VAR_15, VAR_17, "name", VAR_4, FUNC_1());

  FUNC_4(VAR_15, VAR_15->kernel_module, "method", VAR_12, FUNC_2(1));

  FUNC_4(VAR_15, VAR_15->module_class, "instance_method", VAR_13, FUNC_2(1));
}
