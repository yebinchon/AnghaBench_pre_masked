
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int subid; } ;
struct TYPE_6__ {scalar_t__ dbid; int synccommit; int name; int publications; int slotname; int conninfo; int enabled; } ;
typedef TYPE_1__ Subscription ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 TYPE_3__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;

__attribute__((used)) static void
FUNC_14(void)
{
 MemoryContext VAR_8;
 Subscription *VAR_9;
 bool VAR_10 = 0;


 if (VAR_5)
  return;


 if (!FUNC_4())
 {
  FUNC_7();
  VAR_10 = 1;
 }


 VAR_8 = FUNC_5(VAR_0);

 VAR_9 = FUNC_3(VAR_3->subid, 1);





 if (!VAR_9)
 {
  FUNC_10(VAR_2,
    (FUNC_11("logical replication apply worker for subscription \"%s\" will "
      "stop because the subscription was removed",
      VAR_4->name)));

  FUNC_12(0);
 }





 if (!VAR_9->enabled)
 {
  FUNC_10(VAR_2,
    (FUNC_11("logical replication apply worker for subscription \"%s\" will "
      "stop because the subscription was disabled",
      VAR_4->name)));

  FUNC_12(0);
 }





 if (FUNC_13(VAR_9->conninfo, VAR_4->conninfo) != 0)
 {
  FUNC_10(VAR_2,
    (FUNC_11("logical replication apply worker for subscription \"%s\" will "
      "restart because the connection information was changed",
      VAR_4->name)));

  FUNC_12(0);
 }





 if (FUNC_13(VAR_9->name, VAR_4->name) != 0)
 {
  FUNC_10(VAR_2,
    (FUNC_11("logical replication apply worker for subscription \"%s\" will "
      "restart because subscription was renamed",
      VAR_4->name)));

  FUNC_12(0);
 }


 FUNC_0(VAR_9->slotname);





 if (FUNC_13(VAR_9->slotname, VAR_4->slotname) != 0)
 {
  FUNC_10(VAR_2,
    (FUNC_11("logical replication apply worker for subscription \"%s\" will "
      "restart because the replication slot name was changed",
      VAR_4->name)));

  FUNC_12(0);
 }





 if (!FUNC_9(VAR_9->publications, VAR_4->publications))
 {
  FUNC_10(VAR_2,
    (FUNC_11("logical replication apply worker for subscription \"%s\" will "
      "restart because subscription's publications were changed",
      VAR_4->name)));

  FUNC_12(0);
 }


 if (VAR_9->dbid != VAR_4->dbid)
 {
  FUNC_8(VAR_1, "subscription %u changed unexpectedly",
    VAR_3->subid);
 }


 FUNC_2(VAR_4);
 VAR_4 = VAR_9;

 FUNC_5(VAR_8);


 FUNC_6("synchronous_commit", VAR_4->synccommit,
     VAR_6, VAR_7);

 if (VAR_10)
  FUNC_1();

 VAR_5 = 1;
}
