
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pg_time_t ;
typedef scalar_t__ WalRcvState ;
struct TYPE_3__ {scalar_t__ walRcvState; scalar_t__ startTime; int mutex; } ;
typedef TYPE_1__ WalRcvData ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int *) ;

bool
FUNC_3(void)
{
 WalRcvData *VAR_6 = VAR_5;
 WalRcvState VAR_7;
 pg_time_t VAR_8;

 FUNC_0(&VAR_6->mutex);

 VAR_7 = VAR_6->walRcvState;
 VAR_8 = VAR_6->startTime;

 FUNC_1(&VAR_6->mutex);







 if (VAR_7 == VAR_1)
 {
  pg_time_t VAR_9 = (pg_time_t) FUNC_2(((void*)0));

  if ((VAR_9 - VAR_8) > VAR_2)
  {
   FUNC_0(&VAR_6->mutex);

   if (VAR_6->walRcvState == VAR_1)
    VAR_7 = VAR_6->walRcvState = VAR_3;

   FUNC_1(&VAR_6->mutex);
  }
 }

 if (VAR_7 == VAR_4 || VAR_7 == VAR_1 ||
  VAR_7 == VAR_0)
  return 1;
 else
  return 0;
}
