
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int free_percent; int free_space; int dead_tuple_percent; int dead_tuple_len; int dead_tuple_count; int tuple_percent; int tuple_len; int tuple_count; int scanned_percent; int table_len; int member_0; } ;
typedef TYPE_2__ output_type ;
typedef int nulls ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_16__ {TYPE_1__* rd_rel; } ;
struct TYPE_15__ {int natts; } ;
struct TYPE_13__ {scalar_t__ relkind; scalar_t__ relam; } ;
typedef TYPE_4__* Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int ,int *,TYPE_3__**) ;
 int FUNC_10 (TYPE_3__*,int *,int*) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_4__*,TYPE_2__*) ;

Datum
FUNC_15(Oid VAR_8, FunctionCallInfo VAR_9)
{
 Relation VAR_10;
 output_type VAR_11 = {0};
 TupleDesc VAR_12;
 bool VAR_13[VAR_4];
 Datum VAR_14[VAR_4];
 HeapTuple VAR_15;
 int VAR_16 = 0;

 if (FUNC_9(VAR_9, ((void*)0), &VAR_12) != VAR_7)
  FUNC_5(VAR_2, "return type must be a row type");

 if (VAR_12->natts != VAR_4)
  FUNC_5(VAR_2, "incorrect number of output arguments");

 VAR_10 = FUNC_13(VAR_8, VAR_0);






 if (FUNC_3(VAR_10))
  FUNC_6(VAR_2,
    (FUNC_7(VAR_1),
     FUNC_8("cannot access temporary tables of other sessions")));






 if (!(VAR_10->rd_rel->relkind == VAR_6 ||
    VAR_10->rd_rel->relkind == VAR_5))
  FUNC_6(VAR_2,
    (FUNC_7(VAR_1),
     FUNC_8("\"%s\" is not a table or materialized view",
      FUNC_4(VAR_10))));

 if (VAR_10->rd_rel->relam != VAR_3)
  FUNC_6(VAR_2, (FUNC_7(VAR_1),
      FUNC_8("only heap AM is supported")));

 FUNC_14(VAR_10, &VAR_11);

 FUNC_12(VAR_10, VAR_0);

 FUNC_11(VAR_13, 0, sizeof(VAR_13));

 VAR_14[VAR_16++] = FUNC_2(VAR_11.table_len);
 VAR_14[VAR_16++] = FUNC_0(VAR_11.scanned_percent);
 VAR_14[VAR_16++] = FUNC_2(VAR_11.tuple_count);
 VAR_14[VAR_16++] = FUNC_2(VAR_11.tuple_len);
 VAR_14[VAR_16++] = FUNC_0(VAR_11.tuple_percent);
 VAR_14[VAR_16++] = FUNC_2(VAR_11.dead_tuple_count);
 VAR_14[VAR_16++] = FUNC_2(VAR_11.dead_tuple_len);
 VAR_14[VAR_16++] = FUNC_0(VAR_11.dead_tuple_percent);
 VAR_14[VAR_16++] = FUNC_2(VAR_11.free_space);
 VAR_14[VAR_16++] = FUNC_0(VAR_11.free_percent);

 VAR_15 = FUNC_10(VAR_12, VAR_14, VAR_13);
 return FUNC_1(VAR_15);
}
