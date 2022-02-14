
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_7__ {int jmp; int eException_class; int exc; } ;
typedef TYPE_1__ mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,char*) ;

void
FUNC_8(mrb_state *VAR_1, mrb_value VAR_2)
{
  if (FUNC_2(VAR_2)) {
    VAR_1->exc = FUNC_5(VAR_2);
  }
  else {
    if (!FUNC_4(VAR_1, VAR_2, VAR_1->eException_class)) {
      FUNC_7(VAR_1, VAR_0, "exception object expected");
    }
    FUNC_3(VAR_1, VAR_2);
  }
  if (!VAR_1->jmp) {
    FUNC_6(VAR_1, VAR_2);
    FUNC_1();
  }
  FUNC_0(VAR_1->jmp);
}
