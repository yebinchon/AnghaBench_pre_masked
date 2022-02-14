
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pid; scalar_t__ state; int mutex; } ;
typedef TYPE_1__ WalSnd ;
struct TYPE_4__ {TYPE_1__* walsnds; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (long) ;

void
FUNC_3(void)
{
 for (;;)
 {
  int VAR_3;
  bool VAR_4 = 1;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  {
   WalSnd *VAR_5 = &VAR_1->walsnds[VAR_3];

   FUNC_0(&VAR_5->mutex);

   if (VAR_5->pid == 0)
   {
    FUNC_1(&VAR_5->mutex);
    continue;
   }

   if (VAR_5->state != VAR_0)
   {
    VAR_4 = 0;
    FUNC_1(&VAR_5->mutex);
    break;
   }
   FUNC_1(&VAR_5->mutex);
  }


  if (VAR_4)
   return;

  FUNC_2(10000L);
 }
}
