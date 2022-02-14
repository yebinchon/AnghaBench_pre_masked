
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int TableScanDesc ;
struct TYPE_15__ {int * ecxt_scantuple; } ;
struct TYPE_14__ {int conname; int oid; } ;
struct TYPE_13__ {TYPE_1__* rd_rel; } ;
struct TYPE_12__ {scalar_t__ relkind; } ;
typedef int Snapshot ;
typedef TYPE_2__* Relation ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_constraint ;
typedef int ExprState ;
typedef TYPE_4__ ExprContext ;
typedef int Expr ;
typedef int EState ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 TYPE_4__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int ,int ,int ,int*) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_21 (char*) ;
 int FUNC_22 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ,int ,int *) ;
 int * FUNC_25 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_26(Relation VAR_7, HeapTuple VAR_8)
{
 EState *VAR_9;
 Datum VAR_10;
 char *VAR_11;
 Expr *VAR_12;
 ExprState *VAR_13;
 TableScanDesc VAR_14;
 ExprContext *VAR_15;
 MemoryContext VAR_16;
 TupleTableSlot *VAR_17;
 Form_pg_constraint VAR_18;
 bool VAR_19;
 Snapshot VAR_20;





 if (VAR_7->rd_rel->relkind == VAR_5 ||
  VAR_7->rd_rel->relkind == VAR_6)
  return;

 VAR_18 = (Form_pg_constraint) FUNC_5(VAR_8);

 VAR_9 = FUNC_0();






 VAR_10 = FUNC_13(VAR_1, VAR_8, VAR_0,
        &VAR_19);
 if (VAR_19)
  FUNC_16(VAR_3, "null conbin for constraint %u",
    VAR_18->oid);
 VAR_11 = FUNC_14(VAR_10);
 VAR_12 = (Expr *) FUNC_21(VAR_11);
 VAR_13 = FUNC_3(VAR_12, VAR_9);

 VAR_15 = FUNC_7(VAR_9);
 VAR_17 = FUNC_25(VAR_7, ((void*)0));
 VAR_15->ecxt_scantuple = VAR_17;

 VAR_20 = FUNC_11(FUNC_6());
 VAR_14 = FUNC_22(VAR_7, VAR_20, 0, ((void*)0));





 VAR_16 = FUNC_9(FUNC_8(VAR_9));

 while (FUNC_24(VAR_14, VAR_4, VAR_17))
 {
  if (!FUNC_1(VAR_13, VAR_15))
   FUNC_17(VAR_3,
     (FUNC_18(VAR_2),
      FUNC_19("check constraint \"%s\" is violated by some row",
       FUNC_10(VAR_18->conname)),
      FUNC_20(VAR_7, FUNC_10(VAR_18->conname))));

  FUNC_12(VAR_15);
 }

 FUNC_9(VAR_16);
 FUNC_23(VAR_14);
 FUNC_15(VAR_20);
 FUNC_2(VAR_17);
 FUNC_4(VAR_9);
}
