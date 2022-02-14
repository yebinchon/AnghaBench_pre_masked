
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * pstate; } ;
struct TYPE_7__ {int numWorkers; struct TYPE_7__* parallelSlot; struct TYPE_7__* te; int pipeWrite; int pipeRead; } ;
typedef TYPE_1__ ParallelState ;
typedef int ArchiveHandle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 TYPE_2__ VAR_0 ;

void
FUNC_6(ArchiveHandle *VAR_1, ParallelState *VAR_2)
{
 int VAR_3;


 if (VAR_2->numWorkers == 1)
  return;


 FUNC_0(FUNC_1(VAR_2));


 for (VAR_3 = 0; VAR_3 < VAR_2->numWorkers; VAR_3++)
 {
  FUNC_3(VAR_2->parallelSlot[VAR_3].pipeRead);
  FUNC_3(VAR_2->parallelSlot[VAR_3].pipeWrite);
 }


 FUNC_2(VAR_2);





 VAR_0.pstate = ((void*)0);
 FUNC_5(((void*)0));


 FUNC_4(VAR_2->te);
 FUNC_4(VAR_2->parallelSlot);
 FUNC_4(VAR_2);
}
