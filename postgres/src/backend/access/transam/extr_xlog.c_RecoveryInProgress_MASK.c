
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SharedRecoveryInProgress; } ;
typedef TYPE_1__ XLogCtlData ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;

bool
FUNC_2(void)
{





 if (!VAR_0)
  return 0;
 else
 {




  volatile XLogCtlData *VAR_2 = VAR_1;

  VAR_0 = VAR_2->SharedRecoveryInProgress;







  if (!VAR_0)
  {





   FUNC_1();
   FUNC_0();
  }







  return VAR_0;
 }
}
