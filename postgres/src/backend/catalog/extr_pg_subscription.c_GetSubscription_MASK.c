
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int subenabled; int subowner; int subname; int subdbid; } ;
struct TYPE_4__ {int publications; void* synccommit; int * slotname; void* conninfo; int enabled; int owner; void* name; int dbid; int oid; } ;
typedef TYPE_1__ Subscription ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_subscription ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int*) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ) ;
 scalar_t__ FUNC_12 (int) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

Subscription *
FUNC_15(Oid VAR_6, bool VAR_7)
{
 HeapTuple VAR_8;
 Subscription *VAR_9;
 Form_pg_subscription VAR_10;
 Datum VAR_11;
 bool VAR_12;

 VAR_8 = FUNC_8(VAR_5, FUNC_6(VAR_6));

 if (!FUNC_4(VAR_8))
 {
  if (VAR_7)
   return ((void*)0);

  FUNC_11(VAR_4, "cache lookup failed for subscription %u", VAR_6);
 }

 VAR_10 = (Form_pg_subscription) FUNC_3(VAR_8);

 VAR_9 = (Subscription *) FUNC_12(sizeof(Subscription));
 VAR_9->oid = VAR_6;
 VAR_9->dbid = VAR_10->subdbid;
 VAR_9->name = FUNC_13(FUNC_5(VAR_10->subname));
 VAR_9->owner = VAR_10->subowner;
 VAR_9->enabled = VAR_10->subenabled;


 VAR_11 = FUNC_9(VAR_5,
       VAR_8,
       VAR_0,
       &VAR_12);
 FUNC_0(!VAR_12);
 VAR_9->conninfo = FUNC_10(VAR_11);


 VAR_11 = FUNC_9(VAR_5,
       VAR_8,
       VAR_2,
       &VAR_12);
 if (!VAR_12)
  VAR_9->slotname = FUNC_13(FUNC_5(*FUNC_2(VAR_11)));
 else
  VAR_9->slotname = ((void*)0);


 VAR_11 = FUNC_9(VAR_5,
       VAR_8,
       VAR_3,
       &VAR_12);
 FUNC_0(!VAR_12);
 VAR_9->synccommit = FUNC_10(VAR_11);


 VAR_11 = FUNC_9(VAR_5,
       VAR_8,
       VAR_1,
       &VAR_12);
 FUNC_0(!VAR_12);
 VAR_9->publications = FUNC_14(FUNC_1(VAR_11));

 FUNC_7(VAR_8);

 return VAR_9;
}
