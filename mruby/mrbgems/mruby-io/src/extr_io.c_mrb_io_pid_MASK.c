
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {scalar_t__ pid; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 struct mrb_io* FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;

mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct mrb_io *VAR_2;
  VAR_2 = FUNC_0(VAR_0, VAR_1);

  if (VAR_2->pid > 0) {
    return FUNC_1(VAR_2->pid);
  }

  return FUNC_2();
}
