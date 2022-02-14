
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_3__ {int mutex; int receivedTLI; int latestChunkStart; int receivedUpto; } ;
typedef TYPE_1__ WalRcvData ;
typedef int TimeLineID ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

XLogRecPtr
FUNC_2(XLogRecPtr *VAR_1, TimeLineID *VAR_2)
{
 WalRcvData *VAR_3 = VAR_0;
 XLogRecPtr VAR_4;

 FUNC_0(&VAR_3->mutex);
 VAR_4 = VAR_3->receivedUpto;
 if (VAR_1)
  *VAR_1 = VAR_3->latestChunkStart;
 if (VAR_2)
  *VAR_2 = VAR_3->receivedTLI;
 FUNC_1(&VAR_3->mutex);

 return VAR_4;
}
