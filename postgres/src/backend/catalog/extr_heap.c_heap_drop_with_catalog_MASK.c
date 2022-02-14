
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ relispartition; } ;
struct TYPE_19__ {int t_self; } ;
struct TYPE_18__ {TYPE_1__* rd_rel; } ;
struct TYPE_17__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_class ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 int VAR_11 ;
 TYPE_3__* FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int FUNC_22 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_23 (scalar_t__,int ) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_26 (int ,int ) ;
 int FUNC_27 (scalar_t__,scalar_t__) ;

void
FUNC_28(Oid VAR_12)
{
 Relation VAR_13;
 HeapTuple VAR_14;
 Oid VAR_15 = VAR_4,
    VAR_16 = VAR_4;
 VAR_14 = FUNC_18(VAR_10, FUNC_9(VAR_12));
 if (!FUNC_7(VAR_14))
  FUNC_19(VAR_1, "cache lookup failed for relation %u", VAR_12);
 if (((Form_pg_class) FUNC_6(VAR_14))->relispartition)
 {
  VAR_15 = FUNC_21(VAR_12);
  FUNC_8(VAR_15, VAR_0);





  VAR_16 = FUNC_20(VAR_15);
  if (FUNC_10(VAR_16) && VAR_12 != VAR_16)
   FUNC_8(VAR_16, VAR_0);
 }

 FUNC_14(VAR_14);




 VAR_13 = FUNC_23(VAR_12, VAR_0);






 FUNC_3(VAR_13, "DROP TABLE");







 FUNC_2(VAR_13);




 if (VAR_13->rd_rel->relkind == VAR_7)
 {
  Relation VAR_17;
  HeapTuple VAR_18;

  VAR_17 = FUNC_26(VAR_3, VAR_11);

  VAR_18 = FUNC_18(VAR_2, FUNC_9(VAR_12));
  if (!FUNC_7(VAR_18))
   FUNC_19(VAR_1, "cache lookup failed for foreign table %u", VAR_12);

  FUNC_1(VAR_17, &VAR_18->t_self);

  FUNC_14(VAR_18);
  FUNC_25(VAR_17, VAR_11);
 }




 if (VAR_13->rd_rel->relkind == VAR_8)
  FUNC_15(VAR_12);





 if (VAR_12 == VAR_16)
  FUNC_27(VAR_15, VAR_4);




 if (VAR_13->rd_rel->relkind != VAR_9 &&
  VAR_13->rd_rel->relkind != VAR_6 &&
  VAR_13->rd_rel->relkind != VAR_7 &&
  VAR_13->rd_rel->relkind != VAR_8)
 {
  FUNC_11(VAR_13);
 }






 FUNC_22(VAR_13, VAR_5);




 FUNC_17(VAR_4, VAR_12);




 FUNC_24(VAR_12);
 FUNC_12(VAR_12);




 FUNC_13(VAR_12);




 FUNC_16(VAR_12, 0);




 FUNC_4(VAR_12);




 FUNC_5(VAR_12);

 if (FUNC_10(VAR_15))
 {





  if (FUNC_10(VAR_16) && VAR_12 != VAR_16)
   FUNC_0(VAR_16);





  FUNC_0(VAR_15);

 }
}
