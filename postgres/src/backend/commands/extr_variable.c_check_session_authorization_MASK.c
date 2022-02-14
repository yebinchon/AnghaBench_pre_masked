
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_superuser; int roleid; } ;
typedef TYPE_1__ role_auth_extra ;
struct TYPE_4__ {int rolsuper; int oid; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int GucSource ;
typedef TYPE_2__* Form_pg_authid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

bool
FUNC_8(char **VAR_1, void **VAR_2, GucSource VAR_3)
{
 HeapTuple VAR_4;
 Form_pg_authid VAR_5;
 Oid VAR_6;
 bool VAR_7;
 role_auth_extra *VAR_8;


 if (*VAR_1 == ((void*)0))
  return 1;

 if (!FUNC_3())
 {





  return 0;
 }


 VAR_4 = FUNC_6(VAR_0, FUNC_4(*VAR_1));
 if (!FUNC_2(VAR_4))
 {
  FUNC_1("role \"%s\" does not exist", *VAR_1);
  return 0;
 }

 VAR_5 = (Form_pg_authid) FUNC_0(VAR_4);
 VAR_6 = VAR_5->oid;
 VAR_7 = VAR_5->rolsuper;

 FUNC_5(VAR_4);


 VAR_8 = (role_auth_extra *) FUNC_7(sizeof(role_auth_extra));
 if (!VAR_8)
  return 0;
 VAR_8->roleid = VAR_6;
 VAR_8->is_superuser = VAR_7;
 *VAR_2 = (void *) VAR_8;

 return 1;
}
