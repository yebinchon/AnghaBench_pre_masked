
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ x; TYPE_1__* p; } ;
struct TYPE_6__ {TYPE_3__ ptHandle; int * cancelEvent; int * robustMxList; scalar_t__ robustMxListLock; scalar_t__ threadLock; scalar_t__ stateLock; int cancelType; int cancelState; int detachState; int sched_priority; scalar_t__ seqNumber; } ;
typedef TYPE_1__ ptw32_thread_t ;
struct TYPE_7__ {scalar_t__ x; TYPE_1__* p; int member_1; int * member_0; } ;
typedef TYPE_2__ pthread_t ;


 int * FUNC_0 (int ,int,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int) ;
 TYPE_2__ FUNC_2 () ;
 int FUNC_3 (TYPE_3__) ;
 scalar_t__ VAR_6 ;

pthread_t
FUNC_4 (void)
{
  pthread_t VAR_7;
  pthread_t VAR_8 = {((void*)0), 0};
  ptw32_thread_t * VAR_9;




  VAR_7 = FUNC_2 ();

  if (((void*)0) != VAR_7.p)
    {
      VAR_9 = (ptw32_thread_t *) VAR_7.p;
    }
  else
    {

      VAR_9 = (ptw32_thread_t *) FUNC_1 (1, sizeof(ptw32_thread_t));

      if (VAR_9 == ((void*)0))
 {
   return VAR_8;
 }


      VAR_7.p = VAR_9->ptHandle.p = VAR_9;
      VAR_7.x = VAR_9->ptHandle.x = 0;
    }


  VAR_9->seqNumber = ++VAR_6;
  VAR_9->sched_priority = VAR_5;
  VAR_9->detachState = VAR_2;
  VAR_9->cancelState = VAR_1;
  VAR_9->cancelType = VAR_0;
  VAR_9->stateLock = 0;
  VAR_9->threadLock = 0;
  VAR_9->robustMxListLock = 0;
  VAR_9->robustMxList = ((void*)0);
  VAR_9->cancelEvent = FUNC_0 (0, (int) VAR_4,
     (int) VAR_3,
     ((void*)0));

  if (VAR_9->cancelEvent == ((void*)0))
    {
      FUNC_3 (VAR_9->ptHandle);
      return VAR_8;
    }

  return VAR_7;

}
