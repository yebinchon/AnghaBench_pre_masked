
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_3__ {scalar_t__ latestWalEnd; int mutex; void* lastMsgReceiptTime; void* lastMsgSendTime; void* latestWalEndTime; } ;
typedef TYPE_1__ WalRcvData ;
typedef void* TimestampTz ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (scalar_t__,char*,char*,char*,int,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static void
FUNC_9(XLogRecPtr VAR_3, TimestampTz VAR_4)
{
 WalRcvData *VAR_5 = VAR_1;

 TimestampTz VAR_6 = FUNC_0();


 FUNC_3(&VAR_5->mutex);
 if (VAR_5->latestWalEnd < VAR_3)
  VAR_5->latestWalEndTime = VAR_4;
 VAR_5->latestWalEnd = VAR_3;
 VAR_5->lastMsgSendTime = VAR_4;
 VAR_5->lastMsgReceiptTime = VAR_6;
 FUNC_4(&VAR_5->mutex);

 if (VAR_2 <= VAR_0)
 {
  char *VAR_7;
  char *VAR_8;
  int VAR_9;


  VAR_7 = FUNC_7(FUNC_8(VAR_4));
  VAR_8 = FUNC_7(FUNC_8(VAR_6));
  VAR_9 = FUNC_1();


  if (VAR_9 == -1)
   FUNC_5(VAR_0, "sendtime %s receipttime %s replication apply delay (N/A) transfer latency %d ms",
     VAR_7,
     VAR_8,
     FUNC_2());
  else
   FUNC_5(VAR_0, "sendtime %s receipttime %s replication apply delay %d ms transfer latency %d ms",
     VAR_7,
     VAR_8,
     VAR_9,
     FUNC_2());

  FUNC_6(VAR_7);
  FUNC_6(VAR_8);
 }
}
