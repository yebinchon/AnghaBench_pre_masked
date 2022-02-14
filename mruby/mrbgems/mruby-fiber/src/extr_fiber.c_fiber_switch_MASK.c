
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct mrb_context {int status; TYPE_2__* ci; int vmexec; int * stack; TYPE_1__* cibase; struct mrb_context* prev; } ;
typedef int mrb_value ;
struct TYPE_16__ {struct mrb_context* c; struct mrb_context* root_c; } ;
typedef TYPE_3__ mrb_state ;
typedef int mrb_int ;
typedef scalar_t__ mrb_bool ;
typedef enum mrb_fiber_state { ____Placeholder_mrb_fiber_state } mrb_fiber_state ;
struct TYPE_15__ {int pc; int proc; } ;
struct TYPE_14__ {int argc; } ;
struct TYPE_13__ {int * stack; } ;


 int VAR_0 ;
 int FUNC_0 (struct mrb_context*) ;
 int VAR_1 ;




 TYPE_12__* FUNC_1 (int ) ;
 int VAR_2 ;
 struct mrb_context* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,struct mrb_context*) ;
 int FUNC_4 (TYPE_3__*,int const*,int) ;
 int FUNC_5 (TYPE_3__*,struct mrb_context*) ;
 int FUNC_6 (TYPE_3__*,int ,char*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_3, mrb_value VAR_4, mrb_int VAR_5, const mrb_value *VAR_6, mrb_bool VAR_7, mrb_bool VAR_8)
{
  struct mrb_context *VAR_9 = FUNC_2(VAR_3, VAR_4);
  struct mrb_context *VAR_10 = VAR_3->c;
  enum mrb_fiber_state VAR_11;
  mrb_value VAR_12;

  FUNC_3(VAR_3, VAR_9);
  VAR_11 = VAR_9->status;
  switch (VAR_11) {
  case 128:
    if (VAR_7) {
      FUNC_6(VAR_3, VAR_0, "resuming transferred fiber");
    }
    break;
  case 130:
  case 131:
    FUNC_6(VAR_3, VAR_0, "double resume");
    break;
  case 129:
    FUNC_6(VAR_3, VAR_0, "resuming dead fiber");
    break;
  default:
    break;
  }
  VAR_10->status = VAR_7 ? 131 : 128;
  VAR_9->prev = VAR_7 ? VAR_3->c : (VAR_9->prev ? VAR_9->prev : VAR_3->root_c);
  FUNC_5(VAR_3, VAR_9);
  if (VAR_11 == VAR_1) {
    mrb_value *VAR_13, *VAR_14;

    if (!VAR_9->ci->proc) {
      FUNC_6(VAR_3, VAR_0, "double resume (current)");
    }
    FUNC_7(VAR_3, VAR_5+2);
    VAR_13 = VAR_9->stack+1;
    VAR_14 = VAR_13 + VAR_5;
    while (VAR_13<VAR_14) {
      *VAR_13++ = *VAR_6++;
    }
    VAR_9->cibase->argc = (int)VAR_5;
    VAR_12 = VAR_9->stack[0] = FUNC_1(VAR_9->ci->proc)->stack[0];
  }
  else {
    VAR_12 = FUNC_4(VAR_3, VAR_6, VAR_5);
  }

  if (VAR_8) {
    VAR_9->vmexec = VAR_2;
    VAR_12 = FUNC_8(VAR_3, VAR_9->ci[-1].proc, VAR_9->ci->pc);
    VAR_3->c = VAR_10;
  }
  else {
    FUNC_0(VAR_9);
  }
  return VAR_12;
}
