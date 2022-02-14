
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kernel_module; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,char*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,char*,int ,int ) ;

void
FUNC_6(mrb_state* VAR_2)
{
  FUNC_5(VAR_2, VAR_2->kernel_module, "eval", VAR_0, FUNC_0(1, 3));
  FUNC_4(VAR_2, FUNC_3(VAR_2, "BasicObject"), "instance_eval", VAR_1, FUNC_2(3)|FUNC_1());
}
