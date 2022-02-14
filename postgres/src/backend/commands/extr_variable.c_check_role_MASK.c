
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
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (char*,char*) ;

bool
FUNC_12(char **VAR_4, void **VAR_5, GucSource VAR_6)
{
 HeapTuple VAR_7;
 Oid VAR_8;
 bool VAR_9;
 role_auth_extra *VAR_10;
 Form_pg_authid VAR_11;

 if (FUNC_11(*VAR_4, "none") == 0)
 {

  VAR_8 = VAR_3;
  VAR_9 = 0;
 }
 else
 {
  if (!FUNC_5())
  {





   return 0;
  }


  VAR_7 = FUNC_8(VAR_0, FUNC_6(*VAR_4));
  if (!FUNC_4(VAR_7))
  {
   FUNC_2("role \"%s\" does not exist", *VAR_4);
   return 0;
  }

  VAR_11 = (Form_pg_authid) FUNC_0(VAR_7);
  VAR_8 = VAR_11->oid;
  VAR_9 = VAR_11->rolsuper;

  FUNC_7(VAR_7);






  if (!VAR_2 &&
   !FUNC_9(FUNC_3(), VAR_8))
  {
   FUNC_1(VAR_1);
   FUNC_2("permission denied to set role \"%s\"",
        *VAR_4);
   return 0;
  }
 }


 VAR_10 = (role_auth_extra *) FUNC_10(sizeof(role_auth_extra));
 if (!VAR_10)
  return 0;
 VAR_10->roleid = VAR_8;
 VAR_10->is_superuser = VAR_9;
 *VAR_5 = (void *) VAR_10;

 return 1;
}
