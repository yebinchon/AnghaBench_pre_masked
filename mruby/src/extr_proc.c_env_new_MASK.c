
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct REnv {TYPE_1__* cxt; int stack; int mid; } ;
struct TYPE_7__ {TYPE_1__* c; } ;
typedef TYPE_2__ mrb_state ;
typedef int mrb_int ;
struct TYPE_8__ {int argc; int mid; } ;
typedef TYPE_3__ mrb_callinfo ;
struct TYPE_6__ {int stack; TYPE_3__* ci; } ;


 int FUNC_0 (struct REnv*,int) ;
 int FUNC_1 (struct REnv*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static struct REnv*
FUNC_3(mrb_state *VAR_1, mrb_int VAR_2)
{
  struct REnv *VAR_3;
  mrb_callinfo *VAR_4 = VAR_1->c->ci;
  int VAR_5;

  VAR_3 = (struct REnv*)FUNC_2(VAR_1, VAR_0, ((void*)0));
  FUNC_1(VAR_3, VAR_2);
  VAR_5 = VAR_4->argc;
  if (VAR_4->argc < 0) VAR_5 = 2;
  else VAR_5 += 1;
  FUNC_0(VAR_3, VAR_5);
  VAR_3->mid = VAR_4->mid;
  VAR_3->stack = VAR_1->c->stack;
  VAR_3->cxt = VAR_1->c;

  return VAR_3;
}
