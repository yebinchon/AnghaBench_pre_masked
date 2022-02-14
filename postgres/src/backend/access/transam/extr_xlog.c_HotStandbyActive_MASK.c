
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SharedHotStandbyActive; int info_lck; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;

bool
FUNC_2(void)
{





 if (VAR_0)
  return 1;
 else
 {

  FUNC_0(&VAR_1->info_lck);
  VAR_0 = VAR_1->SharedHotStandbyActive;
  FUNC_1(&VAR_1->info_lck);

  return VAR_0;
 }
}
