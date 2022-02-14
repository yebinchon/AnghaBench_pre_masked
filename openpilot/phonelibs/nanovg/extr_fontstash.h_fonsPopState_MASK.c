
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nstates; int errorUptr; int (* handleError ) (int ,int ,int ) ;} ;
typedef TYPE_1__ FONScontext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(FONScontext* VAR_1)
{
 if (VAR_1->nstates <= 1) {
  if (VAR_1->handleError)
   VAR_1->handleError(VAR_1->errorUptr, VAR_0, 0);
  return;
 }
 VAR_1->nstates--;
}
