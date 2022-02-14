
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {scalar_t__ iv; } ;
struct RBasic {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int FUNC_0 (int *,struct RObject*,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (int *,struct RBasic*) ;

void
FUNC_4(mrb_state *VAR_0, struct RObject *VAR_1, mrb_sym VAR_2, mrb_value VAR_3)
{
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  if (!VAR_1->iv) {
    VAR_1->iv = FUNC_1(VAR_0);
  }
  FUNC_2(VAR_0, VAR_1->iv, VAR_2, VAR_3);
  FUNC_3(VAR_0, (struct RBasic*)VAR_1);
}
