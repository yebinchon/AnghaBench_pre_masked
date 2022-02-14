
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_22__ {char* conname; int fk_matchtype; int fk_del_action; int fk_upd_action; int initially_valid; int initdeferred; int deferrable; int fk_attrs; } ;
struct TYPE_21__ {int nparts; int * oids; } ;
struct TYPE_20__ {TYPE_1__* rd_rel; } ;
struct TYPE_19__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* PartitionDesc ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int List ;
typedef TYPE_4__ Constraint ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,int ,int ,int ,int ,int ,int ,int*,int,int,int ,int ,int ,int*,int *,int *,int *,int,int ,int ,int ,int *,int *,int *,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_3__* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int VAR_11 ;
 int* FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_2__*,int ,TYPE_4__*,int ,int ) ;
 int FUNC_14 (int ,char*,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 int* FUNC_19 (int) ;
 int FUNC_20 (int*) ;
 int FUNC_21 (int *,int *,int ) ;
 int FUNC_22 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_23 (int ,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_24(List **VAR_12, Constraint *VAR_13, Relation VAR_14,
        Relation VAR_15, Oid VAR_16, Oid VAR_17,
        int VAR_18,
        int16 *VAR_19, int16 *VAR_20, Oid *VAR_21,
        Oid *VAR_22, Oid *VAR_23, bool VAR_24)
{
 ObjectAddress VAR_25;
 Oid VAR_26;
 char *VAR_27;
 bool VAR_28;
 int VAR_29;
 bool VAR_30;





 if (VAR_15->rd_rel->relkind != VAR_10 &&
  VAR_15->rd_rel->relkind != VAR_9)
  FUNC_15(VAR_5,
    (FUNC_16(VAR_4),
     FUNC_17("referenced relation \"%s\" is not a table",
      FUNC_10(VAR_15))));





 if (FUNC_3(VAR_1,
        FUNC_11(VAR_14),
        VAR_13->conname))
  VAR_27 = FUNC_0(FUNC_10(VAR_14),
            FUNC_1(VAR_13->fk_attrs),
            "fkey",
            FUNC_8(VAR_14), VAR_7);
 else
  VAR_27 = VAR_13->conname;

 if (FUNC_6(VAR_17))
 {
  VAR_28 = 0;
  VAR_29 = 1;
  VAR_30 = 0;
 }
 else
 {
  VAR_28 = 1;
  VAR_29 = 0;




  VAR_30 = VAR_14->rd_rel->relkind != VAR_9;
 }




 VAR_26 = FUNC_4(VAR_27,
           FUNC_8(VAR_14),
           VAR_0,
           VAR_13->deferrable,
           VAR_13->initdeferred,
           VAR_13->initially_valid,
           VAR_17,
           FUNC_11(VAR_14),
           VAR_20,
           VAR_18,
           VAR_18,
           VAR_6,
           VAR_16,
           FUNC_11(VAR_15),
           VAR_19,
           VAR_21,
           VAR_22,
           VAR_23,
           VAR_18,
           VAR_13->fk_upd_action,
           VAR_13->fk_del_action,
           VAR_13->fk_matchtype,
           ((void*)0),
           ((void*)0),
           ((void*)0),
           VAR_28,
           VAR_29,
           VAR_30,
           0);

 FUNC_5(VAR_25, VAR_2, VAR_26);







 if (FUNC_6(VAR_17))
 {
  ObjectAddress VAR_31;

  FUNC_5(VAR_31, VAR_2, VAR_17);
  FUNC_21(&VAR_25, &VAR_31, VAR_3);
 }


 FUNC_2();





 if (VAR_15->rd_rel->relkind == VAR_10)
 {
  FUNC_13(VAR_14, FUNC_11(VAR_15),
            VAR_13,
            VAR_26, VAR_16);
 }






 if (VAR_15->rd_rel->relkind == VAR_9)
 {
  PartitionDesc VAR_32 = FUNC_9(VAR_15);

  for (int VAR_33 = 0; VAR_33 < VAR_32->nparts; VAR_33++)
  {
   Relation VAR_34;
   AttrNumber *VAR_35;
   AttrNumber *VAR_36;
   Oid VAR_37;

   VAR_34 = FUNC_23(VAR_32->oids[VAR_33], VAR_11);





   VAR_35 = FUNC_12(FUNC_7(VAR_34),
             FUNC_7(VAR_15));
   if (VAR_35)
   {
    VAR_36 = FUNC_19(sizeof(AttrNumber) * VAR_18);
    for (int VAR_38 = 0; VAR_38 < VAR_18; VAR_38++)
     VAR_36[VAR_38] = VAR_35[VAR_19[VAR_38] - 1];
   }
   else
    VAR_36 = VAR_19;


   VAR_37 = FUNC_18(VAR_34, VAR_16);
   if (!FUNC_6(VAR_37))
    FUNC_14(VAR_5, "index for %u not found in partition %s",
      VAR_16, FUNC_10(VAR_34));
   FUNC_24(VAR_12, VAR_13, VAR_14, VAR_34,
           VAR_37, VAR_26, VAR_18,
           VAR_36, VAR_20,
           VAR_21, VAR_22, VAR_23,
           VAR_24);


   FUNC_22(VAR_34, VAR_8);
   if (VAR_35)
   {
    FUNC_20(VAR_36);
    FUNC_20(VAR_35);
   }
  }
 }

 return VAR_25;
}
