
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int codesize; } ;
struct TYPE_4__ {int ncode; TYPE_2__* p; int L; } ;
typedef TYPE_1__ CompileState ;


 int FUNC_0 (int ,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1 (CompileState *VAR_0) {
  int VAR_1 = VAR_0->p->codesize;
  if (VAR_0->ncode >= VAR_1)
    FUNC_0(VAR_0->L, VAR_0->p, VAR_1 * 2);
  return VAR_0->ncode++;
}
