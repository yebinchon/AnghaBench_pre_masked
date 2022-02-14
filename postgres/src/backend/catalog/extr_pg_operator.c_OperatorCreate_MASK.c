
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddress ;
typedef int NameData ;
typedef int List ;
typedef TYPE_1__* HeapTuple ;
typedef scalar_t__ Datum ;


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
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_21 ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 char const* FUNC_9 (int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (char const*,scalar_t__,scalar_t__,scalar_t__,int*) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_13 (scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_14 (int ) ;
 int VAR_27 ;
 TYPE_1__* FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int ,int ,char const*) ;
 int FUNC_17 (int ,char*,scalar_t__) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*,...) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (int *,scalar_t__,scalar_t__,char const*,scalar_t__,scalar_t__,scalar_t__,int) ;
 TYPE_1__* FUNC_23 (int ,scalar_t__*,int*) ;
 TYPE_1__* FUNC_24 (TYPE_1__*,int ,scalar_t__*,int*,int*) ;
 int FUNC_25 (TYPE_1__*,int) ;
 int FUNC_26 (int *,char const*) ;
 int FUNC_27 (scalar_t__,scalar_t__) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (char const*) ;

ObjectAddress
FUNC_31(const char *VAR_28,
      Oid VAR_29,
      Oid VAR_30,
      Oid VAR_31,
      Oid VAR_32,
      List *VAR_33,
      List *VAR_34,
      Oid VAR_35,
      Oid VAR_36,
      bool VAR_37,
      bool VAR_38)
{
 Relation VAR_39;
 HeapTuple VAR_40;
 bool VAR_41;
 bool VAR_42[VAR_22];
 bool VAR_43[VAR_22];
 Datum VAR_44[VAR_22];
 Oid VAR_45;
 bool VAR_46;
 Oid VAR_47;
 Oid VAR_48,
    VAR_49;
 bool VAR_50 = 0;
 NameData VAR_51;
 int VAR_52;
 ObjectAddress VAR_53;




 if (!FUNC_30(VAR_28))
  FUNC_18(VAR_20,
    (FUNC_19(VAR_19),
     FUNC_20("\"%s\" is not a valid operator name",
      VAR_28)));

 if (!(FUNC_11(VAR_30) && FUNC_11(VAR_31)))
 {

  if (VAR_33)
   FUNC_18(VAR_20,
     (FUNC_19(VAR_18),
      FUNC_20("only binary operators can have commutators")));
  if (FUNC_11(VAR_36))
   FUNC_18(VAR_20,
     (FUNC_19(VAR_18),
      FUNC_20("only binary operators can have join selectivity")));
  if (VAR_37)
   FUNC_18(VAR_20,
     (FUNC_19(VAR_18),
      FUNC_20("only binary operators can merge join")));
  if (VAR_38)
   FUNC_18(VAR_20,
     (FUNC_19(VAR_18),
      FUNC_20("only binary operators can hash")));
 }

 VAR_47 = FUNC_21(VAR_32);

 if (VAR_47 != VAR_16)
 {

  if (VAR_34)
   FUNC_18(VAR_20,
     (FUNC_19(VAR_18),
      FUNC_20("only boolean operators can have negators")));
  if (FUNC_11(VAR_35))
   FUNC_18(VAR_20,
     (FUNC_19(VAR_18),
      FUNC_20("only boolean operators can have restriction selectivity")));
  if (FUNC_11(VAR_36))
   FUNC_18(VAR_20,
     (FUNC_19(VAR_18),
      FUNC_20("only boolean operators can have join selectivity")));
  if (VAR_37)
   FUNC_18(VAR_20,
     (FUNC_19(VAR_18),
      FUNC_20("only boolean operators can merge join")));
  if (VAR_38)
   FUNC_18(VAR_20,
     (FUNC_19(VAR_18),
      FUNC_20("only boolean operators can hash")));
 }

 VAR_45 = FUNC_12(VAR_28,
           VAR_29,
           VAR_30,
           VAR_31,
           &VAR_46);

 if (VAR_46)
  FUNC_18(VAR_20,
    (FUNC_19(VAR_17),
     FUNC_20("operator %s already exists",
      VAR_28)));






 if (FUNC_11(VAR_45) &&
  !FUNC_27(VAR_45, FUNC_5()))
  FUNC_16(VAR_0, VAR_23,
        VAR_28);






 if (VAR_33)
 {

  VAR_48 = FUNC_22(VAR_33,
            VAR_31, VAR_30,
            VAR_28, VAR_29,
            VAR_30, VAR_31,
            1);


  if (FUNC_11(VAR_48) &&
   !FUNC_27(VAR_48, FUNC_5()))
   FUNC_16(VAR_0, VAR_23,
         FUNC_9(VAR_33));





  if (!FUNC_11(VAR_48))
   VAR_50 = 1;
 }
 else
  VAR_48 = VAR_21;

 if (VAR_34)
 {

  VAR_49 = FUNC_22(VAR_34,
            VAR_30, VAR_31,
            VAR_28, VAR_29,
            VAR_30, VAR_31,
            0);


  if (FUNC_11(VAR_49) &&
   !FUNC_27(VAR_49, FUNC_5()))
   FUNC_16(VAR_0, VAR_23,
         FUNC_9(VAR_34));
 }
 else
  VAR_49 = VAR_21;





 for (VAR_52 = 0; VAR_52 < VAR_22; ++VAR_52)
 {
  VAR_44[VAR_52] = (Datum) ((void*)0);
  VAR_43[VAR_52] = 1;
  VAR_42[VAR_52] = 0;
 }

 FUNC_26(&VAR_51, VAR_28);
 VAR_44[VAR_9 - 1] = FUNC_8(&VAR_51);
 VAR_44[VAR_10 - 1] = FUNC_10(VAR_29);
 VAR_44[VAR_12 - 1] = FUNC_10(FUNC_5());
 VAR_44[VAR_7 - 1] = FUNC_3(VAR_30 ? (VAR_31 ? 'b' : 'r') : 'l');
 VAR_44[VAR_3 - 1] = FUNC_0(VAR_37);
 VAR_44[VAR_2 - 1] = FUNC_0(VAR_38);
 VAR_44[VAR_8 - 1] = FUNC_10(VAR_30);
 VAR_44[VAR_15 - 1] = FUNC_10(VAR_31);
 VAR_44[VAR_14 - 1] = FUNC_10(VAR_47);
 VAR_44[VAR_5 - 1] = FUNC_10(VAR_48);
 VAR_44[VAR_11 - 1] = FUNC_10(VAR_49);
 VAR_44[VAR_4 - 1] = FUNC_10(VAR_32);
 VAR_44[VAR_13 - 1] = FUNC_10(VAR_35);
 VAR_44[VAR_6 - 1] = FUNC_10(VAR_36);

 VAR_39 = FUNC_29(VAR_26, VAR_27);




 if (VAR_45)
 {
  VAR_41 = 1;

  VAR_40 = FUNC_15(VAR_24,
          FUNC_10(VAR_45));
  if (!FUNC_6(VAR_40))
   FUNC_17(VAR_20, "cache lookup failed for operator %u",
     VAR_45);

  VAR_43[VAR_1 - 1] = 0;
  VAR_40 = FUNC_24(VAR_40,
        FUNC_14(VAR_39),
        VAR_44,
        VAR_42,
        VAR_43);

  FUNC_2(VAR_39, &VAR_40->t_self, VAR_40);
 }
 else
 {
  VAR_41 = 0;

  VAR_45 = FUNC_4(VAR_39,
             VAR_25,
             VAR_1);
  VAR_44[VAR_1 - 1] = FUNC_10(VAR_45);

  VAR_40 = FUNC_23(FUNC_14(VAR_39),
         VAR_44, VAR_42);

  FUNC_1(VAR_39, VAR_40);
 }


 VAR_53 = FUNC_25(VAR_40, VAR_41);


 FUNC_7(VAR_26, VAR_45, 0);

 FUNC_28(VAR_39, VAR_27);
 if (VAR_50)
  VAR_48 = VAR_45;

 if (FUNC_11(VAR_48) || FUNC_11(VAR_49))
  FUNC_13(VAR_45, VAR_48, VAR_49, 0);

 return VAR_53;
}
