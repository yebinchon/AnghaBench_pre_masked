
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AclItem ;
typedef int const Acl ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int const* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;

Acl *
FUNC_4(const Acl *VAR_0)
{
 Acl *VAR_1;

 VAR_1 = FUNC_2(FUNC_1(VAR_0));

 FUNC_3(FUNC_0(VAR_1),
     FUNC_0(VAR_0),
     FUNC_1(VAR_0) * sizeof(AclItem));

 return VAR_1;
}
