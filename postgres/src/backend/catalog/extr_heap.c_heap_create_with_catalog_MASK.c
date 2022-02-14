
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int TupleDesc ;
typedef int TransactionId ;
struct TYPE_19__ {scalar_t__ objectId; scalar_t__ objectSubId; int classId; } ;
struct TYPE_18__ {int rd_att; TYPE_1__* rd_rel; } ;
struct TYPE_17__ {scalar_t__ relrewrite; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ OnCommitAction ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ ObjectAddress ;
typedef int MultiXactId ;
typedef int List ;
typedef int Datum ;
typedef int Acl ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,char) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,char,int ,int ,int ,int ) ;
 TYPE_3__ FUNC_2 (char const*,scalar_t__,scalar_t__,char,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,char,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_7 (scalar_t__,TYPE_2__*,char) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_9 (int ,scalar_t__,int ,int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *) ;
 char VAR_23 ;





 char VAR_24 ;

 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_16 (TYPE_2__*,int *,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_17 (scalar_t__,char*,scalar_t__,scalar_t__,int ,scalar_t__,int,int ,int ,int,int ,int ,int ,int ,int ,scalar_t__,scalar_t__,int ,scalar_t__,int,scalar_t__,scalar_t__,int *,int *,int,char,char,int,int ,int,scalar_t__) ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*,...) ;
 scalar_t__ FUNC_23 (char const*,scalar_t__) ;
 int * FUNC_24 (int ,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_25 (char const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,char,char,int,int,int,int *,int *) ;
 char* FUNC_26 (char const*,scalar_t__) ;
 int FUNC_27 (scalar_t__,char const*,scalar_t__) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_30 (TYPE_3__*,int) ;
 int FUNC_31 (int ,scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_32 (int ,scalar_t__,scalar_t__) ;
 int FUNC_33 (scalar_t__,scalar_t__) ;
 int FUNC_34 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_35 (int ,int ) ;

Oid
FUNC_36(const char *VAR_33,
       Oid VAR_34,
       Oid VAR_35,
       Oid VAR_36,
       Oid VAR_37,
       Oid VAR_38,
       Oid VAR_39,
       Oid VAR_40,
       TupleDesc VAR_41,
       List *VAR_42,
       char VAR_43,
       char VAR_44,
       bool VAR_45,
       bool VAR_46,
       OnCommitAction VAR_47,
       Datum VAR_48,
       bool VAR_49,
       bool VAR_50,
       bool VAR_51,
       Oid VAR_52,
       ObjectAddress *VAR_53)
{
 Relation VAR_54;
 Relation VAR_55;
 Acl *VAR_56;
 Oid VAR_57;
 Oid VAR_58;
 Oid VAR_59;
 ObjectAddress VAR_60;
 Oid VAR_61 = VAR_15;
 TransactionId VAR_62;
 MultiXactId VAR_63;

 VAR_54 = FUNC_35(VAR_25, VAR_26);




 FUNC_3(FUNC_11() || FUNC_10());






 FUNC_6(VAR_41, VAR_43,
        VAR_50 ? VAR_2 : 0);





 VAR_57 = FUNC_23(VAR_33, VAR_34);
 if (VAR_57 != VAR_15)
  FUNC_19(VAR_8,
    (FUNC_20(VAR_6),
     FUNC_22("relation \"%s\" already exists", VAR_33)));







 VAR_58 = FUNC_8(VAR_28, VAR_1,
           FUNC_5(VAR_33),
           FUNC_12(VAR_34));
 if (FUNC_13(VAR_58))
 {
  if (!FUNC_27(VAR_58, VAR_33, VAR_34))
   FUNC_19(VAR_8,
     (FUNC_20(VAR_5),
      FUNC_22("type \"%s\" already exists", VAR_33),
      FUNC_21("A relation has an associated type of the same name, "
        "so you must use a name that doesn't conflict "
        "with any existing type.")));
 }




 if (VAR_45 && VAR_35 != VAR_14)
  FUNC_18(VAR_8, "shared relations must be placed in pg_global tablespace");







 if (!FUNC_13(VAR_36))
 {

  if (VAR_16 &&
   (VAR_43 == 130 || VAR_43 == 129 ||
    VAR_43 == 128 || VAR_43 == 132 ||
    VAR_43 == VAR_23 || VAR_43 == 133 ||
    VAR_43 == 131))
  {
   if (!FUNC_13(VAR_31))
    FUNC_19(VAR_8,
      (FUNC_20(VAR_7),
       FUNC_22("pg_class heap OID value not set when in binary upgrade mode")));

   VAR_36 = VAR_31;
   VAR_31 = VAR_15;
  }

  else if (VAR_16 &&
     FUNC_13(VAR_32) &&
     VAR_43 == VAR_24)
  {
   VAR_36 = VAR_32;
   VAR_32 = VAR_15;
  }
  else
   VAR_36 = FUNC_7(VAR_35, VAR_54,
           VAR_44);
 }




 if (VAR_49)
 {
  switch (VAR_43)
  {
   case 130:
   case 128:
   case 132:
   case 133:
   case 131:
    VAR_56 = FUNC_24(VAR_21, VAR_39,
             VAR_34);
    break;
   case 129:
    VAR_56 = FUNC_24(VAR_20, VAR_39,
             VAR_34);
    break;
   default:
    VAR_56 = ((void*)0);
    break;
  }
 }
 else
  VAR_56 = ((void*)0);






 VAR_55 = FUNC_25(VAR_33,
          VAR_34,
          VAR_35,
          VAR_36,
          VAR_15,
          VAR_40,
          VAR_41,
          VAR_43,
          VAR_44,
          VAR_45,
          VAR_46,
          VAR_50,
          &VAR_62,
          &VAR_63);

 FUNC_3(VAR_36 == FUNC_15(VAR_55));

 VAR_55->rd_rel->relrewrite = VAR_52;







 if (VAR_17 && (VAR_43 == 130 ||
         VAR_43 == 128 ||
         VAR_43 == 132 ||
         VAR_43 == 133 ||
         VAR_43 == VAR_23 ||
         VAR_43 == 131))
  VAR_61 = FUNC_4();
 VAR_60 = FUNC_2(VAR_33,
            VAR_34,
            VAR_36,
            VAR_43,
            VAR_39,
            VAR_37,
            VAR_61);
 VAR_59 = VAR_60.objectId;
 if (VAR_53)
  *VAR_53 = VAR_60;




 if (FUNC_13(VAR_61))
 {
  char *VAR_64;

  VAR_64 = FUNC_26(VAR_33, VAR_34);

  FUNC_17(VAR_61,
       VAR_64,
       VAR_34,
       VAR_15,
       0,
       VAR_39,
       -1,
       VAR_29,
       VAR_27,
       0,
       VAR_3,
       VAR_9,
       VAR_10,
       VAR_11,
       VAR_12,
       VAR_15,
       VAR_15,
       VAR_13,
       VAR_59,
       1,
       VAR_15,
       VAR_15,
       ((void*)0),
       ((void*)0),
       0,
       'd',
       'x',
       -1,
       0,
       0,
       VAR_15);

  FUNC_28(VAR_64);
 }
 FUNC_1(VAR_54,
      VAR_55,
      VAR_36,
      VAR_59,
      VAR_38,
      VAR_39,
      VAR_43,
      VAR_62,
      VAR_63,
      FUNC_14(VAR_56),
      VAR_48);




 FUNC_0(VAR_36, VAR_55->rd_att, VAR_43);
 if (VAR_43 != VAR_23 &&
  VAR_43 != VAR_24 &&
  !FUNC_10())
 {
  ObjectAddress VAR_65,
     VAR_66;

  VAR_65.classId = VAR_25;
  VAR_65.objectId = VAR_36;
  VAR_65.objectSubId = 0;

  VAR_66.classId = VAR_18;
  VAR_66.objectId = VAR_34;
  VAR_66.objectSubId = 0;
  FUNC_29(&VAR_65, &VAR_66, VAR_4);

  FUNC_32(VAR_25, VAR_36, VAR_39);

  FUNC_31(VAR_25, VAR_36, 0, VAR_39, VAR_56);

  FUNC_30(&VAR_65, 0);

  if (VAR_38)
  {
   VAR_66.classId = VAR_30;
   VAR_66.objectId = VAR_38;
   VAR_66.objectSubId = 0;
   FUNC_29(&VAR_65, &VAR_66, VAR_4);
  }
  if (VAR_43 == 130 ||
   VAR_43 == 132)
  {
   VAR_66.classId = VAR_0;
   VAR_66.objectId = VAR_40;
   VAR_66.objectSubId = 0;
   FUNC_29(&VAR_65, &VAR_66, VAR_4);
  }
 }


 FUNC_9(VAR_25, VAR_36, 0, VAR_51);
 FUNC_16(VAR_55, VAR_42, VAR_51);




 if (VAR_47 != VAR_22)
  FUNC_33(VAR_36, VAR_47);





 FUNC_34(VAR_55, VAR_19);
 FUNC_34(VAR_54, VAR_26);

 return VAR_36;
}
