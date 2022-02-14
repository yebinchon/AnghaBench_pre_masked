
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ shm_mq_result ;
typedef int TupleTableSlot ;
struct TYPE_6__ {int t_data; int t_len; } ;
struct TYPE_5__ {int queue; } ;
typedef TYPE_1__ TQueueDestReceiver ;
typedef TYPE_2__* HeapTuple ;
typedef int DestReceiver ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int,int*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static bool
FUNC_6(TupleTableSlot *VAR_4, DestReceiver *VAR_5)
{
 TQueueDestReceiver *VAR_6 = (TQueueDestReceiver *) VAR_5;
 HeapTuple VAR_7;
 shm_mq_result VAR_8;
 bool VAR_9;


 VAR_7 = FUNC_0(VAR_4, 1, &VAR_9);
 VAR_8 = FUNC_5(VAR_6->queue, VAR_7->t_len, VAR_7->t_data, 0);

 if (VAR_9)
  FUNC_4(VAR_7);


 if (VAR_8 == VAR_2)
  return 0;
 else if (VAR_8 != VAR_3)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("could not send tuple to shared-memory queue")));

 return 1;
}
