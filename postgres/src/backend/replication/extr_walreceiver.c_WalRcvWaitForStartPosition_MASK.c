
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int activitymsg ;
typedef int XLogRecPtr ;
struct TYPE_3__ {int walRcvState; int receiveStart; int latch; int mutex; scalar_t__ receiveStartTLI; } ;
typedef TYPE_1__ WalRcvData ;
typedef scalar_t__ TimeLineID ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 () ;
 TYPE_1__* VAR_9 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*,int,char*,int,int) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_12(XLogRecPtr *VAR_11, TimeLineID *VAR_12)
{
 WalRcvData *VAR_13 = VAR_9;
 int VAR_14;

 FUNC_3(&VAR_13->mutex);
 VAR_14 = VAR_13->walRcvState;
 if (VAR_14 != VAR_5)
 {
  FUNC_4(&VAR_13->mutex);
  if (VAR_14 == VAR_4)
   FUNC_9(0);
  else
   FUNC_7(VAR_0, "unexpected walreceiver state");
 }
 VAR_13->walRcvState = VAR_6;
 VAR_13->receiveStart = VAR_1;
 VAR_13->receiveStartTLI = 0;
 FUNC_4(&VAR_13->mutex);

 if (VAR_10)
  FUNC_10("idle", 0);





 FUNC_6();
 for (;;)
 {
  FUNC_2(VAR_13->latch);

  FUNC_1();

  FUNC_3(&VAR_13->mutex);
  FUNC_0(VAR_13->walRcvState == VAR_3 ||
      VAR_13->walRcvState == VAR_6 ||
      VAR_13->walRcvState == VAR_4);
  if (VAR_13->walRcvState == VAR_3)
  {

   *VAR_11 = VAR_13->receiveStart;
   *VAR_12 = VAR_13->receiveStartTLI;
   VAR_13->walRcvState = VAR_5;
   FUNC_4(&VAR_13->mutex);
   break;
  }
  if (VAR_13->walRcvState == VAR_4)
  {




   FUNC_4(&VAR_13->mutex);
   FUNC_8(1);
  }
  FUNC_4(&VAR_13->mutex);

  (void) FUNC_5(VAR_13->latch, VAR_8 | VAR_7, 0,
       VAR_2);
 }

 if (VAR_10)
 {
  char VAR_15[50];

  FUNC_11(VAR_15, sizeof(VAR_15), "restarting at %X/%X",
     (uint32) (*VAR_11 >> 32),
     (uint32) *VAR_11);
  FUNC_10(VAR_15, 0);
 }
}
