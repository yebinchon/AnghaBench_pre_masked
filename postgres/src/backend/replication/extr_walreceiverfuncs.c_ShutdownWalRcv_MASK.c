
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_3__ {int walRcvState; scalar_t__ pid; int mutex; } ;
typedef TYPE_1__ WalRcvData ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;






 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int) ;

void
FUNC_6(void)
{
 WalRcvData *VAR_2 = VAR_1;
 pid_t VAR_3 = 0;






 FUNC_1(&VAR_2->mutex);
 switch (VAR_2->walRcvState)
 {
  case 131:
   break;
  case 132:
   VAR_2->walRcvState = 131;
   break;

  case 129:
  case 128:
  case 133:
   VAR_2->walRcvState = 130;

  case 130:
   VAR_3 = VAR_2->pid;
   break;
 }
 FUNC_2(&VAR_2->mutex);




 if (VAR_3 != 0)
  FUNC_4(VAR_3, VAR_0);





 while (FUNC_3())
 {




  FUNC_0();

  FUNC_5(100000);
 }
}
