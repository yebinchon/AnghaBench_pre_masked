
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nstates; int * states; } ;
typedef int NVGstate ;
typedef TYPE_1__ NVGcontext ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

void FUNC_1(NVGcontext* VAR_1)
{
 if (VAR_1->nstates >= VAR_0)
  return;
 if (VAR_1->nstates > 0)
  FUNC_0(&VAR_1->states[VAR_1->nstates], &VAR_1->states[VAR_1->nstates-1], sizeof(NVGstate));
 VAR_1->nstates++;
}
