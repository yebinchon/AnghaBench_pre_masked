
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; scalar_t__ cancelState; int cancelEvent; int stateLock; } ;
typedef TYPE_1__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
struct TYPE_5__ {scalar_t__ p; } ;
typedef TYPE_2__ pthread_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_2__ FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void
FUNC_5 (void)
{
  ptw32_mcs_local_node_t VAR_4;
  pthread_t VAR_5 = FUNC_1 ();
  ptw32_thread_t * VAR_6 = (ptw32_thread_t *) VAR_5.p;

  if (VAR_6 == ((void*)0))
    {
      return;
    }






  if (VAR_6->state != VAR_2)
    {
      return;
    }

  FUNC_2 (&VAR_6->stateLock, &VAR_4);

  if (VAR_6->cancelState != VAR_0)
    {
      FUNC_0(VAR_6->cancelEvent);
      VAR_6->state = VAR_3;
      VAR_6->cancelState = VAR_0;
      FUNC_3 (&VAR_4);
      FUNC_4 (VAR_1);

    }

  FUNC_3 (&VAR_4);
}
