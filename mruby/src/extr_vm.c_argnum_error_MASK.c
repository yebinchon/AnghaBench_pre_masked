
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_10__ {TYPE_2__* c; } ;
typedef TYPE_3__ mrb_state ;
typedef scalar_t__ mrb_int ;
struct TYPE_9__ {TYPE_1__* ci; int * stack; } ;
struct TYPE_8__ {scalar_t__ argc; scalar_t__ mid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_5(mrb_state *VAR_1, mrb_int VAR_2)
{
  mrb_value VAR_3;
  mrb_value VAR_4;
  mrb_int VAR_5 = VAR_1->c->ci->argc;

  if (VAR_5 < 0) {
    mrb_value VAR_6 = VAR_1->c->stack[1];
    if (FUNC_1(VAR_6)) {
      VAR_5 = FUNC_0(VAR_6);
    }
  }
  if (VAR_1->c->ci->mid) {
    VAR_4 = FUNC_4(VAR_1, "'%n': wrong number of arguments (%i for %i)",
                     VAR_1->c->ci->mid, VAR_5, VAR_2);
  }
  else {
    VAR_4 = FUNC_4(VAR_1, "wrong number of arguments (%i for %i)", VAR_5, VAR_2);
  }
  VAR_3 = FUNC_2(VAR_1, VAR_0, VAR_4);
  FUNC_3(VAR_1, VAR_3);
}
