
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_14__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_45__ {scalar_t__ attisdropped; int attname; } ;
struct TYPE_44__ {TYPE_14__* bound; int name; } ;
struct TYPE_43__ {int trigdesc; int rd_islocaltemp; TYPE_1__* rd_rel; } ;
struct TYPE_42__ {int natts; } ;
struct TYPE_41__ {scalar_t__ relkind; scalar_t__ relpersistence; int reloftype; scalar_t__ relispartition; } ;
struct TYPE_40__ {int is_default; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__ PartitionCmd ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef TYPE_5__* Form_pg_attribute ;
typedef int AttrNumber ;


 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int **,TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int ,int ) ;
 char* FUNC_10 (int ) ;
 int VAR_17 ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int **,TYPE_3__*,int *,int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 TYPE_2__* FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int VAR_20 ;
 int FUNC_20 (int *,int ,int ,int ,int ) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (TYPE_3__*,TYPE_3__*,TYPE_14__*) ;
 TYPE_5__* FUNC_23 (TYPE_2__*,int) ;
 int FUNC_24 (int ,TYPE_3__*,TYPE_14__*) ;
 int FUNC_25 (int ,char*) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (char*,...) ;
 int FUNC_29 (char*,...) ;
 scalar_t__ FUNC_30 (int *,int *) ;
 int * FUNC_31 (int ,int ,int *) ;
 int FUNC_32 (int ) ;
 int * FUNC_33 (int *) ;
 int * FUNC_34 (TYPE_3__*,TYPE_3__*,TYPE_14__*) ;
 int * FUNC_35 (int *,int ) ;
 int * FUNC_36 (int ) ;
 scalar_t__ FUNC_37 (int *,int ) ;
 int FUNC_38 (int *) ;
 int * FUNC_39 (int *,int,TYPE_3__*,TYPE_3__*,int*) ;
 int FUNC_40 (TYPE_3__*,int ,int,int *,int,int *) ;
 int FUNC_41 (int ) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_44 (int ,int ) ;
 TYPE_3__* FUNC_45 (int ,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_46(List **VAR_21, Relation VAR_22, PartitionCmd *VAR_23)
{
 Relation VAR_24,
    VAR_25;
 List *VAR_26;
 List *VAR_27;
 SysScanDesc VAR_28;
 ScanKeyData VAR_29;
 AttrNumber VAR_30;
 int VAR_31;
 TupleDesc VAR_32;
 ObjectAddress VAR_33;
 const char *VAR_34;
 bool VAR_35;
 Oid VAR_36;
 List *VAR_37;





 VAR_36 =
  FUNC_32(FUNC_16(VAR_22));
 if (FUNC_13(VAR_36))
  FUNC_9(VAR_36, VAR_3);

 VAR_24 = FUNC_45(VAR_23->name, VAR_3);
 FUNC_0(VAR_24, VAR_2 | VAR_1);


 if (VAR_24->rd_rel->relispartition)
  FUNC_26(VAR_12,
    (FUNC_27(VAR_11),
     FUNC_29("\"%s\" is already a partition",
      FUNC_18(VAR_24))));

 if (FUNC_13(VAR_24->rd_rel->reloftype))
  FUNC_26(VAR_12,
    (FUNC_27(VAR_11),
     FUNC_29("cannot attach a typed table as partition")));





 VAR_25 = FUNC_44(VAR_15, VAR_4);
 FUNC_20(&VAR_29,
    VAR_6,
    VAR_7, VAR_13,
    FUNC_12(FUNC_19(VAR_24)));
 VAR_28 = FUNC_40(VAR_25, VAR_16, 1,
         ((void*)0), 1, &VAR_29);
 if (FUNC_8(FUNC_42(VAR_28)))
  FUNC_26(VAR_12,
    (FUNC_27(VAR_11),
     FUNC_29("cannot attach inheritance child as partition")));
 FUNC_41(VAR_28);


 FUNC_20(&VAR_29,
    VAR_5,
    VAR_7, VAR_13,
    FUNC_12(FUNC_19(VAR_24)));
 VAR_28 = FUNC_40(VAR_25, VAR_14, 1, ((void*)0),
         1, &VAR_29);
 if (FUNC_8(FUNC_42(VAR_28)) &&
  VAR_24->rd_rel->relkind == VAR_18)
  FUNC_26(VAR_12,
    (FUNC_27(VAR_11),
     FUNC_29("cannot attach inheritance parent as partition")));
 FUNC_41(VAR_28);
 FUNC_43(VAR_25, VAR_4);
 VAR_26 = FUNC_31(FUNC_19(VAR_24),
            VAR_3, ((void*)0));
 if (FUNC_37(VAR_26, FUNC_19(VAR_22)))
  FUNC_26(VAR_12,
    (FUNC_27(VAR_9),
     FUNC_29("circular inheritance not allowed"),
     FUNC_28("\"%s\" is already a child of \"%s\".",
         FUNC_18(VAR_22),
         FUNC_18(VAR_24))));


 if (VAR_22->rd_rel->relpersistence != VAR_19 &&
  VAR_24->rd_rel->relpersistence == VAR_19)
  FUNC_26(VAR_12,
    (FUNC_27(VAR_11),
     FUNC_29("cannot attach a temporary relation as partition of permanent relation \"%s\"",
      FUNC_18(VAR_22))));


 if (VAR_22->rd_rel->relpersistence == VAR_19 &&
  VAR_24->rd_rel->relpersistence != VAR_19)
  FUNC_26(VAR_12,
    (FUNC_27(VAR_11),
     FUNC_29("cannot attach a permanent relation as partition of temporary relation \"%s\"",
      FUNC_18(VAR_22))));


 if (VAR_22->rd_rel->relpersistence == VAR_19 &&
  !VAR_22->rd_islocaltemp)
  FUNC_26(VAR_12,
    (FUNC_27(VAR_11),
     FUNC_29("cannot attach as partition of temporary relation of another session")));


 if (VAR_24->rd_rel->relpersistence == VAR_19 &&
  !VAR_24->rd_islocaltemp)
  FUNC_26(VAR_12,
    (FUNC_27(VAR_11),
     FUNC_29("cannot attach temporary relation of another session as partition")));


 VAR_32 = FUNC_15(VAR_24);
 VAR_31 = VAR_32->natts;
 for (VAR_30 = 1; VAR_30 <= VAR_31; VAR_30++)
 {
  Form_pg_attribute VAR_38 = FUNC_23(VAR_32, VAR_30 - 1);
  char *VAR_39 = FUNC_10(VAR_38->attname);


  if (VAR_38->attisdropped)
   continue;


  if (!FUNC_21(VAR_0,
           FUNC_12(FUNC_19(VAR_22)),
           FUNC_3(VAR_39)))
   FUNC_26(VAR_12,
     (FUNC_27(VAR_8),
      FUNC_29("table \"%s\" contains column \"%s\" not found in parent \"%s\"",
       FUNC_18(VAR_24), VAR_39,
       FUNC_18(VAR_22)),
      FUNC_28("The new partition may contain only the columns present in parent.")));
 }






 VAR_34 = FUNC_7(VAR_24->trigdesc);
 if (VAR_34 != ((void*)0))
  FUNC_26(VAR_12,
    (FUNC_27(VAR_10),
     FUNC_29("trigger \"%s\" prevents table \"%s\" from becoming a partition",
      VAR_34, FUNC_18(VAR_24)),
     FUNC_28("ROW triggers with transition tables are not supported on partitions")));






 FUNC_24(FUNC_18(VAR_24), VAR_22,
         VAR_23->bound);


 FUNC_6(VAR_24, VAR_22);


 FUNC_22(VAR_24, VAR_22, VAR_23->bound);


 FUNC_2(VAR_22, VAR_24);


 FUNC_5(VAR_22, VAR_24);





 FUNC_4(VAR_21, VAR_22, VAR_24);






 VAR_37 = FUNC_34(VAR_24, VAR_22, VAR_23->bound);
 VAR_27 = FUNC_35(VAR_37,
         FUNC_17(VAR_22));


 if (VAR_27)
 {





  VAR_27 =
   (List *) FUNC_30(((void*)0),
           (Node *) VAR_27);


  VAR_27 = FUNC_36(FUNC_38(VAR_27));





  VAR_27 = FUNC_39(VAR_27, 1, VAR_24,
             VAR_22, &VAR_35);

  if (VAR_35)
   FUNC_25(VAR_12,
     "unexpected whole-row reference found in partition key");


  FUNC_14(VAR_21, VAR_24, VAR_27,
             0);
 }
 if (FUNC_13(VAR_36))
 {
  Relation VAR_40;
  List *VAR_41;

  FUNC_1(!VAR_23->bound->is_default);


  VAR_40 = FUNC_44(VAR_36, VAR_17);
  VAR_41 =
   FUNC_33(VAR_37);





  VAR_41 =
   FUNC_39(VAR_41,
         1, VAR_40, VAR_22, ((void*)0));
  FUNC_14(VAR_21, VAR_40,
             VAR_41, 1);


  FUNC_43(VAR_40, VAR_17);
 }

 FUNC_11(VAR_33, VAR_20, FUNC_19(VAR_24));


 FUNC_43(VAR_24, VAR_17);

 return VAR_33;
}
