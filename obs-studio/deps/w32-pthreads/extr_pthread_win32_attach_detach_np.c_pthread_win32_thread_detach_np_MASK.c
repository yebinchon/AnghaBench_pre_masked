
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ detachState; int ptHandle; TYPE_1__* robustMxList; int state; int stateLock; } ;
typedef TYPE_3__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
typedef TYPE_4__* pthread_mutex_t ;
struct TYPE_13__ {int key; } ;
struct TYPE_12__ {int event; TYPE_2__* robustNode; } ;
struct TYPE_10__ {int stateInconsistent; } ;
struct TYPE_9__ {TYPE_4__* mx; } ;
typedef int PTW32_INTERLOCKED_LONGPTR ;
typedef int PTW32_INTERLOCKED_LONG ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_4__**,TYPE_3__*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_8 (int ) ;

BOOL
FUNC_9 ()
{
  if (VAR_3)
    {




      ptw32_thread_t * VAR_5 = (ptw32_thread_t *) FUNC_3 (VAR_4);

      if (VAR_5 != ((void*)0))
 {
          ptw32_mcs_local_node_t VAR_6;
   FUNC_4 (VAR_5->ptHandle);

   FUNC_5 (&VAR_5->stateLock, &VAR_6);
   VAR_5->state = VAR_1;




   FUNC_6 (&VAR_6);




          while (VAR_5->robustMxList != ((void*)0))
            {
              pthread_mutex_t VAR_7 = VAR_5->robustMxList->mx;
              FUNC_7(&VAR_7, VAR_5);
              (void) FUNC_0(
                       (PTW32_INTERLOCKED_LONGPTR)&VAR_7->robustNode->stateInconsistent,
                       (PTW32_INTERLOCKED_LONG)-1);





              FUNC_1(VAR_7->event);
            }


   if (VAR_5->detachState == VAR_0)
     {
       FUNC_8 (VAR_5->ptHandle);

       FUNC_2 (VAR_4->key, ((void*)0));
     }
 }
    }

  return VAR_2;
}
