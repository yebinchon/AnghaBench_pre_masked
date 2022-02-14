
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mrb_irep {int dummy; } ;
struct TYPE_8__ {struct mrb_irep* irep; } ;
struct RProc {TYPE_3__ body; struct RProc* upper; } ;
struct TYPE_9__ {TYPE_2__* c; } ;
typedef TYPE_4__ mrb_state ;
struct TYPE_7__ {TYPE_1__* ci; } ;
struct TYPE_6__ {struct RProc* proc; } ;


 scalar_t__ FUNC_0 (struct RProc*) ;

__attribute__((used)) static struct mrb_irep *
FUNC_1(mrb_state *VAR_0, int VAR_1)
{
  struct RProc *VAR_2 = VAR_0->c->ci[-1].proc;

  while (VAR_1--) {
    if (!VAR_2) return ((void*)0);
    VAR_2 = VAR_2->upper;
  }
  if (!VAR_2) return ((void*)0);
  if (FUNC_0(VAR_2)) {
    return ((void*)0);
  }
  return VAR_2->body.irep;
}
