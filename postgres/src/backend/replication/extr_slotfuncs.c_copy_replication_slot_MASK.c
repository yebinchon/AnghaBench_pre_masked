
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ XLogSegNo ;
typedef scalar_t__ XLogRecPtr ;
typedef int TupleDesc ;
typedef void* TransactionId ;
struct TYPE_8__ {scalar_t__ confirmed_flush; scalar_t__ restart_lsn; void* catalog_xmin; void* xmin; } ;
struct TYPE_11__ {TYPE_2__ data; int mutex; void* effective_catalog_xmin; void* effective_xmin; } ;
struct TYPE_10__ {TYPE_3__* replication_slots; } ;
struct TYPE_7__ {scalar_t__ restart_lsn; scalar_t__ persistency; int name; void* catalog_xmin; void* xmin; int plugin; } ;
struct TYPE_9__ {int mutex; TYPE_1__ data; void* effective_catalog_xmin; void* effective_xmin; scalar_t__ in_use; } ;
typedef TYPE_3__ ReplicationSlot ;
typedef int * Name ;
typedef int HeapTuple ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int * FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_22 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_23 () ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 int FUNC_25 () ;
 int FUNC_26 (char*,char*,int,scalar_t__) ;
 int FUNC_27 (char*,int,int,scalar_t__) ;
 int FUNC_28 (int ,char*) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (char*) ;
 int FUNC_32 (char*,...) ;
 scalar_t__ FUNC_33 (int ,int *,int *) ;
 int FUNC_34 (int ,int *,int*) ;
 int VAR_9 ;
 char* FUNC_35 (char*) ;
 scalar_t__ FUNC_36 (char*,char*) ;
 int VAR_10 ;

__attribute__((used)) static Datum
FUNC_37(FunctionCallInfo VAR_11, bool VAR_12)
{
 Name VAR_13 = FUNC_10(0);
 Name VAR_14 = FUNC_10(1);
 ReplicationSlot *VAR_15 = ((void*)0);
 XLogRecPtr VAR_16;
 bool VAR_17;
 bool VAR_18;
 char *VAR_19;
 Datum VAR_20[2];
 bool VAR_21[2];
 Datum VAR_22;
 TupleDesc VAR_23;
 HeapTuple VAR_24;

 if (FUNC_33(VAR_11, ((void*)0), &VAR_23) != VAR_8)
  FUNC_28(VAR_2, "return type must be a row type");

 FUNC_25();

 if (VAR_12)
  FUNC_1();
 else
  FUNC_2();

 FUNC_5(VAR_6, VAR_3);
 for (int VAR_25 = 0; VAR_25 < VAR_9; VAR_25++)
 {
  ReplicationSlot *VAR_26 = &VAR_7->replication_slots[VAR_25];

  if (VAR_26->in_use && FUNC_36(FUNC_8(VAR_26->data.name), FUNC_8(*VAR_13)) == 0)
  {
   FUNC_20(&VAR_26->mutex);
   VAR_17 = FUNC_19(VAR_26);
   VAR_16 = VAR_26->data.restart_lsn;
   VAR_18 = VAR_26->data.persistency == VAR_5;
   VAR_19 = VAR_12 ? FUNC_35(FUNC_8(VAR_26->data.plugin)) : ((void*)0);
   FUNC_21(&VAR_26->mutex);

   VAR_15 = VAR_26;
   break;
  }
 }

 FUNC_6(VAR_6);

 if (VAR_15 == ((void*)0))
  FUNC_29(VAR_2,
    (FUNC_30(VAR_1),
     FUNC_32("replication slot \"%s\" does not exist", FUNC_8(*VAR_13))));


 if (VAR_17 != VAR_12)
  FUNC_29(VAR_2,
    (FUNC_30(VAR_0),
     VAR_17 ?
     FUNC_32("cannot copy physical replication slot \"%s\" as a logical replication slot",
      FUNC_8(*VAR_13)) :
     FUNC_32("cannot copy logical replication slot \"%s\" as a physical replication slot",
      FUNC_8(*VAR_13))));


 if (FUNC_24(VAR_16))
 {
  FUNC_0(!VAR_12);
  FUNC_29(VAR_2,
    (FUNC_30(VAR_0),
     (FUNC_32("cannot copy a replication slot that doesn't reserve WAL"))));
 }


 if (FUNC_11() >= 3)
  VAR_18 = FUNC_9(2);
 if (FUNC_11() >= 4)
 {
  FUNC_0(VAR_12);
  VAR_19 = FUNC_8(*(FUNC_10(3)));
 }


 if (VAR_12)
  FUNC_26(FUNC_8(*VAR_14),
          VAR_19,
          VAR_18,
          VAR_16);
 else
  FUNC_27(FUNC_8(*VAR_14),
           1,
           VAR_18,
           VAR_16);





 {
  TransactionId VAR_27;
  TransactionId VAR_28;
  TransactionId VAR_29;
  TransactionId VAR_30;
  XLogRecPtr VAR_31;
  bool VAR_32;
  char *VAR_33;


  FUNC_20(&VAR_15->mutex);
  VAR_27 = VAR_15->effective_xmin;
  VAR_28 = VAR_15->effective_catalog_xmin;

  VAR_29 = VAR_15->data.xmin;
  VAR_30 = VAR_15->data.catalog_xmin;
  VAR_31 = VAR_15->data.restart_lsn;


  VAR_33 = FUNC_35(FUNC_8(VAR_15->data.name));
  VAR_32 = FUNC_19(VAR_15);
  FUNC_21(&VAR_15->mutex);
  if (VAR_31 < VAR_16 ||
   VAR_17 != VAR_32 ||
   FUNC_36(VAR_33, FUNC_8(*VAR_13)) != 0)
   FUNC_29(VAR_2,
     (FUNC_32("could not copy replication slot \"%s\"",
       FUNC_8(*VAR_13)),
      FUNC_31("The source replication slot was modified incompatibly during the copy operation.")));


  FUNC_20(&VAR_4->mutex);
  VAR_4->effective_xmin = VAR_27;
  VAR_4->effective_catalog_xmin = VAR_28;

  VAR_4->data.xmin = VAR_29;
  VAR_4->data.catalog_xmin = VAR_30;
  VAR_4->data.restart_lsn = VAR_31;
  FUNC_21(&VAR_4->mutex);

  FUNC_13();
  FUNC_18(0);
  FUNC_17();
  FUNC_16();
 }


 if (VAR_12 && !VAR_18)
  FUNC_14();


 VAR_20[0] = FUNC_7(VAR_14);
 VAR_21[0] = 0;
 if (!FUNC_24(VAR_4->data.confirmed_flush))
 {
  VAR_20[1] = FUNC_4(VAR_4->data.confirmed_flush);
  VAR_21[1] = 0;
 }
 else
  VAR_21[1] = 1;

 VAR_24 = FUNC_34(VAR_23, VAR_20, VAR_21);
 VAR_22 = FUNC_3(VAR_24);

 FUNC_15();

 FUNC_12(VAR_22);
}
