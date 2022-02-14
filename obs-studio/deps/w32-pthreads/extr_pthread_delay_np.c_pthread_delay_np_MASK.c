
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {long tv_sec; long tv_nsec; } ;
struct TYPE_4__ {scalar_t__ cancelState; scalar_t__ state; int stateLock; int cancelEvent; } ;
typedef TYPE_1__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
struct TYPE_5__ {int * p; } ;
typedef TYPE_2__ pthread_t ;
typedef long DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (long) ;
 long VAR_7 ;
 long VAR_8 ;
 long FUNC_1 (int ,long) ;
 TYPE_2__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

int
FUNC_7 (struct timespec *VAR_9)
{
  DWORD VAR_10;
  DWORD VAR_11;
  DWORD VAR_12;
  DWORD VAR_13;
  pthread_t VAR_14;
  ptw32_thread_t * VAR_15;

  if (VAR_9 == ((void*)0))
    {
      return VAR_0;
    }

  if (VAR_9->tv_sec == 0L && VAR_9->tv_nsec == 0L)
    {
      FUNC_3 ();
      FUNC_0 (0);
      FUNC_3 ();
      return (0);
    }


  VAR_11 = (DWORD)VAR_9->tv_sec * 1000L;


  VAR_12 = (VAR_9->tv_nsec + 999999L) / 1000000L;
  if (0 > (VAR_10 = VAR_11 + VAR_12))
    {
      return VAR_0;
    }





  if (((void*)0) == (VAR_14 = FUNC_2 ()).p)
    {
      return VAR_1;
    }

  VAR_15 = (ptw32_thread_t *) VAR_14.p;

  if (VAR_15->cancelState == VAR_4)
    {




      if (VAR_7 ==
   (VAR_13 = FUNC_1 (VAR_15->cancelEvent, VAR_10)))
 {
          ptw32_mcs_local_node_t VAR_16;



   FUNC_4 (&VAR_15->stateLock, &VAR_16);
   if (VAR_15->state < VAR_6)
     {
       VAR_15->state = VAR_6;
       VAR_15->cancelState = VAR_3;
       FUNC_5 (&VAR_16);

       FUNC_6 (VAR_5);
     }

   FUNC_5 (&VAR_16);
   return VAR_2;
 }
      else if (VAR_13 != VAR_8)
 {
   return VAR_0;
 }
    }
  else
    {
      FUNC_0 (VAR_10);
    }

  return (0);
}
