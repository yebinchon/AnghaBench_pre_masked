
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_5__ {int filledSemaphore; int freeSemaphore; int wasStopped; scalar_t__ numProcessedBlocks; scalar_t__ stopWriting; scalar_t__ exit; int wasStarted; int canStart; } ;
struct TYPE_6__ {int hashSync; TYPE_1__ btSync; } ;
typedef TYPE_1__ CMtSync ;
typedef TYPE_2__ CMatchFinderMt ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(CMatchFinderMt *VAR_0)
{
  CMtSync *VAR_1 = &VAR_0->btSync;
  for (;;)
  {
    UInt32 VAR_2 = 0;
    FUNC_2(&VAR_1->canStart);
    FUNC_1(&VAR_1->wasStarted);
    for (;;)
    {
      if (VAR_1->exit)
        return;
      if (VAR_1->stopWriting)
      {
        VAR_1->numProcessedBlocks = VAR_2;
        FUNC_3(&VAR_0->hashSync);
        FUNC_1(&VAR_1->wasStopped);
        break;
      }
      FUNC_5(&VAR_1->freeSemaphore);
      FUNC_0(VAR_0, VAR_2++);
      FUNC_4(&VAR_1->filledSemaphore);
    }
  }
}
