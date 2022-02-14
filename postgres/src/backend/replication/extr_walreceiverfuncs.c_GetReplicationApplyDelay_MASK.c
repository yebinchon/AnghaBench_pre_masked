
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_3__ {scalar_t__ receivedUpto; int mutex; } ;
typedef TYPE_1__ WalRcvData ;
typedef scalar_t__ TimestampTz ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int ,long*,int*) ;
 TYPE_1__* VAR_0 ;

int
FUNC_6(void)
{
 WalRcvData *VAR_1 = VAR_0;
 XLogRecPtr VAR_2;
 XLogRecPtr VAR_3;

 long VAR_4;
 int VAR_5;

 TimestampTz VAR_6;

 FUNC_3(&VAR_1->mutex);
 VAR_2 = VAR_1->receivedUpto;
 FUNC_4(&VAR_1->mutex);

 VAR_3 = FUNC_2(((void*)0));

 if (VAR_2 == VAR_3)
  return 0;

 VAR_6 = FUNC_0();

 if (VAR_6 == 0)
  return -1;

 FUNC_5(VAR_6,
      FUNC_1(),
      &VAR_4, &VAR_5);

 return (((int) VAR_4 * 1000) + (VAR_5 / 1000));
}
