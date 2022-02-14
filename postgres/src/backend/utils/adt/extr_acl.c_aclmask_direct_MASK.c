
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
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static AclMode
FUNC_4(const Acl *VAR_3, Oid VAR_4, Oid VAR_5,
      AclMode VAR_6, AclMaskHow VAR_7)
{
 AclMode VAR_8;
 AclItem *VAR_9;
 int VAR_10,
    VAR_11;





 if (VAR_3 == ((void*)0))
  FUNC_3(VAR_2, "null ACL");

 FUNC_2(VAR_3);


 if (VAR_6 == 0)
  return 0;

 VAR_8 = 0;


 if ((VAR_6 & VAR_0) &&
  VAR_4 == VAR_5)
 {
  VAR_8 = VAR_6 & VAR_0;
  if ((VAR_7 == VAR_1) ? (VAR_8 == VAR_6) : (VAR_8 != 0))
   return VAR_8;
 }

 VAR_11 = FUNC_1(VAR_3);
 VAR_9 = FUNC_0(VAR_3);




 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
 {
  AclItem *VAR_12 = &VAR_9[VAR_10];

  if (VAR_12->ai_grantee == VAR_4)
  {
   VAR_8 |= VAR_12->ai_privs & VAR_6;
   if ((VAR_7 == VAR_1) ? (VAR_8 == VAR_6) : (VAR_8 != 0))
    return VAR_8;
  }
 }

 return VAR_8;
}
