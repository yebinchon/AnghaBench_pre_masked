
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_6__ {TYPE_2__* replication_slots; } ;
struct TYPE_4__ {scalar_t__ restart_lsn; } ;
struct TYPE_5__ {int mutex; TYPE_1__ data; int in_use; } ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;

void
FUNC_6(void)
{
 int VAR_5;
 XLogRecPtr VAR_6 = VAR_0;

 FUNC_0(VAR_3 != ((void*)0));

 FUNC_1(VAR_2, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  ReplicationSlot *VAR_7 = &VAR_3->replication_slots[VAR_5];
  XLogRecPtr VAR_8;

  if (!VAR_7->in_use)
   continue;

  FUNC_3(&VAR_7->mutex);
  VAR_8 = VAR_7->data.restart_lsn;
  FUNC_4(&VAR_7->mutex);

  if (VAR_8 != VAR_0 &&
   (VAR_6 == VAR_0 ||
    VAR_8 < VAR_6))
   VAR_6 = VAR_8;
 }
 FUNC_2(VAR_2);

 FUNC_5(VAR_6);
}
