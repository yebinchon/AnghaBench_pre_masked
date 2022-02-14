
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_3__ {scalar_t__ numProcessedBlocks; void* needStart; int freeSemaphore; int filledSemaphore; int wasStopped; scalar_t__ csWasEntered; int cs; void* stopWriting; int thread; } ;
typedef TYPE_1__ CMtSync ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* VAR_1 ;

void FUNC_5(CMtSync *VAR_2)
{
  UInt32 VAR_3 = VAR_2->numProcessedBlocks;
  if (!FUNC_4(&VAR_2->thread) || VAR_2->needStart)
    return;
  VAR_2->stopWriting = VAR_1;
  if (VAR_2->csWasEntered)
  {
    FUNC_0(&VAR_2->cs);
    VAR_2->csWasEntered = VAR_0;
  }
  FUNC_2(&VAR_2->freeSemaphore);

  FUNC_1(&VAR_2->wasStopped);

  while (VAR_3++ != VAR_2->numProcessedBlocks)
  {
    FUNC_3(&VAR_2->filledSemaphore);
    FUNC_2(&VAR_2->freeSemaphore);
  }
  VAR_2->needStart = VAR_1;
}
