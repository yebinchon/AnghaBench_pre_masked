
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptw32_mcs_local_node_t ;
typedef TYPE_2__* pthread_spinlock_t ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_7__ {scalar_t__ interlock; TYPE_1__ u; } ;
typedef int PTW32_INTERLOCKED_LONGPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_LONG ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;

int
FUNC_5 (pthread_spinlock_t * VAR_7)
{
  register pthread_spinlock_t VAR_8;
  int VAR_9 = 0;

  if (VAR_7 == ((void*)0) || *VAR_7 == ((void*)0))
    {
      return VAR_1;
    }

  if ((VAR_8 = *VAR_7) != VAR_2)
    {
      if (VAR_8->interlock == VAR_5)
 {
   VAR_9 = FUNC_2 (&(VAR_8->u.mutex));
 }
      else if ((PTW32_INTERLOCKED_LONG) VAR_4 !=
        FUNC_0 ((PTW32_INTERLOCKED_LONGPTR) &VAR_8->interlock,
         (PTW32_INTERLOCKED_LONG) VAR_3,
         (PTW32_INTERLOCKED_LONG) VAR_4))
 {
   VAR_9 = VAR_1;
 }

      if (0 == VAR_9)
 {




   *VAR_7 = ((void*)0);
   (void) FUNC_1 (VAR_8);
 }
    }
  else
    {



      ptw32_mcs_local_node_t VAR_10;

      FUNC_3(&VAR_6, &VAR_10);




      if (*VAR_7 == VAR_2)
 {






   *VAR_7 = ((void*)0);
 }
      else
 {




   VAR_9 = VAR_0;
 }

       FUNC_4(&VAR_10);
    }

  return (VAR_9);
}
