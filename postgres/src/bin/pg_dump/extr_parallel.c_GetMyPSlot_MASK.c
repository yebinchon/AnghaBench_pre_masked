
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ threadId; scalar_t__ pid; } ;
struct TYPE_5__ {int numWorkers; TYPE_2__* parallelSlot; } ;
typedef TYPE_1__ ParallelState ;
typedef TYPE_2__ ParallelSlot ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static ParallelSlot *
FUNC_2(ParallelState *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->numWorkers; VAR_1++)
 {



  if (VAR_0->parallelSlot[VAR_1].pid == FUNC_1())

   return &(VAR_0->parallelSlot[VAR_1]);
 }

 return ((void*)0);
}
