
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int lastMsgReceiptTime; int lastMsgSendTime; } ;
typedef TYPE_1__ WalRcvData ;
typedef int TimestampTz ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,long*,int*) ;
 TYPE_1__* VAR_0 ;

int
FUNC_3(void)
{
 WalRcvData *VAR_1 = VAR_0;

 TimestampTz VAR_2;
 TimestampTz VAR_3;

 long VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6;

 FUNC_0(&VAR_1->mutex);
 VAR_2 = VAR_1->lastMsgSendTime;
 VAR_3 = VAR_1->lastMsgReceiptTime;
 FUNC_1(&VAR_1->mutex);

 FUNC_2(VAR_2,
      VAR_3,
      &VAR_4, &VAR_5);

 VAR_6 = ((int) VAR_4 * 1000) + (VAR_5 / 1000);

 return VAR_6;
}
