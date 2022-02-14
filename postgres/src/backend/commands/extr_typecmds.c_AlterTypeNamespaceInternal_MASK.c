
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ typtype; void* typrelid; void* typnamespace; int typname; void* typarray; } ;
struct TYPE_12__ {int t_self; } ;
struct TYPE_11__ {scalar_t__ objectSubId; void* objectId; int classId; } ;
typedef int Relation ;
typedef void* Oid ;
typedef int ObjectAddresses ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_type ;


 int FUNC_0 (void*,void*,void*,int,int *) ;
 int FUNC_1 (int ,void*,void*,void*,int,int *) ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int FUNC_3 (void*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 void* VAR_3 ;
 int FUNC_6 (int ,void*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (void*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (int ,void*,int ,void*,void*) ;
 int FUNC_15 (int ,char*,void*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,void*,...) ;
 void* FUNC_20 (void*) ;
 int FUNC_21 (void*) ;
 scalar_t__ FUNC_22 (void*) ;
 int FUNC_23 (TYPE_2__*) ;
 scalar_t__ FUNC_24 (TYPE_1__*,int *) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int ) ;

Oid
FUNC_27(Oid VAR_13, Oid VAR_14,
         bool VAR_15,
         bool VAR_16,
         ObjectAddresses *VAR_17)
{
 Relation VAR_18;
 HeapTuple VAR_19;
 Form_pg_type VAR_20;
 Oid VAR_21;
 Oid VAR_22;
 bool VAR_23;
 ObjectAddress VAR_24;




 VAR_24.classId = VAR_12;
 VAR_24.objectId = VAR_13;
 VAR_24.objectSubId = 0;

 if (FUNC_24(&VAR_24, VAR_17))
  return VAR_3;

 VAR_18 = FUNC_26(VAR_12, VAR_7);

 VAR_19 = FUNC_11(VAR_9, FUNC_9(VAR_13));
 if (!FUNC_5(VAR_19))
  FUNC_15(VAR_2, "cache lookup failed for type %u", VAR_13);
 VAR_20 = (Form_pg_type) FUNC_4(VAR_19);

 VAR_21 = VAR_20->typnamespace;
 VAR_22 = VAR_20->typarray;


 if (VAR_21 != VAR_14)
 {

  FUNC_3(VAR_21, VAR_14);


  if (FUNC_12(VAR_8,
          FUNC_7(&VAR_20->typname),
          FUNC_9(VAR_14)))
   FUNC_16(VAR_2,
     (FUNC_17(VAR_0),
      FUNC_19("type \"%s\" already exists in schema \"%s\"",
       FUNC_8(VAR_20->typname),
       FUNC_21(VAR_14))));
 }


 VAR_23 =
  (VAR_20->typtype == VAR_10 &&
   FUNC_22(VAR_20->typrelid) == VAR_5);


 if (VAR_20->typtype == VAR_10 && !VAR_23 &&
  VAR_16)
  FUNC_16(VAR_2,
    (FUNC_17(VAR_1),
     FUNC_19("%s is a table's row type",
      FUNC_20(VAR_13)),
     FUNC_18("Use ALTER TABLE instead.")));

 if (VAR_21 != VAR_14)
 {



  VAR_20->typnamespace = VAR_14;

  FUNC_2(VAR_18, &VAR_19->t_self, VAR_19);
 }







 if (VAR_23)
 {
  Relation VAR_25;

  VAR_25 = FUNC_26(VAR_6, VAR_7);

  FUNC_1(VAR_25, VAR_20->typrelid,
            VAR_21, VAR_14,
            0, VAR_17);

  FUNC_25(VAR_25, VAR_7);





  FUNC_0(VAR_20->typrelid, VAR_21,
          VAR_14, 0, VAR_17);
 }
 else
 {

  if (VAR_20->typtype == VAR_11)
   FUNC_0(VAR_13, VAR_21, VAR_14, 1,
           VAR_17);
 }





 if (VAR_21 != VAR_14 &&
  (VAR_23 || VAR_20->typtype != VAR_10) &&
  !VAR_15)
  if (FUNC_14(VAR_12, VAR_13,
        VAR_4, VAR_21, VAR_14) != 1)
   FUNC_15(VAR_2, "failed to change schema dependency for type %s",
     FUNC_20(VAR_13));

 FUNC_6(VAR_12, VAR_13, 0);

 FUNC_23(VAR_19);

 FUNC_25(VAR_18, VAR_7);

 FUNC_13(&VAR_24, VAR_17);


 if (FUNC_10(VAR_22))
  FUNC_27(VAR_22, VAR_14, 1, 1, VAR_17);

 return VAR_21;
}
