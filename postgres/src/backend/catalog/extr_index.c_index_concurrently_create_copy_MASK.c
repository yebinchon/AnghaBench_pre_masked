
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int values; } ;
typedef TYPE_2__ oidvector ;
struct TYPE_19__ {int values; } ;
typedef TYPE_3__ int2vector ;
typedef int TupleDesc ;
struct TYPE_22__ {int attname; } ;
struct TYPE_21__ {int ii_NumIndexAttrs; int * ii_IndexAttrNumbers; int ii_Unique; int ii_Am; int ii_NumIndexKeyAttrs; int * ii_Predicate; int * ii_Expressions; int * ii_ExclusionOps; } ;
struct TYPE_20__ {int rd_indcollation; TYPE_1__* rd_rel; } ;
struct TYPE_17__ {int reltablespace; int relam; } ;
typedef TYPE_4__* Relation ;
typedef int Oid ;
typedef int List ;
typedef TYPE_5__ IndexInfo ;
typedef int HeapTuple ;
typedef TYPE_6__* Form_pg_attribute ;
typedef int Expr ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int VAR_13 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int VAR_14 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int*) ;
 char* FUNC_10 (int ) ;
 TYPE_6__* FUNC_11 (int ,int) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_4__*,int ) ;
 int FUNC_17 (TYPE_4__*,char const*,int ,int ,int ,int ,TYPE_5__*,int *,int ,int ,int ,int ,int ,int ,int,int ,int,int,int *) ;
 TYPE_4__* FUNC_18 (int ,int ) ;
 int * FUNC_19 (int *,int ) ;
 TYPE_5__* FUNC_20 (int,int ,int ,int *,int *,int ,int,int) ;
 int * FUNC_21 (int *) ;
 int FUNC_22 (char*) ;
 scalar_t__ FUNC_23 (char*) ;

Oid
FUNC_24(Relation VAR_15, Oid VAR_16, const char *VAR_17)
{
 Relation VAR_18;
 IndexInfo *VAR_19,
      *VAR_20;
 Oid VAR_21 = VAR_10;
 HeapTuple VAR_22,
    VAR_23;
 Datum VAR_24,
    VAR_25,
    VAR_26;
 oidvector *VAR_27;
 int2vector *VAR_28;
 bool VAR_29;
 List *VAR_30 = VAR_11;
 List *VAR_31 = VAR_11;
 List *VAR_32 = VAR_11;

 VAR_18 = FUNC_18(VAR_16, VAR_14);


 VAR_19 = FUNC_1(VAR_18);





 if (VAR_19->ii_ExclusionOps != ((void*)0))
  FUNC_13(VAR_6,
    (FUNC_14(VAR_5),
     FUNC_15("concurrent index creation for exclusion constraints is not supported")));


 VAR_22 = FUNC_8(VAR_7, FUNC_5(VAR_16));
 if (!FUNC_3(VAR_22))
  FUNC_12(VAR_6, "cache lookup failed for index %u", VAR_16);
 VAR_24 = FUNC_9(VAR_7, VAR_22,
         VAR_1, &VAR_29);
 FUNC_0(!VAR_29);
 VAR_27 = (oidvector *) FUNC_2(VAR_24);

 VAR_25 = FUNC_9(VAR_7, VAR_22,
          VAR_3, &VAR_29);
 FUNC_0(!VAR_29);
 VAR_28 = (int2vector *) FUNC_2(VAR_25);


 VAR_23 = FUNC_8(VAR_13, VAR_16);
 if (!FUNC_3(VAR_23))
  FUNC_12(VAR_6, "cache lookup failed for relation %u", VAR_16);
 VAR_26 = FUNC_9(VAR_13, VAR_23,
          VAR_0, &VAR_29);






 if (VAR_19->ii_Expressions != VAR_11)
 {
  Datum VAR_33;
  char *VAR_34;

  VAR_33 = FUNC_9(VAR_7, VAR_22,
         VAR_2, &VAR_29);
  FUNC_0(!VAR_29);
  VAR_34 = FUNC_10(VAR_33);
  VAR_31 = (List *) FUNC_23(VAR_34);
  FUNC_22(VAR_34);
 }
 if (VAR_19->ii_Predicate != VAR_11)
 {
  Datum VAR_35;
  char *VAR_36;

  VAR_35 = FUNC_9(VAR_7, VAR_22,
         VAR_4, &VAR_29);
  FUNC_0(!VAR_29);
  VAR_36 = FUNC_10(VAR_35);
  VAR_32 = (List *) FUNC_23(VAR_36);


  VAR_32 = FUNC_21((Expr *) VAR_32);
  FUNC_22(VAR_36);
 }






 VAR_20 = FUNC_20(VAR_19->ii_NumIndexAttrs,
       VAR_19->ii_NumIndexKeyAttrs,
       VAR_19->ii_Am,
       VAR_31,
       VAR_32,
       VAR_19->ii_Unique,
       0,
       1);






 for (int VAR_37 = 0; VAR_37 < VAR_19->ii_NumIndexAttrs; VAR_37++)
 {
  TupleDesc VAR_38 = FUNC_6(VAR_18);
  Form_pg_attribute VAR_39 = FUNC_11(VAR_38, VAR_37);

  VAR_30 = FUNC_19(VAR_30, FUNC_4(VAR_39->attname));
  VAR_20->ii_IndexAttrNumbers[VAR_37] = VAR_19->ii_IndexAttrNumbers[VAR_37];
 }
 VAR_21 = FUNC_17(VAR_15,
         VAR_17,
         VAR_10,
         VAR_10,
         VAR_10,
         VAR_10,
         VAR_20,
         VAR_30,
         VAR_18->rd_rel->relam,
         VAR_18->rd_rel->reltablespace,
         VAR_18->rd_indcollation,
         VAR_27->values,
         VAR_28->values,
         VAR_26,
         VAR_9 | VAR_8,
         0,
         1,
         0,
         ((void*)0));


 FUNC_16(VAR_18, VAR_12);
 FUNC_7(VAR_22);
 FUNC_7(VAR_23);

 return VAR_21;
}
