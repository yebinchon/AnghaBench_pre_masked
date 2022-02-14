
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int values ;
typedef int replaces ;
typedef int isnull ;
struct TYPE_31__ {int * qual; int * with_check; int policy_name; int table; int * roles; } ;
struct TYPE_30__ {void* oid; } ;
struct TYPE_29__ {int t_self; } ;
struct TYPE_28__ {scalar_t__ objectId; scalar_t__ objectSubId; int classId; } ;
struct TYPE_27__ {int * p_rtable; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int RangeTblEntry ;
typedef TYPE_1__ ParseState ;
typedef void* Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_policy ;
typedef int Datum ;
typedef int ArrayType ;
typedef TYPE_5__ AlterPolicyStmt ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,TYPE_3__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_7 (int) ;
 char FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,void*,int ) ;
 int * VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int *) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* FUNC_15 (int ,int ,int ,int ,void*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_18 (int *,int ,int ,int ,int) ;
 char* FUNC_19 (int) ;
 int FUNC_20 (TYPE_1__*,int *,int,int,int) ;
 int * FUNC_21 (TYPE_1__*,int ,int ,int *,int,int) ;
 int FUNC_22 (TYPE_1__*,int *) ;
 int * FUNC_23 (int*,int,int ,int,int,char) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,void*,int) ;
 int FUNC_26 (int ,void*,int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (char*,...) ;
 int FUNC_30 (TYPE_1__*) ;
 int FUNC_31 (TYPE_3__*) ;
 int FUNC_32 (TYPE_3__*,int,int ,int*) ;
 TYPE_3__* FUNC_33 (TYPE_3__*,int ,int*,int*,int*) ;
 TYPE_1__* FUNC_34 (int *) ;
 int FUNC_35 (int*,int ,int) ;
 int FUNC_36 (int *) ;
 scalar_t__ FUNC_37 (int) ;
 int* FUNC_38 (int *,int*) ;
 int FUNC_39 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_40 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_41 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_42 (int ,int ) ;
 int FUNC_43 (void*,int ) ;
 int * FUNC_44 (char*) ;
 int FUNC_45 (int ,int ,int,int *,int,int *) ;
 int FUNC_46 (int ) ;
 TYPE_3__* FUNC_47 (int ) ;
 int FUNC_48 (int ,int ) ;
 int FUNC_49 (int ,int ) ;
 int * FUNC_50 (TYPE_1__*,int ,int ,char*) ;

ObjectAddress
FUNC_51(AlterPolicyStmt *VAR_32)
{
 Relation VAR_33;
 Oid VAR_34;
 Relation VAR_35;
 Oid VAR_36;
 Datum *VAR_37 = ((void*)0);
 int VAR_38 = 0;
 ArrayType *VAR_39 = ((void*)0);
 List *VAR_40 = VAR_22;
 List *VAR_41 = VAR_22;
 Node *VAR_42 = ((void*)0);
 Node *VAR_43 = ((void*)0);
 ScanKeyData VAR_44[2];
 SysScanDesc VAR_45;
 HeapTuple VAR_46;
 HeapTuple VAR_47;
 Datum VAR_48[VAR_23];
 bool VAR_49[VAR_23];
 bool VAR_50[VAR_23];
 ObjectAddress VAR_51;
 ObjectAddress VAR_52;
 Datum VAR_53;
 char VAR_54;
 bool VAR_55;
 int VAR_56;


 if (VAR_32->roles != ((void*)0))
 {
  VAR_37 = FUNC_38(VAR_32->roles, &VAR_38);
  VAR_39 = FUNC_23(VAR_37, VAR_38, VAR_25,
           sizeof(Oid), 1, 'i');
 }


 VAR_36 = FUNC_15(VAR_32->table, VAR_4,
          0,
          VAR_28,
          (void *) VAR_32);

 VAR_35 = FUNC_43(VAR_36, VAR_24);


 if (VAR_32->qual)
 {
  RangeTblEntry *VAR_57;
  ParseState *VAR_58 = FUNC_34(((void*)0));

  VAR_57 = FUNC_21(VAR_58, VAR_35,
           VAR_5,
           ((void*)0), 0, 0);

  FUNC_20(VAR_58, VAR_57, 0, 1, 1);

  VAR_42 = FUNC_50(VAR_58, FUNC_24(VAR_32->qual),
         VAR_19,
         "POLICY");


  FUNC_22(VAR_58, VAR_42);

  VAR_40 = VAR_58->p_rtable;
  FUNC_30(VAR_58);
 }


 if (VAR_32->with_check)
 {
  RangeTblEntry *VAR_59;
  ParseState *VAR_60 = FUNC_34(((void*)0));

  VAR_59 = FUNC_21(VAR_60, VAR_35,
           VAR_5,
           ((void*)0), 0, 0);

  FUNC_20(VAR_60, VAR_59, 0, 1, 1);

  VAR_43 = FUNC_50(VAR_60,
              FUNC_24(VAR_32->with_check),
              VAR_19,
              "POLICY");


  FUNC_22(VAR_60, VAR_43);

  VAR_41 = VAR_60->p_rtable;
  FUNC_30(VAR_60);
 }


 FUNC_35(VAR_48, 0, sizeof(VAR_48));
 FUNC_35(VAR_50, 0, sizeof(VAR_50));
 FUNC_35(VAR_49, 0, sizeof(VAR_49));


 VAR_33 = FUNC_49(VAR_27, VAR_30);


 FUNC_18(&VAR_44[0],
    VAR_9,
    VAR_13, VAR_21,
    FUNC_13(VAR_36));


 FUNC_18(&VAR_44[1],
    VAR_7,
    VAR_13, VAR_20,
    FUNC_3(VAR_32->policy_name));

 VAR_45 = FUNC_45(VAR_33,
          VAR_26, 1, ((void*)0), 2,
          VAR_44);

 VAR_46 = FUNC_47(VAR_45);


 if (!FUNC_11(VAR_46))
  FUNC_27(VAR_18,
    (FUNC_28(VAR_17),
     FUNC_29("policy \"%s\" for table \"%s\" does not exist",
      VAR_32->policy_name,
      FUNC_17(VAR_35))));


 VAR_53 = FUNC_32(VAR_46, VAR_6,
        FUNC_16(VAR_33),
        &VAR_55);
 FUNC_2(!VAR_55);
 VAR_54 = FUNC_8(VAR_53);




 if ((VAR_54 == VAR_3 || VAR_54 == VAR_0)
  && VAR_32->with_check != ((void*)0))
  FUNC_27(VAR_18,
    (FUNC_28(VAR_16),
     FUNC_29("only USING expression allowed for SELECT, DELETE")));





 if ((VAR_54 == VAR_2)
  && VAR_32->qual != ((void*)0))
  FUNC_27(VAR_18,
    (FUNC_28(VAR_16),
     FUNC_29("only WITH CHECK expression allowed for INSERT")));

 VAR_34 = ((Form_pg_policy) FUNC_10(VAR_46))->oid;

 if (VAR_39 != ((void*)0))
 {
  VAR_50[VAR_10 - 1] = 1;
  VAR_48[VAR_10 - 1] = FUNC_14(VAR_39);
 }
 else
 {
  Oid *VAR_61;
  Datum VAR_62;
  bool VAR_63;
  ArrayType *VAR_64;







  VAR_62 = FUNC_32(VAR_46, VAR_10,
           FUNC_16(VAR_33),
           &VAR_63);
  FUNC_2(!VAR_63);

  VAR_64 = FUNC_7(VAR_62);

  VAR_61 = (Oid *) FUNC_0(VAR_64);

  VAR_38 = FUNC_1(VAR_64)[0];

  VAR_37 = (Datum *) FUNC_37(VAR_38 * sizeof(Datum));

  for (VAR_56 = 0; VAR_56 < VAR_38; VAR_56++)
   VAR_37[VAR_56] = FUNC_13(VAR_61[VAR_56]);
 }

 if (VAR_42 != ((void*)0))
 {
  VAR_50[VAR_8 - 1] = 1;
  VAR_48[VAR_8 - 1]
   = FUNC_4(FUNC_36(VAR_42));
 }
 else
 {
  Datum VAR_65;
  bool VAR_66;
  VAR_65 = FUNC_32(VAR_46, VAR_8,
           FUNC_16(VAR_33),
           &VAR_66);
  if (!VAR_66)
  {
   char *VAR_67;
   ParseState *VAR_68;


   VAR_68 = FUNC_34(((void*)0));

   VAR_67 = FUNC_19(VAR_65);
   VAR_42 = FUNC_44(VAR_67);


   FUNC_21(VAR_68, VAR_35,
            VAR_5,
            ((void*)0), 0, 0);

   VAR_40 = VAR_68->p_rtable;
   FUNC_30(VAR_68);
  }
 }

 if (VAR_43 != ((void*)0))
 {
  VAR_50[VAR_11 - 1] = 1;
  VAR_48[VAR_11 - 1]
   = FUNC_4(FUNC_36(VAR_43));
 }
 else
 {
  Datum VAR_69;
  bool VAR_70;
  VAR_69 = FUNC_32(VAR_46, VAR_11,
           FUNC_16(VAR_33),
           &VAR_70);
  if (!VAR_70)
  {
   char *VAR_71;
   ParseState *VAR_72;


   VAR_72 = FUNC_34(((void*)0));

   VAR_71 = FUNC_19(VAR_69);
   VAR_43 = FUNC_44(VAR_71);


   FUNC_21(VAR_72, VAR_35,
            VAR_5,
            ((void*)0), 0, 0);

   VAR_41 = VAR_72->p_rtable;
   FUNC_30(VAR_72);
  }
 }

 VAR_47 = FUNC_33(VAR_46,
          FUNC_16(VAR_33),
          VAR_48, VAR_49, VAR_50);
 FUNC_6(VAR_33, &VAR_47->t_self, VAR_47);


 FUNC_25(VAR_27, VAR_34, 0);


 VAR_51.classId = VAR_29;
 VAR_51.objectId = VAR_36;
 VAR_51.objectSubId = 0;

 VAR_52.classId = VAR_27;
 VAR_52.objectId = VAR_34;
 VAR_52.objectSubId = 0;

 FUNC_39(&VAR_52, &VAR_51, VAR_14);

 FUNC_40(&VAR_52, VAR_42, VAR_40, VAR_15);

 FUNC_40(&VAR_52, VAR_43, VAR_41,
         VAR_15);


 FUNC_26(VAR_27, VAR_34, 0);
 VAR_51.classId = VAR_12;
 VAR_51.objectSubId = 0;
 for (VAR_56 = 0; VAR_56 < VAR_38; VAR_56++)
 {
  VAR_51.objectId = FUNC_9(VAR_37[VAR_56]);

  if (VAR_51.objectId != VAR_1)
   FUNC_41(&VAR_52, &VAR_51,
          VAR_31);
 }

 FUNC_12(VAR_27, VAR_34, 0);

 FUNC_31(VAR_47);


 FUNC_5(VAR_35);


 FUNC_46(VAR_45);
 FUNC_42(VAR_35, VAR_24);
 FUNC_48(VAR_33, VAR_30);

 return VAR_52;
}
