
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pid; int needreload; int mutex; } ;
typedef TYPE_1__ WalSnd ;
struct TYPE_4__ {TYPE_1__* walsnds; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

void
FUNC_2(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  WalSnd *VAR_3 = &VAR_0->walsnds[VAR_2];

  FUNC_0(&VAR_3->mutex);
  if (VAR_3->pid == 0)
  {
   FUNC_1(&VAR_3->mutex);
   continue;
  }
  VAR_3->needreload = 1;
  FUNC_1(&VAR_3->mutex);
 }
}
