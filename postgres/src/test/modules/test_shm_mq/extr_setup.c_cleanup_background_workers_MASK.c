
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nworkers; int * handle; } ;
typedef TYPE_1__ worker_state ;
typedef int dsm_segment ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(dsm_segment *VAR_0, Datum VAR_1)
{
 worker_state *VAR_2 = (worker_state *) FUNC_0(VAR_1);

 while (VAR_2->nworkers > 0)
 {
  --VAR_2->nworkers;
  FUNC_1(VAR_2->handle[VAR_2->nworkers]);
 }
}
