
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* replication_slots; } ;
struct TYPE_6__ {scalar_t__ database; int name; } ;
struct TYPE_7__ {int active_pid; int mutex; TYPE_1__ data; int in_use; } ;
typedef TYPE_2__ ReplicationSlot ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 char* FUNC_2 (int ) ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,int) ;
 int VAR_7 ;

void
FUNC_10(Oid VAR_8)
{
 int VAR_9;

 if (VAR_7 <= 0)
  return;

restart:
 FUNC_0(VAR_5, VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  ReplicationSlot *VAR_10;
  char *VAR_11;
  int VAR_12;

  VAR_10 = &VAR_6->replication_slots[VAR_9];


  if (!VAR_10->in_use)
   continue;


  if (!FUNC_4(VAR_10))
   continue;


  if (VAR_10->data.database != VAR_8)
   continue;


  FUNC_5(&VAR_10->mutex);

  VAR_11 = FUNC_2(VAR_10->data.name);
  VAR_12 = VAR_10->active_pid;
  if (VAR_12 == 0)
  {
   VAR_4 = VAR_10;
   VAR_10->active_pid = VAR_3;
  }
  FUNC_6(&VAR_10->mutex);
  if (VAR_12)
   FUNC_7(VAR_1,
     (FUNC_8(VAR_0),
      FUNC_9("replication slot \"%s\" is active for PID %d",
       VAR_11, VAR_12)));
  FUNC_1(VAR_5);
  FUNC_3();
  goto restart;
 }
 FUNC_1(VAR_5);
}
