
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {struct RClass* kernel_module; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 struct RClass* FUNC_3 (TYPE_1__*,char*) ;
 int VAR_0 ;

void
FUNC_4(mrb_state* VAR_1)
{
  struct RClass *VAR_2;

  if (VAR_1->kernel_module == ((void*)0)) {
    VAR_1->kernel_module = FUNC_3(VAR_1, "Kernel");
  }
  VAR_2 = VAR_1->kernel_module;

  FUNC_2(VAR_1, VAR_2, "sprintf", VAR_0, FUNC_0(1)|FUNC_1());
  FUNC_2(VAR_1, VAR_2, "format", VAR_0, FUNC_0(1)|FUNC_1());
}
