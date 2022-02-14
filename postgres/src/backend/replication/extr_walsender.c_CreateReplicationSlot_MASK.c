
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xloc ;
typedef int uint32 ;
typedef int nulls ;
typedef int TupleDesc ;
typedef int TupOutputState ;
struct TYPE_10__ {int confirmed_flush; int name; } ;
struct TYPE_13__ {TYPE_1__ data; } ;
struct TYPE_12__ {scalar_t__ kind; char const* plugin; scalar_t__ temporary; int slotname; } ;
struct TYPE_11__ {int snapshot_builder; } ;
typedef int Snapshot ;
typedef TYPE_2__ LogicalDecodingContext ;
typedef int DestReceiver ;
typedef int Datum ;
typedef TYPE_3__ CreateReplicationSlotCmd ;
typedef scalar_t__ CRSSnapshotAction ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (char const*,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int VAR_6 ;
 int FUNC_10 (int*,int,int) ;
 int VAR_7 ;
 TYPE_5__* VAR_8 ;
 int VAR_9 ;
 char* FUNC_11 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int ) ;
 char* FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_21 (int ,int ,char*,int ,int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int * FUNC_22 (int *,int ,int *) ;
 int FUNC_23 (int *,int *,int*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (char*,char*) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_27 (TYPE_3__*,int*,scalar_t__*) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_28 (char*,int,char*,int,int) ;

__attribute__((used)) static void
FUNC_29(CreateReplicationSlotCmd *VAR_27)
{
 const char *VAR_28 = ((void*)0);
 char VAR_29[VAR_6];
 char *VAR_30;
 bool VAR_31 = 0;
 CRSSnapshotAction VAR_32 = VAR_0;
 DestReceiver *VAR_33;
 TupOutputState *VAR_34;
 TupleDesc VAR_35;
 Datum VAR_36[4];
 bool VAR_37[4];

 FUNC_0(!VAR_8);

 FUNC_27(VAR_27, &VAR_31, &VAR_32);


 VAR_26 = 0;
 VAR_25 = VAR_17;

 if (VAR_27->kind == VAR_11)
 {
  FUNC_12(VAR_27->slotname, 0,
         VAR_27->temporary ? VAR_14 : VAR_13);
 }
 else
 {
  FUNC_2();
  FUNC_12(VAR_27->slotname, 1,
         VAR_27->temporary ? VAR_14 : VAR_12);
 }

 if (VAR_27->kind == VAR_10)
 {
  LogicalDecodingContext *VAR_38;
  bool VAR_39 = 0;





  if (VAR_32 == VAR_0)
  {
   if (FUNC_9())
    FUNC_25(VAR_3,

      (FUNC_26("%s must not be called inside a transaction",
        "CREATE_REPLICATION_SLOT ... EXPORT_SNAPSHOT")));

   VAR_39 = 1;
  }
  else if (VAR_32 == VAR_1)
  {
   if (!FUNC_9())
    FUNC_25(VAR_3,

      (FUNC_26("%s must be called inside a transaction",
        "CREATE_REPLICATION_SLOT ... USE_SNAPSHOT")));

   if (VAR_22 != VAR_21)
    FUNC_25(VAR_3,

      (FUNC_26("%s must be called in REPEATABLE READ isolation mode transaction",
        "CREATE_REPLICATION_SLOT ... USE_SNAPSHOT")));

   if (VAR_4)
    FUNC_25(VAR_3,

      (FUNC_26("%s must be called before any query",
        "CREATE_REPLICATION_SLOT ... USE_SNAPSHOT")));

   if (FUNC_8())
    FUNC_25(VAR_3,

      (FUNC_26("%s must not be called in a subtransaction",
        "CREATE_REPLICATION_SLOT ... USE_SNAPSHOT")));

   VAR_39 = 1;
  }

  VAR_38 = FUNC_4(VAR_27->plugin, VAR_9, VAR_39,
          VAR_5,
          VAR_24,
          VAR_18, VAR_20,
          VAR_19);
  VAR_23 = 0;


  FUNC_6(VAR_38);







  if (VAR_32 == VAR_0)
  {
   VAR_28 = FUNC_19(VAR_38->snapshot_builder);
  }
  else if (VAR_32 == VAR_1)
  {
   Snapshot VAR_40;

   VAR_40 = FUNC_20(VAR_38->snapshot_builder);
   FUNC_18(VAR_40, VAR_7);
  }


  FUNC_7(VAR_38);

  if (!VAR_27->temporary)
   FUNC_14();
 }
 else if (VAR_27->kind == VAR_11 && VAR_31)
 {
  FUNC_16();

  FUNC_13();


  if (!VAR_27->temporary)
   FUNC_17();
 }

 FUNC_28(VAR_29, sizeof(VAR_29), "%X/%X",
    (uint32) (VAR_8->data.confirmed_flush >> 32),
    (uint32) VAR_8->data.confirmed_flush);

 VAR_33 = FUNC_3(VAR_2);
 FUNC_10(VAR_37, 0, sizeof(VAR_37));
 VAR_35 = FUNC_5(4);
 FUNC_21(VAR_35, (AttrNumber) 1, "slot_name",
         VAR_15, -1, 0);
 FUNC_21(VAR_35, (AttrNumber) 2, "consistent_point",
         VAR_15, -1, 0);
 FUNC_21(VAR_35, (AttrNumber) 3, "snapshot_name",
         VAR_15, -1, 0);
 FUNC_21(VAR_35, (AttrNumber) 4, "output_plugin",
         VAR_15, -1, 0);


 VAR_34 = FUNC_22(VAR_33, VAR_35, &VAR_16);


 VAR_30 = FUNC_11(VAR_8->data.name);
 VAR_36[0] = FUNC_1(VAR_30);


 VAR_36[1] = FUNC_1(VAR_29);


 if (VAR_28 != ((void*)0))
  VAR_36[2] = FUNC_1(VAR_28);
 else
  VAR_37[2] = 1;


 if (VAR_27->plugin != ((void*)0))
  VAR_36[3] = FUNC_1(VAR_27->plugin);
 else
  VAR_37[3] = 1;


 FUNC_23(VAR_34, VAR_36, VAR_37);
 FUNC_24(VAR_34);

 FUNC_15();
}
