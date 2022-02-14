
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AclItem ;
typedef int const Acl ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int const* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;

Acl *
FUNC_4(const Acl *VAR_0, const Acl *VAR_1)
{
 Acl *VAR_2;

 VAR_2 = FUNC_2(FUNC_1(VAR_0) + FUNC_1(VAR_1));

 FUNC_3(FUNC_0(VAR_2),
     FUNC_0(VAR_0),
     FUNC_1(VAR_0) * sizeof(AclItem));

 FUNC_3(FUNC_0(VAR_2) + FUNC_1(VAR_0),
     FUNC_0(VAR_1),
     FUNC_1(VAR_1) * sizeof(AclItem));

 return VAR_2;
}
