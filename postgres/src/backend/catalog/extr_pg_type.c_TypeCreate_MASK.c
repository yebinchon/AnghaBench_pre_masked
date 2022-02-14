
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32 ;
typedef int int16 ;
struct TYPE_13__ {scalar_t__ typowner; scalar_t__ oid; scalar_t__ typisdefined; } ;
struct TYPE_12__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddress ;
typedef int NameData ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_type ;
typedef scalar_t__ Datum ;
typedef int Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (char) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__,TYPE_2__*,int *,int *,char,int,int,int) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ VAR_36 ;
 int FUNC_12 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_37 ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int *) ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_15 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int *) ;
 char VAR_40 ;
 int FUNC_19 (int ) ;
 int VAR_41 ;
 TYPE_1__* FUNC_20 (int ,int ,scalar_t__) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_21 (int ,int ,char const*) ;
 scalar_t__ VAR_45 ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (char*,...) ;
 int * FUNC_26 (int ,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_27 (int ,scalar_t__*,int*) ;
 TYPE_1__* FUNC_28 (TYPE_1__*,int ,scalar_t__*,int*,int*) ;
 int FUNC_29 (int *,char const*) ;
 int * FUNC_30 (char*) ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int ,int ) ;

ObjectAddress
FUNC_33(Oid VAR_46,
     const char *VAR_47,
     Oid VAR_48,
     Oid VAR_49,
     char VAR_50,
     Oid VAR_51,
     int16 VAR_52,
     char VAR_53,
     char VAR_54,
     bool VAR_55,
     char VAR_56,
     Oid VAR_57,
     Oid VAR_58,
     Oid VAR_59,
     Oid VAR_60,
     Oid VAR_61,
     Oid VAR_62,
     Oid VAR_63,
     Oid VAR_64,
     bool VAR_65,
     Oid VAR_66,
     Oid VAR_67,
     const char *VAR_68,
     char *VAR_69,
     bool VAR_70,
     char VAR_71,
     char VAR_72,
     int32 VAR_73,
     int32 VAR_74,
     bool VAR_75,
     Oid VAR_76)
{
 Relation VAR_77;
 Oid VAR_78;
 bool VAR_79;
 bool VAR_80 = 0;
 Acl *VAR_81;
 HeapTuple VAR_82;
 bool VAR_83[VAR_38];
 bool VAR_84[VAR_38];
 Datum VAR_85[VAR_38];
 NameData VAR_86;
 int VAR_87;
 ObjectAddress VAR_88;
 if (!(VAR_52 > 0 ||
    VAR_52 == -1 ||
    VAR_52 == -2))
  FUNC_23(VAR_35,
    (FUNC_24(VAR_33),
     FUNC_25("invalid type internal size %d",
      VAR_52)));

 if (VAR_70)
 {






  if (VAR_52 == (int16) sizeof(char))
  {
   if (VAR_71 != 'c')
    FUNC_23(VAR_35,
      (FUNC_24(VAR_33),
       FUNC_25("alignment \"%c\" is invalid for passed-by-value type of size %d",
        VAR_71, VAR_52)));
  }
  else if (VAR_52 == (int16) sizeof(int16))
  {
   if (VAR_71 != 's')
    FUNC_23(VAR_35,
      (FUNC_24(VAR_33),
       FUNC_25("alignment \"%c\" is invalid for passed-by-value type of size %d",
        VAR_71, VAR_52)));
  }
  else if (VAR_52 == (int16) sizeof(int32))
  {
   if (VAR_71 != 'i')
    FUNC_23(VAR_35,
      (FUNC_24(VAR_33),
       FUNC_25("alignment \"%c\" is invalid for passed-by-value type of size %d",
        VAR_71, VAR_52)));
  }
  else
   FUNC_23(VAR_35,
     (FUNC_24(VAR_33),
      FUNC_25("internal size %d is invalid for passed-by-value type",
       VAR_52)));
 }
 else
 {

  if (VAR_52 == -1 && !(VAR_71 == 'i' || VAR_71 == 'd'))
   FUNC_23(VAR_35,
     (FUNC_24(VAR_33),
      FUNC_25("alignment \"%c\" is invalid for variable-length type",
       VAR_71)));

  if (VAR_52 == -2 && !(VAR_71 == 'c'))
   FUNC_23(VAR_35,
     (FUNC_24(VAR_33),
      FUNC_25("alignment \"%c\" is invalid for variable-length type",
       VAR_71)));
 }


 if (VAR_72 != 'p' && VAR_52 != -1)
  FUNC_23(VAR_35,
    (FUNC_24(VAR_33),
     FUNC_25("fixed-size types must have storage PLAIN")));
 VAR_79 = VAR_65 ||
  (FUNC_17(VAR_49) && VAR_50 != VAR_40);




 for (VAR_87 = 0; VAR_87 < VAR_38; ++VAR_87)
 {
  VAR_83[VAR_87] = 0;
  VAR_84[VAR_87] = 1;
  VAR_85[VAR_87] = (Datum) 0;
 }




 FUNC_29(&VAR_86, VAR_47);
 VAR_85[VAR_20 - 1] = FUNC_14(&VAR_86);
 VAR_85[VAR_21 - 1] = FUNC_16(VAR_48);
 VAR_85[VAR_25 - 1] = FUNC_16(VAR_51);
 VAR_85[VAR_17 - 1] = FUNC_10(VAR_52);
 VAR_85[VAR_7 - 1] = FUNC_0(VAR_70);
 VAR_85[VAR_30 - 1] = FUNC_5(VAR_53);
 VAR_85[VAR_8 - 1] = FUNC_5(VAR_54);
 VAR_85[VAR_16 - 1] = FUNC_0(VAR_55);
 VAR_85[VAR_15 - 1] = FUNC_0(1);
 VAR_85[VAR_12 - 1] = FUNC_5(VAR_56);
 VAR_85[VAR_27 - 1] = FUNC_16(VAR_49);
 VAR_85[VAR_13 - 1] = FUNC_16(VAR_64);
 VAR_85[VAR_5 - 1] = FUNC_16(VAR_66);
 VAR_85[VAR_14 - 1] = FUNC_16(VAR_57);
 VAR_85[VAR_24 - 1] = FUNC_16(VAR_58);
 VAR_85[VAR_26 - 1] = FUNC_16(VAR_59);
 VAR_85[VAR_28 - 1] = FUNC_16(VAR_60);
 VAR_85[VAR_18 - 1] = FUNC_16(VAR_61);
 VAR_85[VAR_19 - 1] = FUNC_16(VAR_62);
 VAR_85[VAR_4 - 1] = FUNC_16(VAR_63);
 VAR_85[VAR_3 - 1] = FUNC_5(VAR_71);
 VAR_85[VAR_29 - 1] = FUNC_5(VAR_72);
 VAR_85[VAR_23 - 1] = FUNC_0(VAR_75);
 VAR_85[VAR_6 - 1] = FUNC_16(VAR_67);
 VAR_85[VAR_31 - 1] = FUNC_11(VAR_73);
 VAR_85[VAR_22 - 1] = FUNC_11(VAR_74);
 VAR_85[VAR_9 - 1] = FUNC_16(VAR_76);





 if (VAR_69)
  VAR_85[VAR_11 - 1] = FUNC_2(VAR_69);
 else
  VAR_83[VAR_11 - 1] = 1;




 if (VAR_68)
  VAR_85[VAR_10 - 1] = FUNC_2(VAR_68);
 else
  VAR_83[VAR_10 - 1] = 1;




 if (VAR_79)
  VAR_81 = ((void*)0);
 else
  VAR_81 = FUNC_26(VAR_39, VAR_51,
           VAR_48);
 if (VAR_81 != ((void*)0))
  VAR_85[VAR_2 - 1] = FUNC_18(VAR_81);
 else
  VAR_83[VAR_2 - 1] = 1;







 VAR_77 = FUNC_32(VAR_44, VAR_41);

 VAR_82 = FUNC_20(VAR_42,
         FUNC_1(VAR_47),
         FUNC_16(VAR_48));
 if (FUNC_9(VAR_82))
 {
  Form_pg_type VAR_89 = (Form_pg_type) FUNC_6(VAR_82);





  if (VAR_89->typisdefined)
   FUNC_23(VAR_35,
     (FUNC_24(VAR_32),
      FUNC_25("type \"%s\" already exists", VAR_47)));




  if (VAR_89->typowner != VAR_51)
   FUNC_21(VAR_0, VAR_39, VAR_47);


  if (FUNC_17(VAR_46))
   FUNC_22(VAR_35, "cannot assign new OID to existing shell type");

  VAR_84[VAR_1 - 1] = 0;




  VAR_82 = FUNC_28(VAR_82,
        FUNC_19(VAR_77),
        VAR_85,
        VAR_83,
        VAR_84);

  FUNC_4(VAR_77, &VAR_82->t_self, VAR_82);

  VAR_78 = VAR_89->oid;

  VAR_80 = 1;
 }
 else
 {

  if (FUNC_17(VAR_46))
   VAR_78 = VAR_46;

  else if (VAR_37)
  {
   if (!FUNC_17(VAR_45))
    FUNC_23(VAR_35,
      (FUNC_24(VAR_34),
       FUNC_25("pg_type OID value not set when in binary upgrade mode")));

   VAR_78 = VAR_45;
   VAR_45 = VAR_36;
  }
  else
  {
   VAR_78 = FUNC_8(VAR_77, VAR_43,
             VAR_1);
  }

  VAR_85[VAR_1 - 1] = FUNC_16(VAR_78);

  VAR_82 = FUNC_27(FUNC_19(VAR_77),
         VAR_85, VAR_83);

  FUNC_3(VAR_77, VAR_82);
 }




 if (!FUNC_13())
  FUNC_7(VAR_78,
         (Form_pg_type) FUNC_6(VAR_82),
         (VAR_69 ?
          FUNC_30(VAR_69) :
          ((void*)0)),
         VAR_81,
         VAR_50,
         VAR_65,
         VAR_79,
         VAR_80);


 FUNC_12(VAR_44, VAR_78, 0);

 FUNC_15(VAR_88, VAR_44, VAR_78);




 FUNC_31(VAR_77, VAR_41);

 return VAR_88;
}
