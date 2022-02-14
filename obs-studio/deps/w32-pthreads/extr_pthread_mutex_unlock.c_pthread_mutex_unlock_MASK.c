
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pthread_t ;
typedef TYPE_2__* pthread_mutex_t ;
struct TYPE_10__ {int * p; } ;
struct TYPE_9__ {int kind; scalar_t__ recursive_count; int event; int lock_idx; TYPE_1__* robustNode; TYPE_5__ ownerThread; } ;
struct TYPE_8__ {int stateInconsistent; } ;
typedef int PTW32_INTERLOCKED_LONGPTR ;
typedef int PTW32_INTERLOCKED_LONG ;
typedef scalar_t__ LONG ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_5__,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__**,int *) ;

int
FUNC_6 (pthread_mutex_t * VAR_8)
{
  int VAR_9 = 0;
  int VAR_10;
  pthread_mutex_t VAR_11;





  VAR_11 = *VAR_8;






  if (VAR_11 < VAR_2)
    {
      VAR_10 = VAR_11->kind;

      if (VAR_10 >= 0)
        {
          if (VAR_10 == VAR_4)
     {
       LONG VAR_12;

       VAR_12 = (LONG) FUNC_1 ((PTW32_INTERLOCKED_LONGPTR)&VAR_11->lock_idx,
           (PTW32_INTERLOCKED_LONG)0);
       if (VAR_12 != 0)
         {
           if (VAR_12 < 0)
      {



        if (FUNC_2 (VAR_11->event) == 0)
          {
            VAR_9 = VAR_0;
          }
      }
         }
     }
          else
     {
       if (FUNC_3 (VAR_11->ownerThread, FUNC_4()))
         {
           if (VAR_10 != VAR_5
        || 0 == --VAR_11->recursive_count)
      {
        VAR_11->ownerThread.p = ((void*)0);

        if ((LONG) FUNC_1 ((PTW32_INTERLOCKED_LONGPTR)&VAR_11->lock_idx,
                 (PTW32_INTERLOCKED_LONG)0) < 0L)
          {

            if (FUNC_2 (VAR_11->event) == 0)
       {
         VAR_9 = VAR_0;
       }
          }
      }
         }
       else
         {
           VAR_9 = VAR_1;
         }
     }
        }
      else
        {

          pthread_t VAR_13 = FUNC_4();
          VAR_10 = -VAR_10 - 1;





          if (FUNC_3 (VAR_11->ownerThread, VAR_13))
            {
              FUNC_0((PTW32_INTERLOCKED_LONGPTR) &VAR_11->robustNode->stateInconsistent,
                                                      (PTW32_INTERLOCKED_LONG)VAR_7,
                                                      (PTW32_INTERLOCKED_LONG)VAR_6);
              if (VAR_4 == VAR_10)
                {
                  FUNC_5(VAR_8, ((void*)0));

                  if ((LONG) FUNC_1((PTW32_INTERLOCKED_LONGPTR) &VAR_11->lock_idx,
                                                             (PTW32_INTERLOCKED_LONG) 0) < 0)
                    {



                      if (FUNC_2 (VAR_11->event) == 0)
                        {
                          VAR_9 = VAR_0;
                        }
                    }
                }
              else
                {
                  if (VAR_10 != VAR_5
                      || 0 == --VAR_11->recursive_count)
                    {
                      FUNC_5(VAR_8, ((void*)0));

                      if ((LONG) FUNC_1((PTW32_INTERLOCKED_LONGPTR) &VAR_11->lock_idx,
                                                                 (PTW32_INTERLOCKED_LONG) 0) < 0)
                        {



                          if (FUNC_2 (VAR_11->event) == 0)
                            {
                              VAR_9 = VAR_0;
                            }
                        }
                    }
                }
            }
          else
            {
              VAR_9 = VAR_1;
            }
        }
    }
  else if (VAR_11 != VAR_3)
    {
      VAR_9 = VAR_0;
    }

  return (VAR_9);
}
