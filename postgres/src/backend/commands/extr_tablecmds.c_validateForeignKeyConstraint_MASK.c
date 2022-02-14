
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int trig ;
typedef int TupleTableSlot ;
struct TYPE_8__ {int tg_event; TYPE_2__* tg_trigger; int * tg_newslot; int * tg_newtuple; int * tg_trigslot; int tg_trigtuple; int tg_relation; int type; } ;
typedef TYPE_1__ TriggerData ;
struct TYPE_9__ {char* tgname; int tgisinternal; int tgdeferrable; int tginitdeferred; int * context; void* tgconstraint; void* tgconstrindid; int tgconstrrelid; int tgenabled; int tgoid; } ;
typedef TYPE_2__ Trigger ;
typedef int TableScanDesc ;
typedef int Snapshot ;
typedef int Relation ;
typedef void* Oid ;
typedef int Node ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (char*,char*) ;
 TYPE_2__* VAR_9 ;
 int FUNC_18 (int ,int ,int ,int *) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ,int ,int *) ;
 int * FUNC_21 (int ,int *) ;

__attribute__((used)) static void
FUNC_22(char *VAR_10,
        Relation VAR_11,
        Relation VAR_12,
        Oid VAR_13,
        Oid VAR_14)
{
 TupleTableSlot *VAR_15;
 TableScanDesc VAR_16;
 Trigger VAR_17;
 Snapshot VAR_18;
 MemoryContext VAR_19;
 MemoryContext VAR_20;

 FUNC_16(VAR_2,
   (FUNC_17("validating foreign key constraint \"%s\"", VAR_10)));




 FUNC_6(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.tgoid = VAR_4;
 VAR_17.tgname = VAR_10;
 VAR_17.tgenabled = VAR_7;
 VAR_17.tgisinternal = 1;
 VAR_17.tgconstrrelid = FUNC_13(VAR_12);
 VAR_17.tgconstrindid = VAR_13;
 VAR_17.tgconstraint = VAR_14;
 VAR_17.tgdeferrable = 0;
 VAR_17.tginitdeferred = 0;






 if (FUNC_11(&VAR_17, VAR_11, VAR_12))
  return;






 VAR_18 = FUNC_12(FUNC_4());
 VAR_15 = FUNC_21(VAR_11, ((void*)0));
 VAR_16 = FUNC_18(VAR_11, VAR_18, 0, ((void*)0));

 VAR_20 = FUNC_0(VAR_1,
           "validateForeignKeyConstraint",
           VAR_0);
 VAR_19 = FUNC_9(VAR_20);

 while (FUNC_20(VAR_16, VAR_3, VAR_15))
 {
  FUNC_5(VAR_9, 0);
  TriggerData VAR_21;

  FUNC_1();






  FUNC_6(VAR_9, 0, FUNC_14(0));




  VAR_21.type = VAR_8;
  VAR_21.tg_event = VAR_5 | VAR_6;
  VAR_21.tg_relation = VAR_11;
  VAR_21.tg_trigtuple = FUNC_3(VAR_15, 0, ((void*)0));
  VAR_21.tg_trigslot = VAR_15;
  VAR_21.tg_newtuple = ((void*)0);
  VAR_21.tg_newslot = ((void*)0);
  VAR_21.tg_trigger = &VAR_17;

  VAR_9->context = (Node *) &VAR_21;

  FUNC_10(VAR_9);

  FUNC_8(VAR_20);
 }

 FUNC_9(VAR_19);
 FUNC_7(VAR_20);
 FUNC_19(VAR_16);
 FUNC_15(VAR_18);
 FUNC_2(VAR_15);
}
