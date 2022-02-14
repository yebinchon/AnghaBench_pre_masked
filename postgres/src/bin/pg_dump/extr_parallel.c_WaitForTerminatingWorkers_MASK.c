
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_6__ {scalar_t__ pid; scalar_t__ workerStatus; uintptr_t hThread; } ;
struct TYPE_5__ {int numWorkers; int ** te; TYPE_2__* parallelSlot; } ;
typedef TYPE_1__ ParallelState ;
typedef TYPE_2__ ParallelSlot ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int,scalar_t__*,int,int ) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int*) ;

__attribute__((used)) static void
FUNC_7(ParallelState *VAR_5)
{
 while (!FUNC_2(VAR_5))
 {
  ParallelSlot *VAR_6 = ((void*)0);
  int VAR_7;



  int VAR_8;
  pid_t VAR_9 = FUNC_6(&VAR_8);


  for (VAR_7 = 0; VAR_7 < VAR_5->numWorkers; VAR_7++)
  {
   VAR_6 = &(VAR_5->parallelSlot[VAR_7]);
   if (VAR_6->pid == VAR_9)
   {
    VAR_6->pid = 0;
    break;
   }
  }
  FUNC_0(VAR_7 < VAR_5->numWorkers);
  VAR_6->workerStatus = VAR_4;
  VAR_5->te[VAR_7] = ((void*)0);
 }
}
