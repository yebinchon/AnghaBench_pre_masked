
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_20__ {int es_tupleTable; int es_result_relation_info; } ;
struct TYPE_19__ {int localrel; } ;
struct TYPE_18__ {int values; } ;
typedef int StringInfo ;
typedef int MemoryContext ;
typedef TYPE_1__ LogicalRepTupleData ;
typedef TYPE_2__ LogicalRepRelMapEntry ;
typedef int LogicalRepRelId ;
typedef TYPE_3__ EState ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_3__*,int ,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,TYPE_1__*) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_18 (int ,int ) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_21 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_22(StringInfo VAR_3)
{
 LogicalRepRelMapEntry *VAR_4;
 LogicalRepTupleData VAR_5;
 LogicalRepRelId VAR_6;
 EState *VAR_7;
 TupleTableSlot *VAR_8;
 MemoryContext VAR_9;

 FUNC_15();

 VAR_6 = FUNC_16(VAR_3, &VAR_5);
 VAR_4 = FUNC_18(VAR_6, VAR_1);
 if (!FUNC_19(VAR_4))
 {




  FUNC_17(VAR_4, VAR_1);
  return;
 }


 VAR_7 = FUNC_14(VAR_4);
 VAR_8 = FUNC_3(VAR_7,
          FUNC_13(VAR_4->localrel),
          &VAR_2);


 FUNC_12(FUNC_9());


 VAR_9 = FUNC_10(FUNC_8(VAR_7));
 FUNC_21(VAR_8, VAR_4, VAR_5.values);
 FUNC_20(VAR_4, VAR_7, VAR_8);
 FUNC_10(VAR_9);

 FUNC_4(VAR_7->es_result_relation_info, 0);


 FUNC_6(VAR_7, VAR_8);


 FUNC_2(VAR_7->es_result_relation_info);
 FUNC_11();


 FUNC_0(VAR_7);

 FUNC_5(VAR_7->es_tupleTable, 0);
 FUNC_7(VAR_7);

 FUNC_17(VAR_4, VAR_0);

 FUNC_1();
}
