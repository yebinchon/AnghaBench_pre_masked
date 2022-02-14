
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mrb_context {int status; struct RFiber* fib; TYPE_5__* ci; int * stack; TYPE_5__* cibase; TYPE_5__* ciend; int * stbase; int * stend; int member_0; } ;
struct TYPE_14__ {TYPE_2__* irep; } ;
struct RProc {TYPE_3__ body; } ;
struct RFiber {struct mrb_context* cxt; } ;
struct RBasic {int dummy; } ;
typedef int mrb_value ;
struct TYPE_15__ {TYPE_1__* c; } ;
typedef TYPE_4__ mrb_state ;
struct TYPE_16__ {int pc; struct RProc* proc; int target_class; int * stackent; } ;
typedef TYPE_5__ mrb_callinfo ;
struct TYPE_13__ {size_t nregs; int iseq; } ;
struct TYPE_12__ {int * stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct RProc*) ;
 int FUNC_1 (struct RProc*) ;
 int FUNC_2 (int ) ;
 struct RFiber* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,size_t) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int,int) ;
 int FUNC_6 (TYPE_4__*,struct RBasic*,struct RBasic*) ;
 int FUNC_7 (TYPE_4__*,char*,int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*,size_t) ;
 scalar_t__ FUNC_9 (int ) ;
 struct RProc* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*,int ,char*) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_5, mrb_value VAR_6)
{
  static const struct mrb_context VAR_7 = { 0 };
  struct RFiber *VAR_8 = FUNC_3(VAR_6);
  struct mrb_context *VAR_9;
  struct RProc *VAR_10;
  mrb_callinfo *VAR_11;
  mrb_value VAR_12;
  size_t VAR_13;

  FUNC_7(VAR_5, "&!", &VAR_12);

  if (VAR_8->cxt) {
    FUNC_11(VAR_5, VAR_1, "cannot initialize twice");
  }
  VAR_10 = FUNC_10(VAR_12);
  if (FUNC_0(VAR_10)) {
    FUNC_11(VAR_5, VAR_0, "tried to create Fiber from C defined method");
  }

  VAR_9 = (struct mrb_context*)FUNC_8(VAR_5, sizeof(struct mrb_context));
  *VAR_9 = VAR_7;
  VAR_8->cxt = VAR_9;


  VAR_13 = VAR_3;
  if (VAR_10->body.irep->nregs > VAR_13) {
    VAR_13 += VAR_10->body.irep->nregs;
  }
  VAR_9->stbase = (mrb_value *)FUNC_8(VAR_5, VAR_13*sizeof(mrb_value));
  VAR_9->stend = VAR_9->stbase + VAR_13;
  VAR_9->stack = VAR_9->stbase;
  FUNC_4(VAR_9->stbase, 0, VAR_13 * sizeof(mrb_value));



  VAR_9->stack[0] = VAR_5->c->stack[0];


  VAR_9->cibase = (mrb_callinfo *)FUNC_5(VAR_5, VAR_2, sizeof(mrb_callinfo));
  VAR_9->ciend = VAR_9->cibase + VAR_2;
  VAR_9->ci = VAR_9->cibase;
  VAR_9->ci->stackent = VAR_9->stack;


  VAR_11 = VAR_9->ci;
  VAR_11->target_class = FUNC_1(VAR_10);
  VAR_11->proc = VAR_10;
  FUNC_6(VAR_5, (struct RBasic*)FUNC_9(VAR_6), (struct RBasic*)VAR_10);
  VAR_11->pc = VAR_10->body.irep->iseq;
  VAR_11[1] = VAR_11[0];
  VAR_9->ci++;

  VAR_9->fib = VAR_8;
  VAR_9->status = VAR_4;

  return VAR_6;
}
