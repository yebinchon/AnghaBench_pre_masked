
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_superuser; int roleid; } ;
typedef TYPE_1__ role_auth_extra ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(const char *VAR_0, void *VAR_1)
{
 role_auth_extra *VAR_2 = (role_auth_extra *) VAR_1;

 FUNC_0(VAR_2->roleid, VAR_2->is_superuser);
}
