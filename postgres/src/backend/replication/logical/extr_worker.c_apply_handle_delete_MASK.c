
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_22__ {int es_tupleTable; int es_result_relation_info; } ;
struct TYPE_19__ {scalar_t__ replident; } ;
struct TYPE_21__ {int localrel; TYPE_1__ remoterel; } ;
struct TYPE_20__ {int values; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_2__ LogicalRepTupleData ;
typedef TYPE_3__ LogicalRepRelMapEntry ;
typedef int LogicalRepRelId ;
typedef TYPE_4__ EState ;
typedef int EPQState ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*,int *,int ,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (TYPE_4__*,int ,int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_4__*,int *,int *) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int VAR_1 ;
 int FUNC_15 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_19 (int ,int ,int ,int *,int *) ;
 int FUNC_20 (int ,int ,int *,int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_23 (TYPE_3__*) ;
 TYPE_4__* FUNC_24 (TYPE_3__*) ;
 int FUNC_25 (int ,char*,int ) ;
 int FUNC_26 () ;
 int FUNC_27 (int ,TYPE_2__*) ;
 int FUNC_28 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_29 (int ,int ) ;
 int FUNC_30 (TYPE_3__*) ;
 int FUNC_31 (int *,TYPE_3__*,int ) ;
 int * FUNC_32 (int ,int *) ;

__attribute__((used)) static void
FUNC_33(StringInfo VAR_7)
{
 LogicalRepRelMapEntry *VAR_8;
 LogicalRepTupleData VAR_9;
 LogicalRepRelId VAR_10;
 Oid VAR_11;
 EState *VAR_12;
 EPQState VAR_13;
 TupleTableSlot *VAR_14;
 TupleTableSlot *VAR_15;
 bool VAR_16;
 MemoryContext VAR_17;

 FUNC_26();

 VAR_10 = FUNC_27(VAR_7, &VAR_9);
 VAR_8 = FUNC_29(VAR_10, VAR_5);
 if (!FUNC_30(VAR_8))
 {




  FUNC_28(VAR_8, VAR_5);
  return;
 }


 FUNC_23(VAR_8);


 VAR_12 = FUNC_24(VAR_8);
 VAR_14 = FUNC_7(VAR_12,
          FUNC_21(VAR_8->localrel),
          &VAR_6);
 VAR_15 = FUNC_32(VAR_8->localrel,
          &VAR_12->es_tupleTable);
 FUNC_4(&VAR_13, VAR_12, ((void*)0), VAR_2, -1);

 FUNC_18(FUNC_14());
 FUNC_8(VAR_12->es_result_relation_info, 0);


 VAR_17 = FUNC_15(FUNC_12(VAR_12));
 FUNC_31(VAR_14, VAR_8, VAR_9.values);
 FUNC_15(VAR_17);





 VAR_11 = FUNC_13(VAR_8->localrel);
 FUNC_1(FUNC_16(VAR_11) ||
     (VAR_8->remoterel.replident == VAR_4));

 if (FUNC_16(VAR_11))
  VAR_16 = FUNC_19(VAR_8->localrel, VAR_11,
            VAR_1,
            VAR_14, VAR_15);
 else
  VAR_16 = FUNC_20(VAR_8->localrel, VAR_1,
           VAR_14, VAR_15);

 if (VAR_16)
 {
  FUNC_5(&VAR_13, VAR_15);


  FUNC_10(VAR_12, &VAR_13, VAR_15);
 }
 else
 {

  FUNC_25(VAR_0,
    "logical replication could not find row for delete "
    "in replication target relation \"%s\"",
    FUNC_22(VAR_8->localrel));
 }


 FUNC_6(VAR_12->es_result_relation_info);
 FUNC_17();


 FUNC_0(VAR_12);

 FUNC_3(&VAR_13);
 FUNC_9(VAR_12->es_tupleTable, 0);
 FUNC_11(VAR_12);

 FUNC_28(VAR_8, VAR_3);

 FUNC_2();
}
