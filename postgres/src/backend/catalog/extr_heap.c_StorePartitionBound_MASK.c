
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int new_val ;
typedef int new_repl ;
typedef int new_null ;
struct TYPE_16__ {int relispartition; } ;
struct TYPE_15__ {int t_self; } ;
struct TYPE_14__ {scalar_t__ is_default; } ;
typedef int Relation ;
typedef TYPE_1__ PartitionBoundSpec ;
typedef int Oid ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_class ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,TYPE_2__*) ;
 int FUNC_5 () ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,TYPE_2__*,int,int*) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_2__*) ;
 TYPE_2__* FUNC_18 (TYPE_2__*,int ,int*,int*,int*) ;
 int FUNC_19 (int*,int,int) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;

void
FUNC_24(Relation VAR_6, Relation VAR_7, PartitionBoundSpec *VAR_8)
{
 Relation VAR_9;
 HeapTuple VAR_10,
    VAR_11;
 Datum VAR_12[VAR_2];
 bool VAR_13[VAR_2],
    VAR_14[VAR_2];
 Oid VAR_15;


 VAR_9 = FUNC_22(VAR_4, VAR_5);
 VAR_10 = FUNC_13(VAR_3,
        FUNC_8(FUNC_12(VAR_6)));
 if (!FUNC_7(VAR_10))
  FUNC_15(VAR_1, "cache lookup failed for relation %u",
    FUNC_12(VAR_6));
 FUNC_19(VAR_12, 0, sizeof(VAR_12));
 FUNC_19(VAR_13, 0, sizeof(VAR_13));
 FUNC_19(VAR_14, 0, sizeof(VAR_14));
 VAR_12[VAR_0 - 1] = FUNC_1(FUNC_20(VAR_8));
 VAR_13[VAR_0 - 1] = 0;
 VAR_14[VAR_0 - 1] = 1;
 VAR_11 = FUNC_18(VAR_10, FUNC_10(VAR_9),
         VAR_12, VAR_13, VAR_14);

 ((Form_pg_class) FUNC_6(VAR_11))->relispartition = 1;
 FUNC_4(VAR_9, &VAR_11->t_self, VAR_11);
 FUNC_17(VAR_11);
 FUNC_21(VAR_9, VAR_5);





 if (VAR_8->is_default)
  FUNC_23(FUNC_12(VAR_7),
          FUNC_12(VAR_6));


 FUNC_5();







 VAR_15 = FUNC_16(FUNC_11(VAR_7));
 if (FUNC_9(VAR_15))
  FUNC_3(VAR_15);

 FUNC_2(VAR_7);
}
