
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cancelType; scalar_t__ cancelState; int cancelEvent; int state; int stateLock; } ;
typedef TYPE_1__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
struct TYPE_5__ {scalar_t__ p; } ;
typedef TYPE_2__ pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_2__ FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int
FUNC_6 (int VAR_8, int *VAR_9)
{
  ptw32_mcs_local_node_t VAR_10;
  int VAR_11 = 0;
  pthread_t VAR_12 = FUNC_2 ();
  ptw32_thread_t * VAR_13 = (ptw32_thread_t *) VAR_12.p;

  if (VAR_13 == ((void*)0)
      || (VAR_8 != VAR_2
   && VAR_8 != VAR_1))
    {
      return VAR_0;
    }




  FUNC_3 (&VAR_13->stateLock, &VAR_10);

  if (VAR_9 != ((void*)0))
    {
      *VAR_9 = VAR_13->cancelType;
    }

  VAR_13->cancelType = VAR_8;




  if (VAR_13->cancelState == VAR_4
      && VAR_8 == VAR_1
      && FUNC_1 (VAR_13->cancelEvent, 0) == VAR_7)
    {
      VAR_13->state = VAR_6;
      VAR_13->cancelState = VAR_3;
      FUNC_0 (VAR_13->cancelEvent);
      FUNC_4 (&VAR_10);
      FUNC_5 (VAR_5);


    }

  FUNC_4 (&VAR_10);

  return (VAR_11);

}
