
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int roletype; int rolename; } ;
typedef TYPE_1__ RoleSpec ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;




 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int) ;

Oid
FUNC_8(const RoleSpec *VAR_3, bool VAR_4)
{
 Oid VAR_5;

 switch (VAR_3->roletype)
 {
  case 131:
   FUNC_0(VAR_3->rolename);
   VAR_5 = FUNC_7(VAR_3->rolename, VAR_4);
   break;

  case 130:
   VAR_5 = FUNC_2();
   break;

  case 128:
   VAR_5 = FUNC_1();
   break;

  case 129:
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("role \"%s\" does not exist", "public")));
   VAR_5 = VAR_2;
   break;

  default:
   FUNC_3(VAR_1, "unexpected role type %d", VAR_3->roletype);
 }

 return VAR_5;
}
