
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pg_time_t ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_3__ {scalar_t__ walRcvState; char* conninfo; char* slotname; scalar_t__ receiveStart; scalar_t__ receivedTLI; int mutex; int * latch; scalar_t__ receiveStartTLI; scalar_t__ latestChunkStart; scalar_t__ receivedUpto; int startTime; } ;
typedef TYPE_1__ WalRcvData ;
typedef scalar_t__ TimeLineID ;
typedef int Latch ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (char*,char const*,int ) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;

void
FUNC_8(TimeLineID VAR_9, XLogRecPtr VAR_10, const char *VAR_11,
      const char *VAR_12)
{
 WalRcvData *VAR_13 = VAR_7;
 bool VAR_14 = 0;
 pg_time_t VAR_15 = (pg_time_t) FUNC_7(((void*)0));
 Latch *VAR_16;







 if (FUNC_5(VAR_10, VAR_8) != 0)
  VAR_10 -= FUNC_5(VAR_10, VAR_8);

 FUNC_3(&VAR_13->mutex);


 FUNC_0(VAR_13->walRcvState == VAR_5 ||
     VAR_13->walRcvState == VAR_6);

 if (VAR_11 != ((void*)0))
  FUNC_6((char *) VAR_13->conninfo, VAR_11, VAR_0);
 else
  VAR_13->conninfo[0] = '\0';

 if (VAR_12 != ((void*)0))
  FUNC_6((char *) VAR_13->slotname, VAR_12, VAR_1);
 else
  VAR_13->slotname[0] = '\0';

 if (VAR_13->walRcvState == VAR_5)
 {
  VAR_14 = 1;
  VAR_13->walRcvState = VAR_4;
 }
 else
  VAR_13->walRcvState = VAR_3;
 VAR_13->startTime = VAR_15;





 if (VAR_13->receiveStart == 0 || VAR_13->receivedTLI != VAR_9)
 {
  VAR_13->receivedUpto = VAR_10;
  VAR_13->receivedTLI = VAR_9;
  VAR_13->latestChunkStart = VAR_10;
 }
 VAR_13->receiveStart = VAR_10;
 VAR_13->receiveStartTLI = VAR_9;

 VAR_16 = VAR_13->latch;

 FUNC_4(&VAR_13->mutex);

 if (VAR_14)
  FUNC_1(VAR_2);
 else if (VAR_16)
  FUNC_2(VAR_16);
}
