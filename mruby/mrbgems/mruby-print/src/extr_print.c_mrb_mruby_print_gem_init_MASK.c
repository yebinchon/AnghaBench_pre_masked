
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_4__ {struct RClass* kernel_module; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int VAR_0 ;

void
FUNC_2(mrb_state* VAR_1)
{
  struct RClass *VAR_2;
  VAR_2 = VAR_1->kernel_module;
  FUNC_1(VAR_1, VAR_2, "__printstr__", VAR_0, FUNC_0(1));
}
