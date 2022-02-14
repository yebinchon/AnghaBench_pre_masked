
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_13__ ;


struct TYPE_24__ {int indisvalid; } ;
struct TYPE_23__ {int inhrelid; } ;
struct TYPE_22__ {TYPE_2__* rd_index; TYPE_1__* rd_rel; TYPE_13__* rd_indextuple; } ;
struct TYPE_21__ {int indisvalid; } ;
struct TYPE_20__ {scalar_t__ relkind; scalar_t__ relispartition; } ;
struct TYPE_19__ {int nparts; } ;
struct TYPE_18__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_3__* Relation ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_4__* Form_pg_inherits ;
typedef TYPE_5__* Form_pg_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_10 ;
 TYPE_15__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (TYPE_13__*) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_15 (int ,int ) ;
 int FUNC_16 (TYPE_3__*,int ,int,int *,int,int *) ;
 int FUNC_17 (int ) ;
 int * FUNC_18 (int ) ;
 int FUNC_19 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_20 (int ,int ) ;

__attribute__((used)) static void
FUNC_21(Relation VAR_12, Relation VAR_13)
{
 Relation VAR_14;
 SysScanDesc VAR_15;
 ScanKeyData VAR_16;
 int VAR_17 = 0;
 HeapTuple VAR_18;
 bool VAR_19 = 0;

 FUNC_0(VAR_12->rd_rel->relkind == VAR_10);






 VAR_14 = FUNC_20(VAR_9, VAR_1);
 FUNC_9(&VAR_16, VAR_2,
    VAR_3, VAR_5,
    FUNC_5(FUNC_7(VAR_12)));
 VAR_15 = FUNC_16(VAR_14, VAR_8, 1,
         ((void*)0), 1, &VAR_16);
 while ((VAR_18 = FUNC_18(VAR_15)) != ((void*)0))
 {
  Form_pg_inherits VAR_20 = (Form_pg_inherits) FUNC_3(VAR_18);
  HeapTuple VAR_21;
  Form_pg_index VAR_22;

  VAR_21 = FUNC_10(VAR_6,
         FUNC_5(VAR_20->inhrelid));
  if (!FUNC_4(VAR_21))
   FUNC_11(VAR_4, "cache lookup failed for index %u", VAR_20->inhrelid);
  VAR_22 = (Form_pg_index) FUNC_3(VAR_21);
  if (VAR_22->indisvalid)
   VAR_17 += 1;
  FUNC_8(VAR_21);
 }


 FUNC_17(VAR_15);
 FUNC_19(VAR_14, VAR_1);





 if (VAR_17 == FUNC_6(VAR_13)->nparts)
 {
  Relation VAR_23;
  HeapTuple VAR_24;

  VAR_23 = FUNC_20(VAR_7, VAR_11);

  VAR_24 = FUNC_13(VAR_12->rd_indextuple);
  ((Form_pg_index) FUNC_3(VAR_24))->indisvalid = 1;
  VAR_19 = 1;

  FUNC_1(VAR_23, &VAR_12->rd_indextuple->t_self, VAR_24);

  FUNC_19(VAR_23, VAR_11);
 }





 if (VAR_19 && VAR_12->rd_rel->relispartition)
 {
  Oid VAR_25,
     VAR_26;
  Relation VAR_27,
     VAR_28;


  FUNC_2();

  VAR_25 = FUNC_12(FUNC_7(VAR_12));
  VAR_26 = FUNC_12(FUNC_7(VAR_13));
  VAR_27 = FUNC_15(VAR_25, VAR_0);
  VAR_28 = FUNC_15(VAR_26, VAR_0);
  FUNC_0(!VAR_27->rd_index->indisvalid);

  FUNC_21(VAR_27, VAR_28);

  FUNC_14(VAR_27, VAR_0);
  FUNC_14(VAR_28, VAR_0);
 }
}
