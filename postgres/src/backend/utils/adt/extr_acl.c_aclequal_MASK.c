
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AclItem ;
typedef int Acl ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

bool
FUNC_3(const Acl *VAR_0, const Acl *VAR_1)
{

 if (VAR_0 == ((void*)0) || FUNC_1(VAR_0) == 0)
 {
  if (VAR_1 == ((void*)0) || FUNC_1(VAR_1) == 0)
   return 1;
  else
   return 0;
 }
 else
 {
  if (VAR_1 == ((void*)0) || FUNC_1(VAR_1) == 0)
   return 0;
 }

 if (FUNC_1(VAR_0) != FUNC_1(VAR_1))
  return 0;

 if (FUNC_2(FUNC_0(VAR_0),
      FUNC_0(VAR_1),
      FUNC_1(VAR_0) * sizeof(AclItem)) == 0)
  return 1;

 return 0;
}
