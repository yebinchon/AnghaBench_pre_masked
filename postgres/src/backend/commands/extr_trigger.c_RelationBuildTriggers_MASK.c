
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int int16 ;
typedef int bytea ;
struct TYPE_19__ {int numtriggers; TYPE_3__* triggers; } ;
typedef TYPE_2__ TriggerDesc ;
struct TYPE_20__ {int tgnargs; int tgnattr; char** tgargs; int * tgqual; int * tgnewtable; int * tgoldtable; int * tgattr; int tginitdeferred; int tgdeferrable; int tgconstraint; int tgconstrindid; int tgconstrrelid; int tgisinternal; int tgenabled; int tgtype; int tgfoid; void* tgname; int tgoid; } ;
typedef TYPE_3__ Trigger ;
struct TYPE_18__ {int dim1; int values; } ;
struct TYPE_22__ {int tgnargs; TYPE_1__ tgattr; int tginitdeferred; int tgdeferrable; int tgconstraint; int tgconstrindid; int tgconstrrelid; int tgisinternal; int tgenabled; int tgtype; int tgfoid; int tgname; int oid; } ;
struct TYPE_21__ {int trigdesc; int rd_att; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_4__* Relation ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_5__* Form_pg_trigger ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int *,int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_2__*,TYPE_3__*) ;
 int * FUNC_14 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (int ,int ,int ,int*) ;
 int FUNC_18 (int *,int *,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (TYPE_3__*) ;
 char* FUNC_22 (char*) ;
 scalar_t__ FUNC_23 (TYPE_3__*,int) ;
 scalar_t__ FUNC_24 (char*) ;
 int FUNC_25 (TYPE_4__*,int ,int,int *,int,int *) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_29 (int ,int ) ;

void
FUNC_30(Relation VAR_13)
{
 TriggerDesc *VAR_14;
 int VAR_15;
 int VAR_16;
 Trigger *VAR_17;
 Relation VAR_18;
 ScanKeyData VAR_19;
 SysScanDesc VAR_20;
 HeapTuple VAR_21;
 MemoryContext VAR_22;
 int VAR_23;





 VAR_16 = 16;
 VAR_17 = (Trigger *) FUNC_19(VAR_16 * sizeof(Trigger));
 VAR_15 = 0;







 FUNC_12(&VAR_19,
    VAR_5,
    VAR_6, VAR_9,
    FUNC_9(FUNC_11(VAR_13)));

 VAR_18 = FUNC_29(VAR_10, VAR_0);
 VAR_20 = FUNC_25(VAR_18, VAR_11, 1,
        ((void*)0), 1, &VAR_19);

 while (FUNC_6(VAR_21 = FUNC_27(VAR_20)))
 {
  Form_pg_trigger VAR_24 = (Form_pg_trigger) FUNC_5(VAR_21);
  Trigger *VAR_25;
  Datum VAR_26;
  bool VAR_27;

  if (VAR_15 >= VAR_16)
  {
   VAR_16 *= 2;
   VAR_17 = (Trigger *) FUNC_23(VAR_17, VAR_16 * sizeof(Trigger));
  }
  VAR_25 = &(VAR_17[VAR_15]);

  VAR_25->tgoid = VAR_24->oid;
  VAR_25->tgname = FUNC_2(FUNC_3(VAR_12,
               FUNC_8(&VAR_24->tgname)));
  VAR_25->tgfoid = VAR_24->tgfoid;
  VAR_25->tgtype = VAR_24->tgtype;
  VAR_25->tgenabled = VAR_24->tgenabled;
  VAR_25->tgisinternal = VAR_24->tgisinternal;
  VAR_25->tgconstrrelid = VAR_24->tgconstrrelid;
  VAR_25->tgconstrindid = VAR_24->tgconstrindid;
  VAR_25->tgconstraint = VAR_24->tgconstraint;
  VAR_25->tgdeferrable = VAR_24->tgdeferrable;
  VAR_25->tginitdeferred = VAR_24->tginitdeferred;
  VAR_25->tgnargs = VAR_24->tgnargs;

  VAR_25->tgnattr = VAR_24->tgattr.dim1;
  if (VAR_25->tgnattr > 0)
  {
   VAR_25->tgattr = (int16 *) FUNC_19(VAR_25->tgnattr * sizeof(int16));
   FUNC_18(VAR_25->tgattr, &(VAR_24->tgattr.values),
       VAR_25->tgnattr * sizeof(int16));
  }
  else
   VAR_25->tgattr = ((void*)0);
  if (VAR_25->tgnargs > 0)
  {
   bytea *VAR_28;
   char *VAR_29;

   VAR_28 = FUNC_1(FUNC_17(VAR_21,
             VAR_1,
             VAR_18->rd_att, &VAR_27));
   if (VAR_27)
    FUNC_16(VAR_8, "tgargs is null in trigger for relation \"%s\"",
      FUNC_10(VAR_13));
   VAR_29 = (char *) FUNC_15(VAR_28);
   VAR_25->tgargs = (char **) FUNC_19(VAR_25->tgnargs * sizeof(char *));
   for (VAR_23 = 0; VAR_23 < VAR_25->tgnargs; VAR_23++)
   {
    VAR_25->tgargs[VAR_23] = FUNC_22(VAR_29);
    VAR_29 += FUNC_24(VAR_29) + 1;
   }
  }
  else
   VAR_25->tgargs = ((void*)0);

  VAR_26 = FUNC_17(VAR_21, VAR_3,
       VAR_18->rd_att, &VAR_27);
  if (!VAR_27)
   VAR_25->tgoldtable =
    FUNC_2(FUNC_3(VAR_12, VAR_26));
  else
   VAR_25->tgoldtable = ((void*)0);

  VAR_26 = FUNC_17(VAR_21, VAR_2,
       VAR_18->rd_att, &VAR_27);
  if (!VAR_27)
   VAR_25->tgnewtable =
    FUNC_2(FUNC_3(VAR_12, VAR_26));
  else
   VAR_25->tgnewtable = ((void*)0);

  VAR_26 = FUNC_17(VAR_21, VAR_4,
       VAR_18->rd_att, &VAR_27);
  if (!VAR_27)
   VAR_25->tgqual = FUNC_14(VAR_26);
  else
   VAR_25->tgqual = ((void*)0);

  VAR_15++;
 }

 FUNC_26(VAR_20);
 FUNC_28(VAR_18, VAR_0);


 if (VAR_15 == 0)
 {
  FUNC_21(VAR_17);
  return;
 }


 VAR_14 = (TriggerDesc *) FUNC_20(sizeof(TriggerDesc));
 VAR_14->triggers = VAR_17;
 VAR_14->numtriggers = VAR_15;
 for (VAR_23 = 0; VAR_23 < VAR_15; VAR_23++)
  FUNC_13(VAR_14, &(VAR_17[VAR_23]));


 VAR_22 = FUNC_7(VAR_7);
 VAR_13->trigdesc = FUNC_0(VAR_14);
 FUNC_7(VAR_22);


 FUNC_4(VAR_14);
}
