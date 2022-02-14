
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int active_cv; int io_in_progress_lock; int mutex; } ;
struct TYPE_5__ {TYPE_2__* replication_slots; } ;
typedef TYPE_1__ ReplicationSlotCtlData ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,int ,int*) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

void
FUNC_7(void)
{
 bool VAR_3;

 if (VAR_2 == 0)
  return;

 VAR_1 = (ReplicationSlotCtlData *)
  FUNC_5("ReplicationSlot Ctl", FUNC_4(),
      &VAR_3);

 FUNC_2(VAR_0,
        "replication_slot_io");

 if (!VAR_3)
 {
  int VAR_4;


  FUNC_3(VAR_1, 0, FUNC_4());

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
   ReplicationSlot *VAR_5 = &VAR_1->replication_slots[VAR_4];


   FUNC_6(&VAR_5->mutex);
   FUNC_1(&VAR_5->io_in_progress_lock, VAR_0);
   FUNC_0(&VAR_5->active_cv);
  }
 }
}
