
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rolname; } ;
typedef int RoleSpec ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_authid ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*) ;
 char* FUNC_4 (int ) ;

char *
FUNC_5(const RoleSpec *VAR_0)
{
 HeapTuple VAR_1;
 Form_pg_authid VAR_2;
 char *VAR_3;

 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = (Form_pg_authid) FUNC_0(VAR_1);
 VAR_3 = FUNC_4(FUNC_1(VAR_2->rolname));
 FUNC_2(VAR_1);

 return VAR_3;
}
