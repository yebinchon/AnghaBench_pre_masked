
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;


typedef int ctl ;
struct TYPE_20__ {scalar_t__ fn_oid; } ;
struct TYPE_21__ {int keysize; int entrysize; scalar_t__ typtype; int flags; scalar_t__ btree_opf; scalar_t__ btree_opintype; scalar_t__ hash_opf; scalar_t__ hash_opintype; scalar_t__ eq_opr; scalar_t__ cmp_proc; scalar_t__ hash_proc; scalar_t__ hash_extended_proc; scalar_t__ domainBaseType; int domainBaseTypmod; int * rngelemtype; int * tupDesc; TYPE_13__ hash_extended_proc_finfo; TYPE_13__ hash_proc_finfo; TYPE_13__ cmp_proc_finfo; TYPE_13__ eq_opr_finfo; scalar_t__ gt_opr; scalar_t__ lt_opr; struct TYPE_21__* nextDomain; int typcollation; int typelem; int typrelid; int typstorage; int typalign; int typbyval; int typlen; scalar_t__ type_id; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_22__ {scalar_t__ typtype; int typcollation; int typelem; int typrelid; int typstorage; int typalign; int typbyval; int typlen; int typname; int typisdefined; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__ HASHCTL ;
typedef TYPE_3__* Form_pg_type ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_27 ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 int VAR_60 ;
 int * VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,scalar_t__) ;
 TYPE_1__* VAR_64 ;
 int FUNC_20 (scalar_t__,TYPE_13__*,int ) ;
 scalar_t__ FUNC_21 (scalar_t__,int*) ;
 void* FUNC_22 (scalar_t__) ;
 void* FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_26 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int * FUNC_27 (char*,int,TYPE_1__*,int) ;
 scalar_t__ FUNC_28 (int *,void*,int ,int*) ;
 int FUNC_29 (TYPE_1__*) ;
 int FUNC_30 (TYPE_1__*) ;
 int FUNC_31 (TYPE_1__*) ;
 int FUNC_32 (TYPE_1__*) ;
 int FUNC_33 (TYPE_1__*) ;
 int FUNC_34 (TYPE_1__*) ;
 int FUNC_35 (TYPE_1__*) ;

TypeCacheEntry *
FUNC_36(Oid VAR_65, int VAR_66)
{
 TypeCacheEntry *VAR_67;
 bool VAR_68;

 if (VAR_61 == ((void*)0))
 {

  HASHCTL VAR_69;

  FUNC_7(&VAR_69, 0, sizeof(VAR_69));
  VAR_69.keysize = sizeof(Oid);
  VAR_69.entrysize = sizeof(TypeCacheEntry);
  VAR_61 = FUNC_27("Type information cache", 64,
         &VAR_69, VAR_23 | VAR_22);


  FUNC_1(VAR_63, (Datum) 0);
  FUNC_2(VAR_8, VAR_62, (Datum) 0);
  FUNC_2(VAR_9, VAR_60, (Datum) 0);
  FUNC_2(VAR_56, VAR_60, (Datum) 0);


  if (!VAR_10)
   FUNC_3();
 }


 VAR_67 = (TypeCacheEntry *) FUNC_28(VAR_61,
             (void *) &VAR_65,
             VAR_25, ((void*)0));
 if (VAR_67 == ((void*)0))
 {







  HeapTuple VAR_70;
  Form_pg_type VAR_71;

  VAR_70 = FUNC_12(VAR_56, FUNC_9(VAR_65));
  if (!FUNC_6(VAR_70))
   FUNC_17(VAR_12,
     (FUNC_18(VAR_11),
      FUNC_19("type with OID %u does not exist", VAR_65)));
  VAR_71 = (Form_pg_type) FUNC_4(VAR_70);
  if (!VAR_71->typisdefined)
   FUNC_17(VAR_12,
     (FUNC_18(VAR_11),
      FUNC_19("type \"%s\" is only a shell",
       FUNC_8(VAR_71->typname))));


  VAR_67 = (TypeCacheEntry *) FUNC_28(VAR_61,
              (void *) &VAR_65,
              VAR_24, &VAR_68);
  FUNC_0(!VAR_68);

  FUNC_7(VAR_67, 0, sizeof(TypeCacheEntry));
  VAR_67->type_id = VAR_65;
  VAR_67->typlen = VAR_71->typlen;
  VAR_67->typbyval = VAR_71->typbyval;
  VAR_67->typalign = VAR_71->typalign;
  VAR_67->typstorage = VAR_71->typstorage;
  VAR_67->typtype = VAR_71->typtype;
  VAR_67->typrelid = VAR_71->typrelid;
  VAR_67->typelem = VAR_71->typelem;
  VAR_67->typcollation = VAR_71->typcollation;


  if (VAR_67->typtype == VAR_58)
  {
   VAR_67->nextDomain = VAR_64;
   VAR_64 = VAR_67;
  }

  FUNC_11(VAR_70);
 }





 if ((VAR_66 & (VAR_45 | VAR_53 | VAR_47 |
      VAR_41 |
      VAR_46 | VAR_42 |
      VAR_40)) &&
  !(VAR_67->flags & VAR_31))
 {
  Oid VAR_72;

  VAR_72 = FUNC_5(VAR_65, VAR_7);
  if (FUNC_10(VAR_72))
  {
   VAR_67->btree_opf = FUNC_22(VAR_72);
   VAR_67->btree_opintype = FUNC_23(VAR_72);
  }
  else
  {
   VAR_67->btree_opf = VAR_67->btree_opintype = VAR_27;
  }







  VAR_67->flags &= ~(VAR_34 |
        VAR_39 |
        VAR_35 |
        VAR_32);
  VAR_67->flags |= VAR_31;
 }





 if ((VAR_66 & (VAR_45 | VAR_46)) &&
  !(VAR_67->flags & VAR_34) &&
  VAR_67->btree_opf == VAR_27)
  VAR_66 |= VAR_50;

 if ((VAR_66 & (VAR_51 | VAR_52 |
      VAR_48 |
      VAR_49 |
      VAR_50)) &&
  !(VAR_67->flags & VAR_37))
 {
  Oid VAR_73;

  VAR_73 = FUNC_5(VAR_65, VAR_21);
  if (FUNC_10(VAR_73))
  {
   VAR_67->hash_opf = FUNC_22(VAR_73);
   VAR_67->hash_opintype = FUNC_23(VAR_73);
  }
  else
  {
   VAR_67->hash_opf = VAR_67->hash_opintype = VAR_27;
  }






  VAR_67->flags &= ~(VAR_38 |
        VAR_36);
  VAR_67->flags |= VAR_37;
 }




 if ((VAR_66 & (VAR_45 | VAR_46)) &&
  !(VAR_67->flags & VAR_34))
 {
  Oid VAR_74 = VAR_27;

  if (VAR_67->btree_opf != VAR_27)
   VAR_74 = FUNC_25(VAR_67->btree_opf,
           VAR_67->btree_opintype,
           VAR_67->btree_opintype,
           VAR_3);
  if (VAR_74 == VAR_27 &&
   VAR_67->hash_opf != VAR_27)
   VAR_74 = FUNC_25(VAR_67->hash_opf,
           VAR_67->hash_opintype,
           VAR_67->hash_opintype,
           VAR_26);
  if (VAR_74 == VAR_0 &&
   !FUNC_14(VAR_67))
   VAR_74 = VAR_27;
  else if (VAR_74 == VAR_28 &&
     !FUNC_35(VAR_67))
   VAR_74 = VAR_27;


  if (VAR_67->eq_opr != VAR_74)
   VAR_67->eq_opr_finfo.fn_oid = VAR_27;

  VAR_67->eq_opr = VAR_74;






  VAR_67->flags &= ~(VAR_38 |
        VAR_36);
  VAR_67->flags |= VAR_34;
 }
 if ((VAR_66 & VAR_53) &&
  !(VAR_67->flags & VAR_39))
 {
  Oid VAR_75 = VAR_27;

  if (VAR_67->btree_opf != VAR_27)
   VAR_75 = FUNC_25(VAR_67->btree_opf,
           VAR_67->btree_opintype,
           VAR_67->btree_opintype,
           VAR_5);





  if (VAR_75 == VAR_2 &&
   !FUNC_13(VAR_67))
   VAR_75 = VAR_27;
  else if (VAR_75 == VAR_30 &&
     !FUNC_34(VAR_67))
   VAR_75 = VAR_27;

  VAR_67->lt_opr = VAR_75;
  VAR_67->flags |= VAR_39;
 }
 if ((VAR_66 & VAR_47) &&
  !(VAR_67->flags & VAR_35))
 {
  Oid VAR_76 = VAR_27;

  if (VAR_67->btree_opf != VAR_27)
   VAR_76 = FUNC_25(VAR_67->btree_opf,
           VAR_67->btree_opintype,
           VAR_67->btree_opintype,
           VAR_4);





  if (VAR_76 == VAR_1 &&
   !FUNC_13(VAR_67))
   VAR_76 = VAR_27;
  else if (VAR_76 == VAR_29 &&
     !FUNC_34(VAR_67))
   VAR_76 = VAR_27;

  VAR_67->gt_opr = VAR_76;
  VAR_67->flags |= VAR_35;
 }
 if ((VAR_66 & (VAR_41 | VAR_42)) &&
  !(VAR_67->flags & VAR_32))
 {
  Oid VAR_77 = VAR_27;

  if (VAR_67->btree_opf != VAR_27)
   VAR_77 = FUNC_26(VAR_67->btree_opf,
           VAR_67->btree_opintype,
           VAR_67->btree_opintype,
           VAR_6);





  if (VAR_77 == VAR_13 &&
   !FUNC_13(VAR_67))
   VAR_77 = VAR_27;
  else if (VAR_77 == VAR_14 &&
     !FUNC_34(VAR_67))
   VAR_77 = VAR_27;


  if (VAR_67->cmp_proc != VAR_77)
   VAR_67->cmp_proc_finfo.fn_oid = VAR_27;

  VAR_67->cmp_proc = VAR_77;
  VAR_67->flags |= VAR_32;
 }
 if ((VAR_66 & (VAR_51 | VAR_52)) &&
  !(VAR_67->flags & VAR_38))
 {
  Oid VAR_78 = VAR_27;





  if (VAR_67->hash_opf != VAR_27 &&
   (!FUNC_10(VAR_67->eq_opr) ||
    VAR_67->eq_opr == FUNC_25(VAR_67->hash_opf,
              VAR_67->hash_opintype,
              VAR_67->hash_opintype,
              VAR_26)))
   VAR_78 = FUNC_26(VAR_67->hash_opf,
            VAR_67->hash_opintype,
            VAR_67->hash_opintype,
            VAR_20);






  if (VAR_78 == VAR_15 &&
   !FUNC_16(VAR_67))
   VAR_78 = VAR_27;




  if (VAR_78 == VAR_17 &&
   !FUNC_33(VAR_67))
   VAR_78 = VAR_27;


  if (VAR_67->hash_proc != VAR_78)
   VAR_67->hash_proc_finfo.fn_oid = VAR_27;

  VAR_67->hash_proc = VAR_78;
  VAR_67->flags |= VAR_38;
 }
 if ((VAR_66 & (VAR_48 |
      VAR_49)) &&
  !(VAR_67->flags & VAR_36))
 {
  Oid VAR_79 = VAR_27;





  if (VAR_67->hash_opf != VAR_27 &&
   (!FUNC_10(VAR_67->eq_opr) ||
    VAR_67->eq_opr == FUNC_25(VAR_67->hash_opf,
              VAR_67->hash_opintype,
              VAR_67->hash_opintype,
              VAR_26)))
   VAR_79 = FUNC_26(VAR_67->hash_opf,
               VAR_67->hash_opintype,
               VAR_67->hash_opintype,
               VAR_19);






  if (VAR_79 == VAR_16 &&
   !FUNC_15(VAR_67))
   VAR_79 = VAR_27;




  if (VAR_79 == VAR_18 &&
   !FUNC_32(VAR_67))
   VAR_79 = VAR_27;


  if (VAR_67->hash_extended_proc != VAR_79)
   VAR_67->hash_extended_proc_finfo.fn_oid = VAR_27;

  VAR_67->hash_extended_proc = VAR_79;
  VAR_67->flags |= VAR_36;
 }
 if ((VAR_66 & VAR_46) &&
  VAR_67->eq_opr_finfo.fn_oid == VAR_27 &&
  VAR_67->eq_opr != VAR_27)
 {
  Oid VAR_80;

  VAR_80 = FUNC_24(VAR_67->eq_opr);
  if (VAR_80 != VAR_27)
   FUNC_20(VAR_80, &VAR_67->eq_opr_finfo,
        VAR_10);
 }
 if ((VAR_66 & VAR_42) &&
  VAR_67->cmp_proc_finfo.fn_oid == VAR_27 &&
  VAR_67->cmp_proc != VAR_27)
 {
  FUNC_20(VAR_67->cmp_proc, &VAR_67->cmp_proc_finfo,
       VAR_10);
 }
 if ((VAR_66 & VAR_52) &&
  VAR_67->hash_proc_finfo.fn_oid == VAR_27 &&
  VAR_67->hash_proc != VAR_27)
 {
  FUNC_20(VAR_67->hash_proc, &VAR_67->hash_proc_finfo,
       VAR_10);
 }
 if ((VAR_66 & VAR_49) &&
  VAR_67->hash_extended_proc_finfo.fn_oid == VAR_27 &&
  VAR_67->hash_extended_proc != VAR_27)
 {
  FUNC_20(VAR_67->hash_extended_proc,
       &VAR_67->hash_extended_proc_finfo,
       VAR_10);
 }




 if ((VAR_66 & VAR_55) &&
  VAR_67->tupDesc == ((void*)0) &&
  VAR_67->typtype == VAR_57)
 {
  FUNC_31(VAR_67);
 }




 if ((VAR_66 & VAR_54) &&
  VAR_67->rngelemtype == ((void*)0) &&
  VAR_67->typtype == VAR_59)
 {
  FUNC_30(VAR_67);
 }




 if ((VAR_66 & VAR_43) &&
  VAR_67->domainBaseType == VAR_27 &&
  VAR_67->typtype == VAR_58)
 {
  VAR_67->domainBaseTypmod = -1;
  VAR_67->domainBaseType =
   FUNC_21(VAR_65, &VAR_67->domainBaseTypmod);
 }
 if ((VAR_66 & VAR_44) &&
  (VAR_67->flags & VAR_33) == 0 &&
  VAR_67->typtype == VAR_58)
 {
  FUNC_29(VAR_67);
 }

 return VAR_67;
}
