
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* replication_slots; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ data; int in_use; } ;
typedef TYPE_2__ ReplicationSlot ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (int ) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_6 ;
 int FUNC_5 (char*,char*,char*) ;

void
FUNC_6(void)
{
 int VAR_7;

 FUNC_4(VAR_0, "performing replication slot checkpoint");
 FUNC_0(VAR_4, VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  ReplicationSlot *VAR_8 = &VAR_5->replication_slots[VAR_7];
  char VAR_9[VAR_3];

  if (!VAR_8->in_use)
   continue;


  FUNC_5(VAR_9, "pg_replslot/%s", FUNC_2(VAR_8->data.name));
  FUNC_3(VAR_8, VAR_9, VAR_1);
 }
 FUNC_1(VAR_4);
}
