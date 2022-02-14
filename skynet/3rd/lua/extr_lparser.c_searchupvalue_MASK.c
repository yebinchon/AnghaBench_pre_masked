
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
typedef TYPE_2__ Upvaldesc ;
struct TYPE_7__ {int nups; TYPE_1__* f; } ;
struct TYPE_5__ {TYPE_2__* upvalues; } ;
typedef int TString ;
typedef TYPE_3__ FuncState ;


 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1 (FuncState *VAR_0, TString *VAR_1) {
  int VAR_2;
  Upvaldesc *VAR_3 = VAR_0->f->upvalues;
  for (VAR_2 = 0; VAR_2 < VAR_0->nups; VAR_2++) {
    if (FUNC_0(VAR_3[VAR_2].name, VAR_1)) return VAR_2;
  }
  return -1;
}
