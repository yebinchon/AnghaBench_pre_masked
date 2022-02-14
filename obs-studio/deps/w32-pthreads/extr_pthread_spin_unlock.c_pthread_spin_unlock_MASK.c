
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* pthread_spinlock_t ;
struct TYPE_5__ {int mutex; } ;
struct TYPE_6__ {TYPE_1__ u; int interlock; } ;
typedef int PTW32_INTERLOCKED_LONGPTR ;
typedef int PTW32_INTERLOCKED_LONG ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;



 int FUNC_1 (int *) ;

int
FUNC_2 (pthread_spinlock_t * VAR_3)
{
  register pthread_spinlock_t VAR_4;

  if (((void*)0) == VAR_3 || ((void*)0) == *VAR_3)
    {
      return (VAR_0);
    }

  VAR_4 = *VAR_3;

  if (VAR_4 == VAR_2)
    {
      return VAR_1;
    }

  switch ((long)
   FUNC_0 ((PTW32_INTERLOCKED_LONGPTR) &VAR_4->interlock,
           (PTW32_INTERLOCKED_LONG) 129,
           (PTW32_INTERLOCKED_LONG) 130))
    {
    case 130:
    case 129:
      return 0;
    case 128:
      return FUNC_1 (&(VAR_4->u.mutex));
    }

  return VAR_0;
}
