
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int member_1; int member_0; } ;
typedef int fd_set ;
struct TYPE_5__ {int numWorkers; TYPE_1__* parallelSlot; } ;
struct TYPE_4__ {scalar_t__ workerStatus; int pipeRead; } ;
typedef TYPE_2__ ParallelState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static char *
FUNC_8(ParallelState *VAR_1, bool VAR_2, int *VAR_3)
{
 int VAR_4;
 fd_set VAR_5;
 int VAR_6 = -1;
 struct timeval VAR_7 = {0, 0};


 FUNC_3(&VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_1->numWorkers; VAR_4++)
 {
  if (VAR_1->parallelSlot[VAR_4].workerStatus == VAR_0)
   continue;
  FUNC_2(VAR_1->parallelSlot[VAR_4].pipeRead, &VAR_5);
  if (VAR_1->parallelSlot[VAR_4].pipeRead > VAR_6)
   VAR_6 = VAR_1->parallelSlot[VAR_4].pipeRead;
 }

 if (VAR_2)
 {
  VAR_4 = FUNC_7(VAR_6, &VAR_5);
  FUNC_0(VAR_4 != 0);
 }
 else
 {
  if ((VAR_4 = FUNC_6(VAR_6 + 1, &VAR_5, ((void*)0), ((void*)0), &VAR_7)) == 0)
   return ((void*)0);
 }

 if (VAR_4 < 0)
  FUNC_4("select() failed: %m");

 for (VAR_4 = 0; VAR_4 < VAR_1->numWorkers; VAR_4++)
 {
  char *VAR_8;

  if (!FUNC_1(VAR_1->parallelSlot[VAR_4].pipeRead, &VAR_5))
   continue;
  VAR_8 = FUNC_5(VAR_1->parallelSlot[VAR_4].pipeRead);
  *VAR_3 = VAR_4;
  return VAR_8;
 }
 FUNC_0(0);
 return ((void*)0);
}
