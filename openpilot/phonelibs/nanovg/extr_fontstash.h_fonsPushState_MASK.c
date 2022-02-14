
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nstates; int * states; int errorUptr; int (* handleError ) (int ,int ,int ) ;} ;
typedef int FONSstate ;
typedef TYPE_1__ FONScontext ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(FONScontext* VAR_2)
{
 if (VAR_2->nstates >= VAR_0) {
  if (VAR_2->handleError)
   VAR_2->handleError(VAR_2->errorUptr, VAR_1, 0);
  return;
 }
 if (VAR_2->nstates > 0)
  FUNC_0(&VAR_2->states[VAR_2->nstates], &VAR_2->states[VAR_2->nstates-1], sizeof(FONSstate));
 VAR_2->nstates++;
}
