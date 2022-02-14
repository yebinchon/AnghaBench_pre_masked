
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filledSemaphore; int freeSemaphore; int wasStopped; int wasStarted; int canStart; int thread; void* csWasEntered; void* csWasInitialized; void* wasCreated; } ;
typedef TYPE_1__ CMtSync ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(CMtSync *VAR_1)
{
  VAR_1->wasCreated = VAR_0;
  VAR_1->csWasInitialized = VAR_0;
  VAR_1->csWasEntered = VAR_0;
  FUNC_2(&VAR_1->thread);
  FUNC_0(&VAR_1->canStart);
  FUNC_0(&VAR_1->wasStarted);
  FUNC_0(&VAR_1->wasStopped);
  FUNC_1(&VAR_1->freeSemaphore);
  FUNC_1(&VAR_1->filledSemaphore);
}
