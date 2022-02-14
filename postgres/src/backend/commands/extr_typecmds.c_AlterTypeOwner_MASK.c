
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_2__ {scalar_t__ typtype; scalar_t__ typelem; scalar_t__ typowner; int typnamespace; int oid; int typrelid; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef scalar_t__ ObjectType ;
typedef int ObjectAddress ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_type ;
typedef scalar_t__ AclResult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int *,int *,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int *) ;
 int VAR_12 ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int * FUNC_19 (int *) ;
 int * FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int ,scalar_t__,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 () ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ) ;
 scalar_t__ FUNC_26 (int *) ;

ObjectAddress
FUNC_27(List *VAR_13, Oid VAR_14, ObjectType VAR_15)
{
 TypeName *VAR_16;
 Oid VAR_17;
 Relation VAR_18;
 HeapTuple VAR_19;
 HeapTuple VAR_20;
 Form_pg_type VAR_21;
 AclResult VAR_22;
 ObjectAddress VAR_23;

 VAR_18 = FUNC_25(VAR_12, VAR_9);


 VAR_16 = FUNC_20(VAR_13);


 VAR_19 = FUNC_3(((void*)0), VAR_16, ((void*)0), 0);
 if (VAR_19 == ((void*)0))
  FUNC_11(VAR_5,
    (FUNC_12(VAR_3),
     FUNC_14("type \"%s\" does not exist",
      FUNC_7(VAR_16))));
 VAR_17 = FUNC_26(VAR_19);


 VAR_20 = FUNC_19(VAR_19);
 FUNC_6(VAR_19);
 VAR_19 = VAR_20;
 VAR_21 = (Form_pg_type) FUNC_1(VAR_19);


 if (VAR_15 == VAR_6 && VAR_21->typtype != VAR_11)
  FUNC_11(VAR_5,
    (FUNC_12(VAR_4),
     FUNC_14("%s is not a domain",
      FUNC_15(VAR_17))));






 if (VAR_21->typtype == VAR_10 &&
  FUNC_18(VAR_21->typrelid) != VAR_8)
  FUNC_11(VAR_5,
    (FUNC_12(VAR_4),
     FUNC_14("%s is a table's row type",
      FUNC_15(VAR_17)),
     FUNC_13("Use ALTER TABLE instead.")));


 if (FUNC_5(VAR_21->typelem) &&
  FUNC_16(VAR_21->typelem) == VAR_17)
  FUNC_11(VAR_5,
    (FUNC_12(VAR_4),
     FUNC_14("cannot alter array type %s",
      FUNC_15(VAR_17)),
     FUNC_13("You can alter type %s, which will alter the array type as well.",
       FUNC_15(VAR_21->typelem))));





 if (VAR_21->typowner != VAR_14)
 {

  if (!FUNC_23())
  {

   if (!FUNC_22(VAR_21->oid, FUNC_2()))
    FUNC_9(VAR_0, VAR_21->oid);


   FUNC_10(FUNC_2(), VAR_14);


   VAR_22 = FUNC_21(VAR_21->typnamespace,
             VAR_14,
             VAR_2);
   if (VAR_22 != VAR_1)
    FUNC_8(VAR_22, VAR_7,
          FUNC_17(VAR_21->typnamespace));
  }

  FUNC_0(VAR_17, VAR_14, 1);
 }

 FUNC_4(VAR_23, VAR_12, VAR_17);


 FUNC_24(VAR_18, VAR_9);

 return VAR_23;
}
