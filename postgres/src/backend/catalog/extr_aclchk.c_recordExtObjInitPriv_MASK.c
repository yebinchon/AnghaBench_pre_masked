
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ attisdropped; } ;
struct TYPE_3__ {scalar_t__ relkind; int relnatts; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;
typedef int AttrNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_40 ;
 int FUNC_6 (int ) ;
 int VAR_41 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int*) ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int FUNC_12 (int ,int ,int ,int*) ;
 int FUNC_13 (scalar_t__,scalar_t__,int,int ) ;
 int FUNC_14 (int ,int ,int,int *,int,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__,int ) ;

void
FUNC_18(Oid VAR_49, Oid VAR_50)
{







 if (VAR_50 == VAR_40)
 {
  Form_pg_class VAR_51;
  Datum VAR_52;
  bool VAR_53;
  HeapTuple VAR_54;

  VAR_54 = FUNC_8(VAR_39, FUNC_4(VAR_49));
  if (!FUNC_2(VAR_54))
   FUNC_11(VAR_17, "cache lookup failed for relation %u", VAR_49);
  VAR_51 = (Form_pg_class) FUNC_1(VAR_54);


  if (VAR_51->relkind == VAR_36 ||
   VAR_51->relkind == VAR_37)
   return;


  if (VAR_51->relkind == VAR_35)
   return;






  if (VAR_51->relkind != VAR_38)
  {
   AttrNumber VAR_55;
   AttrNumber VAR_56 = VAR_51->relnatts;

   for (VAR_55 = 1; VAR_55 <= VAR_56; VAR_55++)
   {
    HeapTuple VAR_57;
    Datum VAR_58;

    VAR_57 = FUNC_9(VAR_0,
             FUNC_4(VAR_49),
             FUNC_3(VAR_55));

    if (!FUNC_2(VAR_57))
     continue;


    if (((Form_pg_attribute) FUNC_1(VAR_57))->attisdropped)
    {
     FUNC_6(VAR_57);
     continue;
    }

    VAR_58 = FUNC_10(VAR_0, VAR_57,
             VAR_3,
             &VAR_53);


    if (VAR_53)
    {
     FUNC_6(VAR_57);
     continue;
    }

    FUNC_13(VAR_49, VAR_50, VAR_55,
             FUNC_0(VAR_58));

    FUNC_6(VAR_57);
   }
  }

  VAR_52 = FUNC_10(VAR_39, VAR_54, VAR_4,
           &VAR_53);


  if (!VAR_53)
   FUNC_13(VAR_49, VAR_50, 0,
            FUNC_0(VAR_52));

  FUNC_6(VAR_54);
 }

 else if (VAR_50 == VAR_22)
 {
  Datum VAR_59;
  bool VAR_60;
  HeapTuple VAR_61;

  VAR_61 = FUNC_8(VAR_19,
        FUNC_4(VAR_49));
  if (!FUNC_2(VAR_61))
   FUNC_11(VAR_17, "cache lookup failed for foreign data wrapper %u",
     VAR_49);

  VAR_59 = FUNC_10(VAR_19, VAR_61,
           VAR_5,
           &VAR_60);


  if (!VAR_60)
   FUNC_13(VAR_49, VAR_50, 0,
            FUNC_0(VAR_59));

  FUNC_6(VAR_61);
 }

 else if (VAR_50 == VAR_23)
 {
  Datum VAR_62;
  bool VAR_63;
  HeapTuple VAR_64;

  VAR_64 = FUNC_8(VAR_20, FUNC_4(VAR_49));
  if (!FUNC_2(VAR_64))
   FUNC_11(VAR_17, "cache lookup failed for foreign data wrapper %u",
     VAR_49);

  VAR_62 = FUNC_10(VAR_20, VAR_64,
           VAR_6,
           &VAR_63);


  if (!VAR_63)
   FUNC_13(VAR_49, VAR_50, 0,
            FUNC_0(VAR_62));

  FUNC_6(VAR_64);
 }

 else if (VAR_50 == VAR_25)
 {
  Datum VAR_65;
  bool VAR_66;
  HeapTuple VAR_67;

  VAR_67 = FUNC_8(VAR_24, FUNC_4(VAR_49));
  if (!FUNC_2(VAR_67))
   FUNC_11(VAR_17, "cache lookup failed for language %u", VAR_49);

  VAR_65 = FUNC_10(VAR_24, VAR_67, VAR_7,
           &VAR_66);


  if (!VAR_66)
   FUNC_13(VAR_49, VAR_50, 0,
            FUNC_0(VAR_65));

  FUNC_6(VAR_67);
 }

 else if (VAR_50 == VAR_27)
 {
  Datum VAR_68;
  bool VAR_69;
  HeapTuple VAR_70;
  ScanKeyData VAR_71[1];
  SysScanDesc VAR_72;
  Relation VAR_73;

  VAR_73 = FUNC_17(VAR_27, VAR_41);


  FUNC_7(&VAR_71[0],
     VAR_9,
     VAR_13, VAR_21,
     FUNC_4(VAR_49));

  VAR_72 = FUNC_14(VAR_73,
          VAR_26, 1,
          ((void*)0), 1, VAR_71);

  VAR_70 = FUNC_16(VAR_72);
  if (!FUNC_2(VAR_70))
   FUNC_11(VAR_17, "could not find tuple for large object %u", VAR_49);

  VAR_68 = FUNC_12(VAR_70,
        VAR_8,
        FUNC_5(VAR_73), &VAR_69);


  if (!VAR_69)
   FUNC_13(VAR_49, VAR_50, 0,
            FUNC_0(VAR_68));

  FUNC_15(VAR_72);
 }

 else if (VAR_50 == VAR_29)
 {
  Datum VAR_74;
  bool VAR_75;
  HeapTuple VAR_76;

  VAR_76 = FUNC_8(VAR_28, FUNC_4(VAR_49));
  if (!FUNC_2(VAR_76))
   FUNC_11(VAR_17, "cache lookup failed for function %u", VAR_49);

  VAR_74 = FUNC_10(VAR_28, VAR_76,
           VAR_10, &VAR_75);


  if (!VAR_75)
   FUNC_13(VAR_49, VAR_50, 0,
            FUNC_0(VAR_74));

  FUNC_6(VAR_76);
 }

 else if (VAR_50 == VAR_34)
 {
  Datum VAR_77;
  bool VAR_78;
  HeapTuple VAR_79;

  VAR_79 = FUNC_8(VAR_33, FUNC_4(VAR_49));
  if (!FUNC_2(VAR_79))
   FUNC_11(VAR_17, "cache lookup failed for function %u", VAR_49);

  VAR_77 = FUNC_10(VAR_33, VAR_79, VAR_11,
           &VAR_78);


  if (!VAR_78)
   FUNC_13(VAR_49, VAR_50, 0,
            FUNC_0(VAR_77));

  FUNC_6(VAR_79);
 }

 else if (VAR_50 == VAR_48)
 {
  Datum VAR_80;
  bool VAR_81;
  HeapTuple VAR_82;

  VAR_82 = FUNC_8(VAR_46, FUNC_4(VAR_49));
  if (!FUNC_2(VAR_82))
   FUNC_11(VAR_17, "cache lookup failed for function %u", VAR_49);

  VAR_80 = FUNC_10(VAR_46, VAR_82, VAR_12,
           &VAR_81);


  if (!VAR_81)
   FUNC_13(VAR_49, VAR_50, 0,
            FUNC_0(VAR_80));

  FUNC_6(VAR_82);
 }
 else if (VAR_50 == VAR_1 ||
    VAR_50 == VAR_2 ||
    VAR_50 == VAR_14 ||
    VAR_50 == VAR_15 ||
    VAR_50 == VAR_16 ||
    VAR_50 == VAR_18 ||
    VAR_50 == VAR_32 ||
    VAR_50 == VAR_30 ||
    VAR_50 == VAR_31 ||
    VAR_50 == VAR_29 ||
    VAR_50 == VAR_42 ||
    VAR_50 == VAR_43 ||
    VAR_50 == VAR_44 ||
    VAR_50 == VAR_45 ||
    VAR_50 == VAR_47
  )
 {

 }





 else
 {
  FUNC_11(VAR_17, "unrecognized or unsupported class OID: %u", VAR_50);
 }
}
