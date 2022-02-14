
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numWorkers; TYPE_1__* parallelSlot; } ;
struct TYPE_4__ {scalar_t__ workerStatus; } ;
typedef TYPE_2__ ParallelState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(ParallelState *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->numWorkers; VAR_3++)
 {
  if (VAR_2->parallelSlot[VAR_3].workerStatus == VAR_1)
   return VAR_3;
 }
 return VAR_0;
}
