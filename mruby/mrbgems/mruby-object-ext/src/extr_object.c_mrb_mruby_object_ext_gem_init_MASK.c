
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {struct RClass* kernel_module; struct RClass* nil_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct RClass* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_5(mrb_state* VAR_6)
{
  struct RClass * VAR_7 = VAR_6->nil_class;

  FUNC_4(VAR_6, VAR_7, "to_a", VAR_2, FUNC_2());

  FUNC_4(VAR_6, VAR_7, "to_f", VAR_3, FUNC_2());

  FUNC_4(VAR_6, VAR_7, "to_h", VAR_4, FUNC_2());
  FUNC_4(VAR_6, VAR_7, "to_i", VAR_5, FUNC_2());

  FUNC_4(VAR_6, VAR_6->kernel_module, "itself", VAR_0, FUNC_2());

  FUNC_4(VAR_6, FUNC_3(VAR_6, "BasicObject"), "instance_exec", VAR_1, FUNC_0() | FUNC_1());
}
