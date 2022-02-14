
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* replication_slots; } ;
struct TYPE_5__ {scalar_t__ persistency; } ;
struct TYPE_6__ {scalar_t__ active_pid; int mutex; int active_cv; TYPE_1__ data; int in_use; } ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;

void
FUNC_7(void)
{
 int VAR_7;

 FUNC_0(VAR_2 == ((void*)0));

restart:
 FUNC_2(VAR_4, VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  ReplicationSlot *VAR_8 = &VAR_5->replication_slots[VAR_7];

  if (!VAR_8->in_use)
   continue;

  FUNC_5(&VAR_8->mutex);
  if (VAR_8->active_pid == VAR_1)
  {
   FUNC_0(VAR_8->data.persistency == VAR_3);
   FUNC_6(&VAR_8->mutex);
   FUNC_3(VAR_4);

   FUNC_4(VAR_8);

   FUNC_1(&VAR_8->active_cv);
   goto restart;
  }
  else
   FUNC_6(&VAR_8->mutex);
 }

 FUNC_3(VAR_4);
}
