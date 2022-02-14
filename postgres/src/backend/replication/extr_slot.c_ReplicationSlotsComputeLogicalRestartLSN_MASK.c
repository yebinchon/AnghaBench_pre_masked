
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_7__ {TYPE_2__* replication_slots; } ;
struct TYPE_5__ {scalar_t__ restart_lsn; } ;
struct TYPE_6__ {int mutex; TYPE_1__ data; int in_use; } ;
typedef TYPE_2__ ReplicationSlot ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

XLogRecPtr
FUNC_5(void)
{
 XLogRecPtr VAR_5 = VAR_0;
 int VAR_6;

 if (VAR_4 <= 0)
  return VAR_0;

 FUNC_0(VAR_2, VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  ReplicationSlot *VAR_7;
  XLogRecPtr VAR_8;

  VAR_7 = &VAR_3->replication_slots[VAR_6];


  if (!VAR_7->in_use)
   continue;


  if (!FUNC_2(VAR_7))
   continue;


  FUNC_3(&VAR_7->mutex);
  VAR_8 = VAR_7->data.restart_lsn;
  FUNC_4(&VAR_7->mutex);

  if (VAR_5 == VAR_0 ||
   VAR_8 < VAR_5)
   VAR_5 = VAR_8;
 }

 FUNC_1(VAR_2);

 return VAR_5;
}
