
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* replication_slots; } ;
struct TYPE_5__ {scalar_t__ database; } ;
struct TYPE_6__ {scalar_t__ active_pid; int mutex; TYPE_1__ data; int in_use; } ;
typedef TYPE_2__ ReplicationSlot ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

bool
FUNC_5(Oid VAR_4, int *VAR_5, int *VAR_6)
{
 int VAR_7;

 *VAR_5 = *VAR_6 = 0;

 if (VAR_3 <= 0)
  return 0;

 FUNC_0(VAR_1, VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  ReplicationSlot *VAR_8;

  VAR_8 = &VAR_2->replication_slots[VAR_7];


  if (!VAR_8->in_use)
   continue;


  if (!FUNC_2(VAR_8))
   continue;


  if (VAR_8->data.database != VAR_4)
   continue;


  FUNC_3(&VAR_8->mutex);
  (*VAR_5)++;
  if (VAR_8->active_pid != 0)
   (*VAR_6)++;
  FUNC_4(&VAR_8->mutex);
 }
 FUNC_1(VAR_1);

 if (*VAR_5 > 0)
  return 1;
 return 0;
}
