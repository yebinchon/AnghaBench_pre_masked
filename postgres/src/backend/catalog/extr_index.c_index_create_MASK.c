
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;


typedef int int16 ;
typedef int bits16 ;
typedef int TupleDesc ;
typedef scalar_t__ TransactionId ;
struct TYPE_46__ {int opcname; } ;
struct TYPE_45__ {int ii_NumIndexAttrs; int ii_NumIndexKeyAttrs; scalar_t__* ii_IndexAttrNumbers; scalar_t__ ii_Predicate; scalar_t__ ii_Expressions; scalar_t__ ii_Unique; int * ii_ExclusionOps; } ;
struct TYPE_44__ {scalar_t__ objectId; scalar_t__ objectSubId; void* classId; } ;
struct TYPE_43__ {TYPE_1__* rd_index; int * rd_indexcxt; TYPE_2__* rd_rel; } ;
struct TYPE_42__ {int relisshared; char relpersistence; scalar_t__ relispartition; scalar_t__ relam; int relowner; } ;
struct TYPE_41__ {int indnkeyatts; } ;
typedef TYPE_3__* Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_4__ ObjectAddress ;
typedef int Node ;
typedef scalar_t__ MultiXactId ;
typedef int List ;
typedef TYPE_5__ IndexInfo ;
typedef int HeapTuple ;
typedef TYPE_6__* Form_pg_opclass ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 void* VAR_7 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,scalar_t__,char const*) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*,int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_7 (scalar_t__,TYPE_3__*,char) ;
 int FUNC_8 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_9 (TYPE_3__*,int,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,TYPE_3__*,scalar_t__,int ,int ) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_11 (void*,scalar_t__,int ,int) ;
 scalar_t__ VAR_31 ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*,int ) ;
 int VAR_32 ;
 int FUNC_17 (int ) ;
 int VAR_33 ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 void* VAR_34 ;
 char VAR_35 ;
 char VAR_36 ;
 scalar_t__ FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*) ;
 scalar_t__ FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (TYPE_3__*) ;
 void* VAR_37 ;
 int FUNC_25 (int ) ;
 int VAR_38 ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (scalar_t__,int) ;
 int FUNC_28 (scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_39 ;
 int FUNC_29 (scalar_t__,scalar_t__,scalar_t__,TYPE_5__*,scalar_t__*,scalar_t__*,int *,int,int,int,int,int) ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 int FUNC_30 (int ,char*,...) ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (char*,...) ;
 int FUNC_34 (scalar_t__) ;
 scalar_t__ FUNC_35 (char const*,scalar_t__) ;
 TYPE_3__* FUNC_36 (char const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,char,char,int,int,int,scalar_t__*,scalar_t__*) ;
 int FUNC_37 (TYPE_3__*,TYPE_3__*,TYPE_5__*,int,int) ;
 int FUNC_38 (TYPE_3__*,int ) ;
 TYPE_4__ FUNC_39 (TYPE_3__*,scalar_t__,scalar_t__,TYPE_5__*,char const*,char,int,int,int) ;
 int FUNC_40 (scalar_t__,scalar_t__,TYPE_5__*) ;
 int FUNC_41 (TYPE_3__*,int,double) ;
 int FUNC_42 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_43 (TYPE_4__*,int *,scalar_t__,int ,int ,int) ;
 int FUNC_44 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_45 (void*,int ) ;

Oid
FUNC_46(Relation VAR_42,
    const char *VAR_43,
    Oid VAR_44,
    Oid VAR_45,
    Oid VAR_46,
    Oid VAR_47,
    IndexInfo *VAR_48,
    List *VAR_49,
    Oid VAR_50,
    Oid VAR_51,
    Oid *VAR_52,
    Oid *VAR_53,
    int16 *VAR_54,
    Datum VAR_55,
    bits16 VAR_56,
    bits16 VAR_57,
    bool VAR_58,
    bool VAR_59,
    Oid *VAR_60)
{
 Oid VAR_61 = FUNC_22(VAR_42);
 Relation VAR_62;
 Relation VAR_63;
 TupleDesc VAR_64;
 bool VAR_65;
 bool VAR_66;
 bool VAR_67;
 Oid VAR_68;
 int VAR_69;
 char VAR_70;
 bool VAR_71 = (VAR_56 & VAR_25) != 0;
 bool VAR_72 = (VAR_56 & VAR_24) != 0;
 bool VAR_73 = (VAR_56 & VAR_22) != 0;
 bool VAR_74 = (VAR_56 & VAR_26) != 0;
 char VAR_75;
 TransactionId VAR_76;
 MultiXactId VAR_77;


 FUNC_1((VAR_57 == 0) ||
     ((VAR_56 & VAR_21) != 0));

 FUNC_1(!VAR_74 || (VAR_56 & VAR_27));

 VAR_75 = VAR_74 ? VAR_36 : VAR_35;
 VAR_67 = (VAR_48->ii_ExclusionOps != ((void*)0));

 VAR_62 = FUNC_45(VAR_37, VAR_38);







 VAR_68 = FUNC_20(VAR_42);
 VAR_65 = VAR_42->rd_rel->relisshared;
 VAR_66 = FUNC_24(VAR_42);
 VAR_70 = VAR_42->rd_rel->relpersistence;




 if (VAR_48->ii_NumIndexAttrs < 1)
  FUNC_30(VAR_18, "must index at least one column");

 if (!VAR_58 &&
  FUNC_15(VAR_42) &&
  FUNC_14())
  FUNC_31(VAR_18,
    (FUNC_32(VAR_15),
     FUNC_33("user-defined indexes on system catalog tables are not supported")));
 for (VAR_69 = 0; VAR_69 < VAR_48->ii_NumIndexKeyAttrs; VAR_69++)
 {
  Oid VAR_78 = VAR_52[VAR_69];
  Oid VAR_79 = VAR_53[VAR_69];

  if (VAR_78)
  {
   if ((VAR_79 == VAR_39 ||
     VAR_79 == VAR_40 ||
     VAR_79 == VAR_1) &&
    !FUNC_34(VAR_78))
   {
    HeapTuple VAR_80;

    VAR_80 = FUNC_26(VAR_2, FUNC_18(VAR_79));
    if (!FUNC_8(VAR_80))
     FUNC_30(VAR_18, "cache lookup failed for operator class %u", VAR_79);
    FUNC_31(VAR_18,
      (FUNC_32(VAR_15),
       FUNC_33("nondeterministic collations are not supported for operator class \"%s\"",
        FUNC_17(((Form_pg_opclass) FUNC_6(VAR_80))->opcname))));
    FUNC_25(VAR_80);
   }
  }
 }





 if (VAR_73 &&
  FUNC_13(VAR_42))
  FUNC_31(VAR_18,
    (FUNC_32(VAR_15),
     FUNC_33("concurrent index creation on system catalog tables is not supported")));





 if (VAR_73 && VAR_67)
  FUNC_31(VAR_18,
    (FUNC_32(VAR_15),
     FUNC_33("concurrent index creation for exclusion constraints is not supported")));





 if (VAR_65 && !FUNC_12())
  FUNC_31(VAR_18,
    (FUNC_32(VAR_17),
     FUNC_33("shared indexes cannot be created after initdb")));




 if (VAR_65 && VAR_51 != VAR_19)
  FUNC_30(VAR_18, "shared relations must be placed in pg_global tablespace");







 if (FUNC_35(VAR_43, VAR_68))
 {
  if ((VAR_56 & VAR_23) != 0)
  {
   FUNC_31(VAR_32,
     (FUNC_32(VAR_14),
      FUNC_33("relation \"%s\" already exists, skipping",
       VAR_43)));
   FUNC_44(VAR_62, VAR_38);
   return VAR_29;
  }

  FUNC_31(VAR_18,
    (FUNC_32(VAR_14),
     FUNC_33("relation \"%s\" already exists",
      VAR_43)));
 }

 if ((VAR_56 & VAR_21) != 0 &&
  FUNC_4(VAR_5, VAR_61,
        VAR_43))
 {




  FUNC_31(VAR_18,
    (FUNC_32(VAR_13),
     FUNC_33("constraint \"%s\" for relation \"%s\" already exists",
      VAR_43, FUNC_21(VAR_42))));
 }




 VAR_64 = FUNC_5(VAR_42,
           VAR_48,
           VAR_49,
           VAR_50,
           VAR_52,
           VAR_53);







 if (!FUNC_19(VAR_44))
 {

  if (VAR_31)
  {
   if (!FUNC_19(VAR_41))
    FUNC_31(VAR_18,
      (FUNC_32(VAR_16),
       FUNC_33("pg_class index OID value not set when in binary upgrade mode")));

   VAR_44 = VAR_41;
   VAR_41 = VAR_29;
  }
  else
  {
   VAR_44 =
    FUNC_7(VAR_51, VAR_62, VAR_70);
  }
 }






 VAR_63 = FUNC_36(VAR_43,
        VAR_68,
        VAR_51,
        VAR_44,
        VAR_47,
        VAR_50,
        VAR_64,
        VAR_75,
        VAR_70,
        VAR_65,
        VAR_66,
        VAR_58,
        &VAR_76,
        &VAR_77);

 FUNC_1(VAR_76 == VAR_30);
 FUNC_1(VAR_77 == VAR_28);
 FUNC_1(VAR_44 == FUNC_22(VAR_63));






 FUNC_16(VAR_63, VAR_0);







 VAR_63->rd_rel->relowner = VAR_42->rd_rel->relowner;
 VAR_63->rd_rel->relam = VAR_50;
 VAR_63->rd_rel->relispartition = FUNC_19(VAR_45);




 FUNC_10(VAR_62, VAR_63,
        FUNC_22(VAR_63),
        (Datum) 0,
        VAR_55);


 FUNC_44(VAR_62, VAR_38);





 FUNC_9(VAR_63,
       VAR_48->ii_NumIndexAttrs,
       VAR_44);




 FUNC_0(VAR_63, VAR_48->ii_NumIndexAttrs);
 FUNC_29(VAR_44, VAR_61, VAR_45,
      VAR_48,
      VAR_52, VAR_53, VAR_54,
      VAR_71, VAR_67,
      (VAR_57 & VAR_20) == 0,
      !VAR_73 && !VAR_72,
      !VAR_73);





 FUNC_2(VAR_42);


 if (FUNC_19(VAR_45))
 {
  FUNC_28(VAR_44, VAR_45, 1);
  FUNC_27(VAR_45, 1);
 }
 if (!FUNC_12())
 {
  ObjectAddress VAR_81,
     VAR_82;

  VAR_81.classId = VAR_37;
  VAR_81.objectId = VAR_44;
  VAR_81.objectSubId = 0;

  if ((VAR_56 & VAR_21) != 0)
  {
   char VAR_83;
   ObjectAddress VAR_84;

   if (VAR_71)
    VAR_83 = VAR_4;
   else if (VAR_48->ii_Unique)
    VAR_83 = VAR_6;
   else if (VAR_67)
    VAR_83 = VAR_3;
   else
   {
    FUNC_30(VAR_18, "constraint must be PRIMARY, UNIQUE or EXCLUDE");
    VAR_83 = 0;
   }

   VAR_84 = FUNC_39(VAR_42,
            VAR_44,
            VAR_46,
            VAR_48,
            VAR_43,
            VAR_83,
            VAR_57,
            VAR_58,
            VAR_59);
   if (VAR_60)
    *VAR_60 = VAR_84.objectId;
  }
  else
  {
   bool VAR_85 = 0;


   for (VAR_69 = 0; VAR_69 < VAR_48->ii_NumIndexAttrs; VAR_69++)
   {
    if (VAR_48->ii_IndexAttrNumbers[VAR_69] != 0)
    {
     VAR_82.classId = VAR_37;
     VAR_82.objectId = VAR_61;
     VAR_82.objectSubId = VAR_48->ii_IndexAttrNumbers[VAR_69];

     FUNC_42(&VAR_81, &VAR_82, VAR_9);

     VAR_85 = 1;
    }
   }







   if (!VAR_85)
   {
    VAR_82.classId = VAR_37;
    VAR_82.objectId = VAR_61;
    VAR_82.objectSubId = 0;

    FUNC_42(&VAR_81, &VAR_82, VAR_9);
   }
  }







  if (FUNC_19(VAR_45))
  {
   VAR_82.classId = VAR_37;
   VAR_82.objectId = VAR_45;
   VAR_82.objectSubId = 0;

   FUNC_42(&VAR_81, &VAR_82, VAR_11);

   VAR_82.classId = VAR_37;
   VAR_82.objectId = VAR_61;
   VAR_82.objectSubId = 0;

   FUNC_42(&VAR_81, &VAR_82, VAR_12);
  }



  for (VAR_69 = 0; VAR_69 < VAR_48->ii_NumIndexKeyAttrs; VAR_69++)
  {
   if (FUNC_19(VAR_52[VAR_69]) &&
    VAR_52[VAR_69] != VAR_8)
   {
    VAR_82.classId = VAR_7;
    VAR_82.objectId = VAR_52[VAR_69];
    VAR_82.objectSubId = 0;

    FUNC_42(&VAR_81, &VAR_82, VAR_10);
   }
  }


  for (VAR_69 = 0; VAR_69 < VAR_48->ii_NumIndexKeyAttrs; VAR_69++)
  {
   VAR_82.classId = VAR_34;
   VAR_82.objectId = VAR_53[VAR_69];
   VAR_82.objectSubId = 0;

   FUNC_42(&VAR_81, &VAR_82, VAR_10);
  }


  if (VAR_48->ii_Expressions)
  {
   FUNC_43(&VAR_81,
           (Node *) VAR_48->ii_Expressions,
           VAR_61,
           VAR_10,
           VAR_9, 0);
  }


  if (VAR_48->ii_Predicate)
  {
   FUNC_43(&VAR_81,
           (Node *) VAR_48->ii_Predicate,
           VAR_61,
           VAR_10,
           VAR_9, 0);
  }
 }
 else
 {

  FUNC_1((VAR_56 & VAR_21) == 0);
 }


 FUNC_11(VAR_37,
          VAR_44, 0, VAR_59);





 FUNC_3();







 if (FUNC_12())
  FUNC_23(VAR_63);
 else
  FUNC_1(VAR_63->rd_indexcxt != ((void*)0));

 VAR_63->rd_index->indnkeyatts = VAR_48->ii_NumIndexKeyAttrs;
 if (FUNC_12())
 {
  FUNC_40(VAR_61, VAR_44, VAR_48);
 }
 else if ((VAR_56 & VAR_27) != 0)
 {





  FUNC_41(VAR_42,
         1,
         -1.0);

  FUNC_3();
 }
 else
 {
  FUNC_37(VAR_42, VAR_63, VAR_48, 0, 1);
 }





 FUNC_38(VAR_63, VAR_33);

 return VAR_44;
}
