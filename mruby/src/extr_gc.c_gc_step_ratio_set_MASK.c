
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_5__ {int step_ratio; } ;
struct TYPE_6__ {TYPE_1__ gc; } ;
typedef TYPE_2__ mrb_state ;
typedef scalar_t__ mrb_int ;


 int FUNC_0 (TYPE_2__*,char*,scalar_t__*) ;
 int FUNC_1 () ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2;

  FUNC_0(VAR_0, "i", &VAR_2);
  VAR_0->gc.step_ratio = (int)VAR_2;
  return FUNC_1();
}
