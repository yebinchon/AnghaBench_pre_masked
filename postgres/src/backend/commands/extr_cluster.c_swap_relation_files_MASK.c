
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* int32 ;
typedef int float4 ;
typedef int TransactionId ;
struct TYPE_15__ {long relfilenode; long reltablespace; char relpersistence; long reltoastrelid; scalar_t__ relkind; void* relallvisible; int reltuples; void* relpages; int relminmxid; int relfrozenxid; int relisshared; int relname; } ;
struct TYPE_14__ {int t_self; } ;
struct TYPE_13__ {long objectId; scalar_t__ objectSubId; void* classId; } ;
typedef int Relation ;
typedef long Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int MultiXactId ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_class ;
typedef int CatalogIndexState ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (void*,long,int ,int ,int) ;
 scalar_t__ FUNC_8 (long,TYPE_3__*) ;
 long FUNC_9 (int ) ;
 int FUNC_10 (long) ;
 scalar_t__ FUNC_11 (long) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (long) ;
 long FUNC_13 (long,int ) ;
 int FUNC_14 (long,long,int ,int) ;
 void* VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 long FUNC_18 (void*,long,int) ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (void*,int ) ;
 long FUNC_24 (long,int ) ;

__attribute__((used)) static void
FUNC_25(Oid VAR_11, Oid VAR_12, bool VAR_13,
     bool VAR_14,
     bool VAR_15,
     TransactionId VAR_16,
     MultiXactId VAR_17,
     Oid *VAR_18)
{
 Relation VAR_19;
 HeapTuple VAR_20,
    VAR_21;
 Form_pg_class VAR_22,
    VAR_23;
 Oid VAR_24,
    VAR_25;
 Oid VAR_26;
 char VAR_27;


 VAR_19 = FUNC_23(VAR_9, VAR_10);

 VAR_20 = FUNC_15(VAR_8, FUNC_10(VAR_11));
 if (!FUNC_6(VAR_20))
  FUNC_19(VAR_2, "cache lookup failed for relation %u", VAR_11);
 VAR_22 = (Form_pg_class) FUNC_5(VAR_20);

 VAR_21 = FUNC_15(VAR_8, FUNC_10(VAR_12));
 if (!FUNC_6(VAR_21))
  FUNC_19(VAR_2, "cache lookup failed for relation %u", VAR_12);
 VAR_23 = (Form_pg_class) FUNC_5(VAR_21);

 VAR_24 = VAR_22->relfilenode;
 VAR_25 = VAR_23->relfilenode;

 if (FUNC_11(VAR_24) && FUNC_11(VAR_25))
 {




  FUNC_0(!VAR_13);

  VAR_26 = VAR_22->relfilenode;
  VAR_22->relfilenode = VAR_23->relfilenode;
  VAR_23->relfilenode = VAR_26;

  VAR_26 = VAR_22->reltablespace;
  VAR_22->reltablespace = VAR_23->reltablespace;
  VAR_23->reltablespace = VAR_26;

  VAR_27 = VAR_22->relpersistence;
  VAR_22->relpersistence = VAR_23->relpersistence;
  VAR_23->relpersistence = VAR_27;


  if (!VAR_14)
  {
   VAR_26 = VAR_22->reltoastrelid;
   VAR_22->reltoastrelid = VAR_23->reltoastrelid;
   VAR_23->reltoastrelid = VAR_26;
  }
 }
 else
 {




  if (FUNC_11(VAR_24) || FUNC_11(VAR_25))
   FUNC_19(VAR_2, "cannot swap mapped relation \"%s\" with non-mapped relation",
     FUNC_9(VAR_22->relname));
  if (VAR_22->reltablespace != VAR_23->reltablespace)
   FUNC_19(VAR_2, "cannot change tablespace of mapped relation \"%s\"",
     FUNC_9(VAR_22->relname));
  if (VAR_22->relpersistence != VAR_23->relpersistence)
   FUNC_19(VAR_2, "cannot change persistence of mapped relation \"%s\"",
     FUNC_9(VAR_22->relname));
  if (!VAR_14 &&
   (VAR_22->reltoastrelid || VAR_23->reltoastrelid))
   FUNC_19(VAR_2, "cannot swap toast by links for mapped relation \"%s\"",
     FUNC_9(VAR_22->relname));




  VAR_24 = FUNC_13(VAR_11, VAR_22->relisshared);
  if (!FUNC_11(VAR_24))
   FUNC_19(VAR_2, "could not find relation mapping for relation \"%s\", OID %u",
     FUNC_9(VAR_22->relname), VAR_11);
  VAR_25 = FUNC_13(VAR_12, VAR_23->relisshared);
  if (!FUNC_11(VAR_25))
   FUNC_19(VAR_2, "could not find relation mapping for relation \"%s\", OID %u",
     FUNC_9(VAR_23->relname), VAR_12);





  FUNC_14(VAR_11, VAR_25, VAR_22->relisshared, 0);
  FUNC_14(VAR_12, VAR_24, VAR_23->relisshared, 0);


  *VAR_18++ = VAR_12;
 }
 if (VAR_22->relkind != VAR_6)
 {
  FUNC_0(!FUNC_17(VAR_16) ||
      FUNC_16(VAR_16));
  VAR_22->relfrozenxid = VAR_16;
  VAR_22->relminmxid = VAR_17;
 }


 {
  int32 VAR_28;
  float4 VAR_29;
  int32 VAR_30;

  VAR_28 = VAR_22->relpages;
  VAR_22->relpages = VAR_23->relpages;
  VAR_23->relpages = VAR_28;

  VAR_29 = VAR_22->reltuples;
  VAR_22->reltuples = VAR_23->reltuples;
  VAR_23->reltuples = VAR_29;

  VAR_30 = VAR_22->relallvisible;
  VAR_22->relallvisible = VAR_23->relallvisible;
  VAR_23->relallvisible = VAR_30;
 }
 if (!VAR_13)
 {
  CatalogIndexState VAR_31;

  VAR_31 = FUNC_3(VAR_19);
  FUNC_4(VAR_19, &VAR_20->t_self, VAR_20,
           VAR_31);
  FUNC_4(VAR_19, &VAR_21->t_self, VAR_21,
           VAR_31);
  FUNC_2(VAR_31);
 }
 else
 {

  FUNC_1(VAR_20);
  FUNC_1(VAR_21);
 }





 FUNC_7(VAR_9, VAR_11, 0,
         VAR_4, VAR_15);
 FUNC_7(VAR_9, VAR_12, 0,
         VAR_4, 1);





 if (VAR_22->reltoastrelid || VAR_23->reltoastrelid)
 {
  if (VAR_14)
  {
   if (VAR_22->reltoastrelid && VAR_23->reltoastrelid)
   {

    FUNC_25(VAR_22->reltoastrelid,
         VAR_23->reltoastrelid,
         VAR_13,
         VAR_14,
         VAR_15,
         VAR_16,
         VAR_17,
         VAR_18);
   }
   else
   {

    FUNC_19(VAR_2, "cannot swap toast files by content when there's only one");
   }
  }
  else
  {
   ObjectAddress VAR_32,
      VAR_33;
   long VAR_34;







   if (FUNC_8(VAR_11, VAR_22))
    FUNC_19(VAR_2, "cannot swap toast files by links for system catalogs");


   if (VAR_22->reltoastrelid)
   {
    VAR_34 = FUNC_18(VAR_9,
               VAR_22->reltoastrelid,
               0);
    if (VAR_34 != 1)
     FUNC_19(VAR_2, "expected one dependency record for TOAST table, found %ld",
       VAR_34);
   }
   if (VAR_23->reltoastrelid)
   {
    VAR_34 = FUNC_18(VAR_9,
               VAR_23->reltoastrelid,
               0);
    if (VAR_34 != 1)
     FUNC_19(VAR_2, "expected one dependency record for TOAST table, found %ld",
       VAR_34);
   }


   VAR_32.classId = VAR_9;
   VAR_32.objectSubId = 0;
   VAR_33.classId = VAR_9;
   VAR_33.objectSubId = 0;

   if (VAR_22->reltoastrelid)
   {
    VAR_32.objectId = VAR_11;
    VAR_33.objectId = VAR_22->reltoastrelid;
    FUNC_21(&VAR_33, &VAR_32,
           VAR_1);
   }

   if (VAR_23->reltoastrelid)
   {
    VAR_32.objectId = VAR_12;
    VAR_33.objectId = VAR_23->reltoastrelid;
    FUNC_21(&VAR_33, &VAR_32,
           VAR_1);
   }
  }
 }






 if (VAR_14 &&
  VAR_22->relkind == VAR_7 &&
  VAR_23->relkind == VAR_7)
 {
  Oid VAR_35,
     VAR_36;


  VAR_35 = FUNC_24(VAR_11,
           VAR_0);
  VAR_36 = FUNC_24(VAR_12,
           VAR_0);

  FUNC_25(VAR_35,
       VAR_36,
       VAR_13,
       VAR_14,
       VAR_15,
       VAR_5,
       VAR_3,
       VAR_18);
 }


 FUNC_20(VAR_20);
 FUNC_20(VAR_21);

 FUNC_22(VAR_19, VAR_10);
 FUNC_12(VAR_11);
 FUNC_12(VAR_12);
}
