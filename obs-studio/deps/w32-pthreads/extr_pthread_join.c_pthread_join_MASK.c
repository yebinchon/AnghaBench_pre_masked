
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ x; } ;
struct TYPE_10__ {scalar_t__ detachState; void* exitStatus; int threadH; TYPE_1__ ptHandle; } ;
typedef TYPE_2__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
struct TYPE_11__ {scalar_t__ x; int * p; } ;
typedef TYPE_3__ pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__) ;
 scalar_t__ FUNC_2 (TYPE_3__,TYPE_3__) ;
 TYPE_3__ FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;

int
FUNC_6 (pthread_t VAR_6, void **VAR_7)
{
  int VAR_8;
  pthread_t VAR_9;
  ptw32_thread_t * VAR_10 = (ptw32_thread_t *) VAR_6.p;
  ptw32_mcs_local_node_t VAR_11;

  FUNC_4(&VAR_5, &VAR_11);

  if (((void*)0) == VAR_10
      || VAR_6.x != VAR_10->ptHandle.x)
    {
      VAR_8 = VAR_3;
    }
  else if (VAR_4 == VAR_10->detachState)
    {
      VAR_8 = VAR_1;
    }
  else
    {
      VAR_8 = 0;
    }

  FUNC_5(&VAR_11);

  if (VAR_8 == 0)
    {



      VAR_9 = FUNC_3();

      if (((void*)0) == VAR_9.p)
 {
   VAR_8 = VAR_2;
 }
      else if (FUNC_2 (VAR_9, VAR_6))
 {
   VAR_8 = VAR_0;
 }
      else
 {







   VAR_8 = FUNC_0 (VAR_10->threadH);

   if (0 == VAR_8)
     {
       if (VAR_7 != ((void*)0))
  {
    *VAR_7 = VAR_10->exitStatus;
  }






       VAR_8 = FUNC_1 (VAR_6);
     }
   else
     {
       VAR_8 = VAR_3;
     }
 }
    }

  return (VAR_8);

}
