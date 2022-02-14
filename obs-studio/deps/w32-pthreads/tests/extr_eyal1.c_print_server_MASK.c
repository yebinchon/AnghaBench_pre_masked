
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; int mutex_started; int mutex_ended; int mutex_end; int id; int mutex_start; } ;
typedef TYPE_1__ TC ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4 (void *VAR_3)
{
  int VAR_4;
  int VAR_5;
  TC *VAR_6 = (TC *)VAR_3;

  FUNC_0(FUNC_2 (&VAR_6->mutex_started) == 0);

  for (;;)
    {
      FUNC_0(FUNC_2 (&VAR_6->mutex_start) == 0);
      FUNC_0(FUNC_3 (&VAR_6->mutex_start) == 0);
      FUNC_0(FUNC_2 (&VAR_6->mutex_ended) == 0);
      FUNC_0(FUNC_3 (&VAR_6->mutex_started) == 0);

      for (;;)
 {




   FUNC_0(FUNC_2 (&VAR_0) == 0);

   VAR_4 = VAR_2;
   if (VAR_2 >= 0)
     {
       ++VAR_2;
       if (VAR_2 >= VAR_1)
  VAR_2 = -1;
     }
   FUNC_0(FUNC_3 (&VAR_0) == 0);

   if (VAR_4 < 0)
     break;

   FUNC_0((VAR_5 = FUNC_1 (VAR_6->id, VAR_4)) >= 0);
   VAR_6->work += VAR_5;
 }

      FUNC_0(FUNC_2 (&VAR_6->mutex_end) == 0);
      FUNC_0(FUNC_3 (&VAR_6->mutex_end) == 0);
      FUNC_0(FUNC_2 (&VAR_6->mutex_started) == 0);
      FUNC_0(FUNC_3 (&VAR_6->mutex_ended) == 0);

      if (-2 == VAR_4)
 break;
    }

  FUNC_0(FUNC_3 (&VAR_6->mutex_started) == 0);

  return (0);
}
