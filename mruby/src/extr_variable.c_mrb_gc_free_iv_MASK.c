
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {scalar_t__ iv; } ;
typedef int mrb_state ;


 int FUNC_0 (int *,scalar_t__) ;

void
FUNC_1(mrb_state *VAR_0, struct RObject *VAR_1)
{
  if (VAR_1->iv) {
    FUNC_0(VAR_0, VAR_1->iv);
  }
}
