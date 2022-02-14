
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_30__ {TYPE_4__* tg_relation; int * tg_trigslot; int * tg_newslot; int tg_event; int tg_trigger; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_33__ {int nkeys; int * pf_eq_oprs; int * pk_attnums; int * fk_attnums; int conname; int confmatchtype; int pk_relid; } ;
struct TYPE_32__ {TYPE_1__* rd_rel; } ;
struct TYPE_31__ {int data; } ;
struct TYPE_29__ {scalar_t__ relkind; } ;
typedef TYPE_3__ StringInfoData ;
typedef int * SPIPlanPtr ;
typedef TYPE_4__* Relation ;
typedef int RI_QueryKey ;
typedef TYPE_5__ RI_ConstraintInfo ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,char*,char const*,char*) ;
 int FUNC_10 (TYPE_3__*,char*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int ,int ) ;
 int FUNC_16 (TYPE_4__*,int ) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (char*,TYPE_4__*) ;
 int FUNC_20 (int *,TYPE_5__ const*,int ) ;
 TYPE_5__* FUNC_21 (int ,TYPE_4__*,int) ;
 int * FUNC_22 (int *) ;
 int FUNC_23 (TYPE_3__*,char const*,char*,int ,int ,char*,int ) ;
 int FUNC_24 (int ,int *,TYPE_5__ const*,int) ;
 int FUNC_25 (TYPE_5__ const*,int *,int *,TYPE_4__*,TYPE_4__*,int *,int *,int,int ) ;
 int * FUNC_26 (int ,int,int *,int *,TYPE_4__*,TYPE_4__*) ;
 int FUNC_27 (char*,char*,int) ;
 int FUNC_28 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_29 (int ,int ) ;
 int FUNC_30 (TYPE_4__*,int *,int ) ;

__attribute__((used)) static Datum
FUNC_31(TriggerData *VAR_12)
{
 const RI_ConstraintInfo *VAR_13;
 Relation VAR_14;
 Relation VAR_15;
 TupleTableSlot *VAR_16;
 RI_QueryKey VAR_17;
 SPIPlanPtr VAR_18;

 VAR_13 = FUNC_21(VAR_12->tg_trigger,
         VAR_12->tg_relation, 0);

 if (FUNC_8(VAR_12->tg_event))
  VAR_16 = VAR_12->tg_newslot;
 else
  VAR_16 = VAR_12->tg_trigslot;
 if (!FUNC_30(VAR_12->tg_relation, VAR_16, VAR_11))
  return FUNC_1(((void*)0));







 VAR_14 = VAR_12->tg_relation;
 VAR_15 = FUNC_29(VAR_13->pk_relid, VAR_7);

 switch (FUNC_24(FUNC_4(VAR_14), VAR_16, VAR_13, 0))
 {
  case 130:





   FUNC_28(VAR_15, VAR_7);
   return FUNC_1(((void*)0));

  case 128:





   switch (VAR_13->confmatchtype)
   {
    case 133:





     FUNC_12(VAR_1,
       (FUNC_13(VAR_0),
        FUNC_15("insert or update on table \"%s\" violates foreign key constraint \"%s\"",
         FUNC_5(VAR_14),
         FUNC_0(VAR_13->conname)),
        FUNC_14("MATCH FULL does not allow mixing of null and nonnull key values."),
        FUNC_16(VAR_14,
            FUNC_0(VAR_13->conname))));
     FUNC_28(VAR_15, VAR_7);
     return FUNC_1(((void*)0));

    case 131:





     FUNC_28(VAR_15, VAR_7);
     return FUNC_1(((void*)0));
   }

  case 129:





   break;
 }

 if (FUNC_6() != VAR_8)
  FUNC_11(VAR_1, "SPI_connect failed");


 FUNC_20(&VAR_17, VAR_13, VAR_6);

 if ((VAR_18 = FUNC_22(&VAR_17)) == ((void*)0))
 {
  StringInfoData VAR_19;
  char VAR_20[VAR_3];
  char VAR_21[VAR_2];
  char VAR_22[16];
  const char *VAR_23;
  Oid VAR_24[VAR_5];
  const char *VAR_25;
  FUNC_17(&VAR_19);
  VAR_25 = VAR_15->rd_rel->relkind == VAR_4 ?
   "" : "ONLY ";
  FUNC_19(VAR_20, VAR_15);
  FUNC_9(&VAR_19, "SELECT 1 FROM %s%s x",
       VAR_25, VAR_20);
  VAR_23 = "WHERE";
  for (int VAR_26 = 0; VAR_26 < VAR_13->nkeys; VAR_26++)
  {
   Oid VAR_27 = FUNC_3(VAR_15, VAR_13->pk_attnums[VAR_26]);
   Oid VAR_28 = FUNC_3(VAR_14, VAR_13->fk_attnums[VAR_26]);

   FUNC_18(VAR_21,
       FUNC_2(VAR_15, VAR_13->pk_attnums[VAR_26]));
   FUNC_27(VAR_22, "$%d", VAR_26 + 1);
   FUNC_23(&VAR_19, VAR_23,
       VAR_21, VAR_27,
       VAR_13->pf_eq_oprs[VAR_26],
       VAR_22, VAR_28);
   VAR_23 = "AND";
   VAR_24[VAR_26] = VAR_28;
  }
  FUNC_10(&VAR_19, " FOR KEY SHARE OF x");


  VAR_18 = FUNC_26(VAR_19.data, VAR_13->nkeys, VAR_24,
        &VAR_17, VAR_14, VAR_15);
 }




 FUNC_25(VAR_13, &VAR_17, VAR_18,
     VAR_14, VAR_15,
     ((void*)0), VAR_16,
     0,
     VAR_10);

 if (FUNC_7() != VAR_9)
  FUNC_11(VAR_1, "SPI_finish failed");

 FUNC_28(VAR_15, VAR_7);

 return FUNC_1(((void*)0));
}
