
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* irep; } ;
struct RProc {TYPE_2__ body; } ;
struct TYPE_7__ {int argc; struct RProc* proc; } ;
typedef TYPE_3__ mrb_callinfo ;
struct TYPE_5__ {int nregs; } ;


 int FUNC_0 (struct RProc*) ;

__attribute__((used)) static int
FUNC_1(mrb_callinfo *VAR_0)
{
  struct RProc *VAR_1 = VAR_0->proc;
  int VAR_2 = 0;

  if (!VAR_1) {
    if (VAR_0->argc < 0) return 3;
    return VAR_0->argc+2;
  }
  if (!FUNC_0(VAR_1) && VAR_1->body.irep) {
    VAR_2 = VAR_1->body.irep->nregs;
  }
  if (VAR_0->argc < 0) {
    if (VAR_2 < 3) VAR_2 = 3;
  }
  if (VAR_0->argc > VAR_2) {
    VAR_2 = VAR_0->argc + 2;
  }
  return VAR_2;
}
