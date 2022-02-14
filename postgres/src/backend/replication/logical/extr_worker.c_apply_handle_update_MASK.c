
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_24__ {int es_tupleTable; int es_result_relation_info; } ;
struct TYPE_21__ {scalar_t__ replident; } ;
struct TYPE_23__ {int localrel; TYPE_1__ remoterel; } ;
struct TYPE_22__ {int changed; int values; } ;
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
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (TYPE_4__*,int ,int *) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (TYPE_4__*,int *,int *,int *) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int VAR_1 ;
 int FUNC_17 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 () ;
 int FUNC_20 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_21 (int ,int ,int ,int *,int *) ;
 int FUNC_22 (int ,int ,int *,int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_25 (TYPE_3__*) ;
 TYPE_4__* FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (int ,char*,int ) ;
 int FUNC_28 () ;
 int FUNC_29 (int ,int*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_30 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_31 (int ,int ) ;
 int FUNC_32 (TYPE_3__*) ;
 int FUNC_33 (int *,TYPE_3__*,int ,int ) ;
 int FUNC_34 (int *,TYPE_3__*,int ) ;
 int * FUNC_35 (int ,int *) ;

__attribute__((used)) static void
FUNC_36(StringInfo VAR_7)
{
 LogicalRepRelMapEntry *VAR_8;
 LogicalRepRelId VAR_9;
 Oid VAR_10;
 EState *VAR_11;
 EPQState VAR_12;
 LogicalRepTupleData VAR_13;
 LogicalRepTupleData VAR_14;
 bool VAR_15;
 TupleTableSlot *VAR_16;
 TupleTableSlot *VAR_17;
 bool VAR_18;
 MemoryContext VAR_19;

 FUNC_28();

 VAR_9 = FUNC_29(VAR_7, &VAR_15, &VAR_13,
           &VAR_14);
 VAR_8 = FUNC_31(VAR_9, VAR_5);
 if (!FUNC_32(VAR_8))
 {




  FUNC_30(VAR_8, VAR_5);
  return;
 }


 FUNC_25(VAR_8);


 VAR_11 = FUNC_26(VAR_8);
 VAR_17 = FUNC_9(VAR_11,
          FUNC_23(VAR_8->localrel),
          &VAR_6);
 VAR_16 = FUNC_35(VAR_8->localrel,
          &VAR_11->es_tupleTable);
 FUNC_4(&VAR_12, VAR_11, ((void*)0), VAR_2, -1);

 FUNC_20(FUNC_16());
 FUNC_10(VAR_11->es_result_relation_info, 0);


 VAR_19 = FUNC_17(FUNC_14(VAR_11));
 FUNC_34(VAR_17, VAR_8,
      VAR_15 ? VAR_13.values : VAR_14.values);
 FUNC_17(VAR_19);





 VAR_10 = FUNC_15(VAR_8->localrel);
 FUNC_1(FUNC_18(VAR_10) ||
     (VAR_8->remoterel.replident == VAR_4 && VAR_15));

 if (FUNC_18(VAR_10))
  VAR_18 = FUNC_21(VAR_8->localrel, VAR_10,
            VAR_1,
            VAR_17, VAR_16);
 else
  VAR_18 = FUNC_22(VAR_8->localrel, VAR_1,
           VAR_17, VAR_16);

 FUNC_6(VAR_17);






 if (VAR_18)
 {

  VAR_19 = FUNC_17(FUNC_14(VAR_11));
  FUNC_8(VAR_17, VAR_16);
  FUNC_33(VAR_17, VAR_8, VAR_14.values, VAR_14.changed);
  FUNC_17(VAR_19);

  FUNC_5(&VAR_12, VAR_17);


  FUNC_12(VAR_11, &VAR_12, VAR_16, VAR_17);
 }
 else
 {





  FUNC_27(VAR_0,
    "logical replication did not find row for update "
    "in replication target relation \"%s\"",
    FUNC_24(VAR_8->localrel));
 }


 FUNC_7(VAR_11->es_result_relation_info);
 FUNC_19();


 FUNC_0(VAR_11);

 FUNC_3(&VAR_12);
 FUNC_11(VAR_11->es_tupleTable, 0);
 FUNC_13(VAR_11);

 FUNC_30(VAR_8, VAR_3);

 FUNC_2();
}
