
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ roletype; int rolename; } ;
typedef TYPE_1__ RoleSpec ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,int ) ;

void
FUNC_5(const RoleSpec *VAR_3, const char *VAR_4)
{
 if (!VAR_3)
  return;

 if (VAR_3->roletype != VAR_2)
  return;

 if (FUNC_0(VAR_3->rolename))
 {
  if (VAR_4)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_4("role name \"%s\" is reserved",
       VAR_3->rolename),
      FUNC_3("%s", VAR_4)));
  else
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_4("role name \"%s\" is reserved",
       VAR_3->rolename)));
 }
}
