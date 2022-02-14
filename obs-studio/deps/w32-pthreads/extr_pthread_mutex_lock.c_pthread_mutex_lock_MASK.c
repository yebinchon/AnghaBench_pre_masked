
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ptw32_robust_state_t ;
typedef void* pthread_t ;
typedef TYPE_2__* pthread_mutex_t ;
struct TYPE_9__ {int kind; int recursive_count; int event; int lock_idx; void* ownerThread; TYPE_1__* robustNode; } ;
struct TYPE_8__ {int stateInconsistent; } ;
typedef int PTW32_INTERLOCKED_LONGPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (void*,void*) ;
 void* FUNC_6 () ;
 int FUNC_7 (TYPE_2__**) ;
 int FUNC_8 (TYPE_2__**,void*) ;
 int FUNC_9 (TYPE_2__**) ;

int
FUNC_10 (pthread_mutex_t * VAR_10)
{
  int VAR_11;
  pthread_mutex_t VAR_12;
  int VAR_13 = 0;




  if (*VAR_10 == ((void*)0))
    {
      return VAR_1;
    }







  if (*VAR_10 >= VAR_5)
    {
      if ((VAR_13 = FUNC_7 (VAR_10)) != 0)
 {
   return (VAR_13);
 }
    }

  VAR_12 = *VAR_10;
  VAR_11 = VAR_12->kind;

  if (VAR_11 >= 0)
    {

      if (VAR_6 == VAR_11)
        {
          if ((PTW32_INTERLOCKED_LONG) FUNC_2(
         (PTW32_INTERLOCKED_LONGPTR) &VAR_12->lock_idx,
         (PTW32_INTERLOCKED_LONG) 1) != 0)
     {
       while ((PTW32_INTERLOCKED_LONG) FUNC_2(
                              (PTW32_INTERLOCKED_LONGPTR) &VAR_12->lock_idx,
         (PTW32_INTERLOCKED_LONG) -1) != 0)
         {
           if (VAR_9 != FUNC_4 (VAR_12->event, VAR_4))
             {
               VAR_13 = VAR_1;
        break;
             }
         }
     }
        }
      else
        {
          pthread_t VAR_14 = FUNC_6();

          if ((PTW32_INTERLOCKED_LONG) FUNC_0(
                       (PTW32_INTERLOCKED_LONGPTR) &VAR_12->lock_idx,
         (PTW32_INTERLOCKED_LONG) 1,
         (PTW32_INTERLOCKED_LONG) 0) == 0)
     {
       VAR_12->recursive_count = 1;
       VAR_12->ownerThread = VAR_14;
     }
          else
     {
       if (FUNC_5 (VAR_12->ownerThread, VAR_14))
         {
           if (VAR_11 == VAR_7)
      {
        VAR_12->recursive_count++;
      }
           else
      {
        VAR_13 = VAR_0;
      }
         }
       else
         {
           while ((PTW32_INTERLOCKED_LONG) FUNC_2(
                                  (PTW32_INTERLOCKED_LONGPTR) &VAR_12->lock_idx,
             (PTW32_INTERLOCKED_LONG) -1) != 0)
      {
               if (VAR_9 != FUNC_4 (VAR_12->event, VAR_4))
          {
                   VAR_13 = VAR_1;
            break;
          }
      }

           if (0 == VAR_13)
      {
        VAR_12->recursive_count = 1;
        VAR_12->ownerThread = VAR_14;
      }
         }
     }
        }
    }
  else
    {





      ptw32_robust_state_t* VAR_15 = &VAR_12->robustNode->stateInconsistent;

      if ((PTW32_INTERLOCKED_LONG)VAR_8 == FUNC_1(
                                                 (PTW32_INTERLOCKED_LONGPTR)VAR_15,
                                                 (PTW32_INTERLOCKED_LONG)0))
        {
          VAR_13 = VAR_2;
        }
      else
        {
          pthread_t VAR_16 = FUNC_6();

          VAR_11 = -VAR_11 - 1;

          if (VAR_6 == VAR_11)
            {
              if ((PTW32_INTERLOCKED_LONG) FUNC_2(
                           (PTW32_INTERLOCKED_LONGPTR) &VAR_12->lock_idx,
                           (PTW32_INTERLOCKED_LONG) 1) != 0)
                {
                  while (0 == (VAR_13 = FUNC_9(VAR_10))
                           && (PTW32_INTERLOCKED_LONG) FUNC_2(
                                       (PTW32_INTERLOCKED_LONGPTR) &VAR_12->lock_idx,
                                       (PTW32_INTERLOCKED_LONG) -1) != 0)
                    {
                      if (VAR_9 != FUNC_4 (VAR_12->event, VAR_4))
                        {
                          VAR_13 = VAR_1;
                          break;
                        }
                      if ((PTW32_INTERLOCKED_LONG)VAR_8 ==
                                  FUNC_1(
                                    (PTW32_INTERLOCKED_LONGPTR)VAR_15,
                                    (PTW32_INTERLOCKED_LONG)0))
                        {

                          FUNC_3(VAR_12->event);
                          VAR_13 = VAR_2;
                          break;
                        }
                    }
                }
              if (0 == VAR_13 || VAR_3 == VAR_13)
                {




                  FUNC_8(VAR_10, VAR_16);
                }
            }
          else
            {
              if ((PTW32_INTERLOCKED_LONG) FUNC_0(
                           (PTW32_INTERLOCKED_LONGPTR) &VAR_12->lock_idx,
                           (PTW32_INTERLOCKED_LONG) 1,
                           (PTW32_INTERLOCKED_LONG) 0) == 0)
                {
                  VAR_12->recursive_count = 1;




                  FUNC_8(VAR_10, VAR_16);
                }
              else
                {
                  if (FUNC_5 (VAR_12->ownerThread, VAR_16))
                    {
                      if (VAR_7 == VAR_11)
                        {
                          VAR_12->recursive_count++;
                        }
                      else
                        {
                          VAR_13 = VAR_0;
                        }
                    }
                  else
                    {
                      while (0 == (VAR_13 = FUNC_9(VAR_10))
                               && (PTW32_INTERLOCKED_LONG) FUNC_2(
                                           (PTW32_INTERLOCKED_LONGPTR) &VAR_12->lock_idx,
                                           (PTW32_INTERLOCKED_LONG) -1) != 0)
                        {
                          if (VAR_9 != FUNC_4 (VAR_12->event, VAR_4))
                            {
                              VAR_13 = VAR_1;
                              break;
                            }
                          if ((PTW32_INTERLOCKED_LONG)VAR_8 ==
                                      FUNC_1(
                                        (PTW32_INTERLOCKED_LONGPTR)VAR_15,
                                        (PTW32_INTERLOCKED_LONG)0))
                            {

                              FUNC_3(VAR_12->event);
                              VAR_13 = VAR_2;
                              break;
                            }
                        }

                      if (0 == VAR_13 || VAR_3 == VAR_13)
                        {
                          VAR_12->recursive_count = 1;




                          FUNC_8(VAR_10, VAR_16);
                        }
                    }
         }
            }
        }
    }

  return (VAR_13);
}
