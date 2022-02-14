
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_28__ {int * tg_trigslot; TYPE_4__* tg_relation; int tg_trigger; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_31__ {int nkeys; int * pf_eq_oprs; int * fk_attnums; int * pk_attnums; int fk_relid; } ;
struct TYPE_30__ {TYPE_1__* rd_rel; } ;
struct TYPE_29__ {int data; int len; } ;
struct TYPE_27__ {scalar_t__ relkind; } ;
typedef TYPE_3__ StringInfoData ;
typedef int * SPIPlanPtr ;
typedef TYPE_4__* Relation ;
typedef int RI_QueryKey ;
typedef TYPE_5__ RI_ConstraintInfo ;
typedef scalar_t__ Oid ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,char*,char const*,char*,...) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,TYPE_4__*) ;
 int FUNC_13 (int *,TYPE_5__ const*,int ) ;
 TYPE_5__* FUNC_14 (int ,TYPE_4__*,int) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (TYPE_3__*,char const*,char*,scalar_t__,int ,char*,scalar_t__) ;
 int FUNC_17 (TYPE_3__*,scalar_t__) ;
 int FUNC_18 (TYPE_5__ const*,int *,int *,TYPE_4__*,TYPE_4__*,int *,int *,int,int ) ;
 int * FUNC_19 (int ,int,scalar_t__*,int *,TYPE_4__*,TYPE_4__*) ;
 int FUNC_20 (TYPE_2__*,int) ;
 int FUNC_21 (char*,char*,int) ;
 int FUNC_22 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_23 (int ,int ) ;

__attribute__((used)) static Datum
FUNC_24(TriggerData *VAR_11, bool VAR_12)
{
 const RI_ConstraintInfo *VAR_13;
 Relation VAR_14;
 Relation VAR_15;
 TupleTableSlot *VAR_16;
 RI_QueryKey VAR_17;
 SPIPlanPtr VAR_18;

 VAR_13 = FUNC_14(VAR_11->tg_trigger,
         VAR_11->tg_relation, 1);







 VAR_14 = FUNC_23(VAR_13->fk_relid, VAR_7);
 VAR_15 = VAR_11->tg_relation;
 VAR_16 = VAR_11->tg_trigslot;

 if (FUNC_4() != VAR_8)
  FUNC_8(VAR_0, "SPI_connect failed");





 FUNC_13(&VAR_17, VAR_13,
      (VAR_12
       ? VAR_6
       : VAR_5));

 if ((VAR_18 = FUNC_15(&VAR_17)) == ((void*)0))
 {
  StringInfoData VAR_19;
  StringInfoData VAR_20;
  char VAR_21[VAR_2];
  char VAR_22[VAR_1];
  char VAR_23[16];
  const char *VAR_24;
  const char *VAR_25;
  Oid VAR_26[VAR_4];
  const char *VAR_27;
  FUNC_10(&VAR_19);
  FUNC_10(&VAR_20);
  VAR_27 = VAR_14->rd_rel->relkind == VAR_3 ?
   "" : "ONLY ";
  FUNC_12(VAR_21, VAR_14);
  FUNC_7(&VAR_19, "UPDATE %s%s SET",
       VAR_27, VAR_21);
  VAR_24 = "";
  VAR_25 = "WHERE";
  for (int VAR_28 = 0; VAR_28 < VAR_13->nkeys; VAR_28++)
  {
   Oid VAR_29 = FUNC_3(VAR_15, VAR_13->pk_attnums[VAR_28]);
   Oid VAR_30 = FUNC_3(VAR_14, VAR_13->fk_attnums[VAR_28]);
   Oid VAR_31 = FUNC_1(VAR_15, VAR_13->pk_attnums[VAR_28]);
   Oid VAR_32 = FUNC_1(VAR_14, VAR_13->fk_attnums[VAR_28]);

   FUNC_11(VAR_22,
       FUNC_2(VAR_14, VAR_13->fk_attnums[VAR_28]));
   FUNC_7(&VAR_19,
        "%s %s = %s",
        VAR_24, VAR_22,
        VAR_12 ? "NULL" : "DEFAULT");
   FUNC_21(VAR_23, "$%d", VAR_28 + 1);
   FUNC_16(&VAR_20, VAR_25,
       VAR_23, VAR_29,
       VAR_13->pf_eq_oprs[VAR_28],
       VAR_22, VAR_30);
   if (VAR_31 != VAR_32 && !FUNC_9(VAR_31))
    FUNC_17(&VAR_19, VAR_31);
   VAR_24 = ",";
   VAR_25 = "AND";
   VAR_26[VAR_28] = VAR_29;
  }
  FUNC_6(&VAR_19, VAR_20.data, VAR_20.len);


  VAR_18 = FUNC_19(VAR_19.data, VAR_13->nkeys, VAR_26,
        &VAR_17, VAR_14, VAR_15);
 }




 FUNC_18(VAR_13, &VAR_17, VAR_18,
     VAR_14, VAR_15,
     VAR_16, ((void*)0),
     1,
     VAR_10);

 if (FUNC_5() != VAR_9)
  FUNC_8(VAR_0, "SPI_finish failed");

 FUNC_22(VAR_14, VAR_7);

 if (VAR_12)
  return FUNC_0(((void*)0));
 else
 {
  return FUNC_20(VAR_11, 1);
 }
}
