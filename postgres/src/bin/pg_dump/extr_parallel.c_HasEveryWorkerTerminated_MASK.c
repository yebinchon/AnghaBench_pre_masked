
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numWorkers; TYPE_1__* parallelSlot; } ;
struct TYPE_4__ {scalar_t__ workerStatus; } ;
typedef TYPE_2__ ParallelState ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(ParallelState *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->numWorkers; VAR_2++)
 {
  if (VAR_1->parallelSlot[VAR_2].workerStatus != VAR_0)
   return 0;
 }
 return 1;
}
