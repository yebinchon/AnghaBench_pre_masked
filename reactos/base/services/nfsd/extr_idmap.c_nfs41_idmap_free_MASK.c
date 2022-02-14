
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_context {int groups; int users; scalar_t__ ldap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct idmap_context*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(
    struct idmap_context *VAR_0)
{

    if (VAR_0->ldap)
        FUNC_2(VAR_0->ldap);

    FUNC_0(&VAR_0->users);
    FUNC_0(&VAR_0->groups);
    FUNC_1(VAR_0);
}
