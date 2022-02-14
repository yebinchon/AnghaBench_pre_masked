
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ typmods; int setof; int names; } ;
typedef TYPE_1__ TypeName ;
typedef scalar_t__ Type ;
struct TYPE_10__ {int typisdefined; } ;
struct TYPE_9__ {scalar_t__ objectId; } ;
typedef scalar_t__ Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef TYPE_3__* Form_pg_type ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int *,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,char**) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 char* FUNC_7 (TYPE_1__*) ;
 TYPE_2__ FUNC_8 (char*,scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_18 (scalar_t__) ;

__attribute__((used)) static void
FUNC_19(TypeName *VAR_14, Oid VAR_15,
     Oid *VAR_16, bool *VAR_17)
{
 Oid VAR_18;
 Type VAR_19;
 AclResult VAR_20;

 VAR_19 = FUNC_3(((void*)0), VAR_14, ((void*)0), 0);

 if (VAR_19)
 {
  if (!((Form_pg_type) FUNC_1(VAR_19))->typisdefined)
  {
   if (VAR_15 == VAR_13)
    FUNC_11(VAR_8,
      (FUNC_12(VAR_4),
       FUNC_14("SQL function cannot return shell type %s",
        FUNC_7(VAR_14))));
   else
    FUNC_11(VAR_11,
      (FUNC_12(VAR_7),
       FUNC_14("return type %s is only a shell",
        FUNC_7(VAR_14))));
  }
  VAR_18 = FUNC_18(VAR_19);
  FUNC_6(VAR_19);
 }
 else
 {
  char *VAR_21 = FUNC_7(VAR_14);
  Oid VAR_22;
  AclResult VAR_23;
  char *VAR_24;
  ObjectAddress VAR_25;







  if (VAR_15 != VAR_9 &&
   VAR_15 != VAR_3)
   FUNC_11(VAR_8,
     (FUNC_12(VAR_6),
      FUNC_14("type \"%s\" does not exist", VAR_21)));


  if (VAR_14->typmods != VAR_10)
   FUNC_11(VAR_8,
     (FUNC_12(VAR_5),
      FUNC_14("type modifier cannot be specified for shell type \"%s\"",
       VAR_21)));


  FUNC_11(VAR_11,
    (FUNC_12(VAR_6),
     FUNC_14("type \"%s\" is not yet defined", VAR_21),
     FUNC_13("Creating a shell type definition.")));
  VAR_22 = FUNC_5(VAR_14->names,
              &VAR_24);
  VAR_23 = FUNC_16(VAR_22, FUNC_2(),
            VAR_1);
  if (VAR_23 != VAR_0)
   FUNC_9(VAR_23, VAR_12,
         FUNC_15(VAR_22));
  VAR_25 = FUNC_8(VAR_24, VAR_22, FUNC_2());
  VAR_18 = VAR_25.objectId;
  FUNC_0(FUNC_4(VAR_18));
 }

 VAR_20 = FUNC_17(VAR_18, FUNC_2(), VAR_2);
 if (VAR_20 != VAR_0)
  FUNC_10(VAR_20, VAR_18);

 *VAR_16 = VAR_18;
 *VAR_17 = VAR_14->setof;
}
