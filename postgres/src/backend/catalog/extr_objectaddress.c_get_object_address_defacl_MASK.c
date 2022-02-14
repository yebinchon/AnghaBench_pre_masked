
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ oid; } ;
struct TYPE_7__ {int oid; } ;
struct TYPE_6__ {int objectId; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_default_acl ;
typedef TYPE_3__* Form_pg_authid ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_1__,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int const,int const,int const,int const,int const) ;
 int FUNC_12 (char*,...) ;
 scalar_t__ FUNC_13 (char*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 char* FUNC_18 (int ) ;

__attribute__((used)) static ObjectAddress
FUNC_19(List *VAR_7, bool VAR_8)
{
 HeapTuple VAR_9;
 Oid VAR_10;
 Oid VAR_11;
 char *VAR_12;
 char *VAR_13;
 char VAR_14;
 char *VAR_15;
 ObjectAddress VAR_16;

 FUNC_4(VAR_16, VAR_2, VAR_6);





 VAR_12 = FUNC_18(FUNC_16(VAR_7));
 if (FUNC_15(VAR_7) >= 3)
  VAR_13 = (char *) FUNC_18(FUNC_17(VAR_7));
 else
  VAR_13 = ((void*)0);





 VAR_14 = ((char *) FUNC_18(FUNC_14(VAR_7)))[0];
 switch (VAR_14)
 {
  case 130:
   VAR_15 = "tables";
   break;
  case 129:
   VAR_15 = "sequences";
   break;
  case 132:
   VAR_15 = "functions";
   break;
  case 128:
   VAR_15 = "types";
   break;
  case 131:
   VAR_15 = "schemas";
   break;
  default:
   FUNC_9(VAR_5,
     (FUNC_10(VAR_3),
      FUNC_12("unrecognized default ACL object type \"%c\"", VAR_14),
      FUNC_11("Valid object types are \"%c\", \"%c\", \"%c\", \"%c\", \"%c\".",
        130,
        129,
        132,
        128,
        131)));
 }





 VAR_9 = FUNC_7(VAR_0,
       FUNC_0(VAR_12));
 if (!FUNC_3(VAR_9))
  goto not_found;
 VAR_10 = ((Form_pg_authid) FUNC_2(VAR_9))->oid;
 FUNC_6(VAR_9);





 if (VAR_13)
 {
  VAR_11 = FUNC_13(VAR_13, 1);
  if (VAR_11 == VAR_6)
   goto not_found;
 }
 else
  VAR_11 = VAR_6;


 VAR_9 = FUNC_8(VAR_1,
       FUNC_5(VAR_10),
       FUNC_5(VAR_11),
       FUNC_1(VAR_14));
 if (!FUNC_3(VAR_9))
  goto not_found;

 VAR_16.objectId = ((Form_pg_default_acl) FUNC_2(VAR_9))->oid;
 FUNC_6(VAR_9);

 return VAR_16;

not_found:
 if (!VAR_8)
 {
  if (VAR_13)
   FUNC_9(VAR_5,
     (FUNC_10(VAR_4),
      FUNC_12("default ACL for user \"%s\" in schema \"%s\" on %s does not exist",
       VAR_12, VAR_13, VAR_15)));
  else
   FUNC_9(VAR_5,
     (FUNC_10(VAR_4),
      FUNC_12("default ACL for user \"%s\" on %s does not exist",
       VAR_12, VAR_15)));
 }
 return VAR_16;
}
