
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ai_grantee; int ai_privs; } ;
typedef scalar_t__ Oid ;
typedef int AclMode ;
typedef scalar_t__ AclMaskHow ;
typedef TYPE_1__ AclItem ;
typedef int Acl ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int const*) ;
 int VAR_3 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

AclMode
FUNC_5(const Acl *VAR_4, Oid VAR_5, Oid VAR_6,
  AclMode VAR_7, AclMaskHow VAR_8)
{
 AclMode VAR_9;
 AclMode VAR_10;
 AclItem *VAR_11;
 int VAR_12,
    VAR_13;





 if (VAR_4 == ((void*)0))
  FUNC_3(VAR_3, "null ACL");

 FUNC_2(VAR_4);


 if (VAR_7 == 0)
  return 0;

 VAR_9 = 0;


 if ((VAR_7 & VAR_0) &&
  FUNC_4(VAR_5, VAR_6))
 {
  VAR_9 = VAR_7 & VAR_0;
  if ((VAR_8 == VAR_1) ? (VAR_9 == VAR_7) : (VAR_9 != 0))
   return VAR_9;
 }

 VAR_13 = FUNC_1(VAR_4);
 VAR_11 = FUNC_0(VAR_4);




 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
 {
  AclItem *VAR_14 = &VAR_11[VAR_12];

  if (VAR_14->ai_grantee == VAR_2 ||
   VAR_14->ai_grantee == VAR_5)
  {
   VAR_9 |= VAR_14->ai_privs & VAR_7;
   if ((VAR_8 == VAR_1) ? (VAR_9 == VAR_7) : (VAR_9 != 0))
    return VAR_9;
  }
 }
 VAR_10 = VAR_7 & ~VAR_9;
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
 {
  AclItem *VAR_15 = &VAR_11[VAR_12];

  if (VAR_15->ai_grantee == VAR_2 ||
   VAR_15->ai_grantee == VAR_5)
   continue;

  if ((VAR_15->ai_privs & VAR_10) &&
   FUNC_4(VAR_5, VAR_15->ai_grantee))
  {
   VAR_9 |= VAR_15->ai_privs & VAR_7;
   if ((VAR_8 == VAR_1) ? (VAR_9 == VAR_7) : (VAR_9 != 0))
    return VAR_9;
   VAR_10 = VAR_7 & ~VAR_9;
  }
 }

 return VAR_9;
}
