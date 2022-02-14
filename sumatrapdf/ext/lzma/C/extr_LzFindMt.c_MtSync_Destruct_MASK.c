
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* wasCreated; int filledSemaphore; int freeSemaphore; int wasStopped; int wasStarted; int canStart; void* csWasInitialized; int cs; int thread; scalar_t__ needStart; int exit; } ;
typedef TYPE_1__ CMtSync ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_1 ;

void FUNC_8(CMtSync *VAR_2)
{
  if (FUNC_7(&VAR_2->thread))
  {
    FUNC_3(VAR_2);
    VAR_2->exit = VAR_1;
    if (VAR_2->needStart)
      FUNC_2(&VAR_2->canStart);
    FUNC_6(&VAR_2->thread);
    FUNC_5(&VAR_2->thread);
  }
  if (VAR_2->csWasInitialized)
  {
    FUNC_0(&VAR_2->cs);
    VAR_2->csWasInitialized = VAR_0;
  }

  FUNC_1(&VAR_2->canStart);
  FUNC_1(&VAR_2->wasStarted);
  FUNC_1(&VAR_2->wasStopped);
  FUNC_4(&VAR_2->freeSemaphore);
  FUNC_4(&VAR_2->filledSemaphore);

  VAR_2->wasCreated = VAR_0;
}
