
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
typedef int errbuf ;
struct TYPE_8__ {int * connCancel; } ;
struct TYPE_7__ {int numWorkers; TYPE_1__* parallelSlot; } ;
struct TYPE_6__ {scalar_t__ pid; TYPE_3__* AH; int pipeWrite; } ;
typedef TYPE_2__ ParallelState ;
typedef TYPE_3__ ArchiveHandle ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(ParallelState *VAR_2)
{
 int VAR_3;





 for (VAR_3 = 0; VAR_3 < VAR_2->numWorkers; VAR_3++)
  FUNC_4(VAR_2->parallelSlot[VAR_3].pipeWrite);






 for (VAR_3 = 0; VAR_3 < VAR_2->numWorkers; VAR_3++)
 {
  pid_t VAR_4 = VAR_2->parallelSlot[VAR_3].pid;

  if (VAR_4 != 0)
   FUNC_5(VAR_4, VAR_0);
 }
 FUNC_3(VAR_2);
}
