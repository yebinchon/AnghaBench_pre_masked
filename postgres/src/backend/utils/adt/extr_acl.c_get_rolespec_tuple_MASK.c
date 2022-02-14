
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int roletype; char* rolename; } ;
typedef TYPE_1__ RoleSpec ;
typedef int * HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;




 int * FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*) ;

HeapTuple
FUNC_10(const RoleSpec *VAR_4)
{
 HeapTuple VAR_5;

 switch (VAR_4->roletype)
 {
  case 131:
   FUNC_0(VAR_4->rolename);
   VAR_5 = FUNC_5(VAR_0, FUNC_1(VAR_4->rolename));
   if (!FUNC_4(VAR_5))
    FUNC_7(VAR_3,
      (FUNC_8(VAR_2),
       FUNC_9("role \"%s\" does not exist", VAR_4->rolename)));
   break;

  case 130:
   VAR_5 = FUNC_5(VAR_1, FUNC_3());
   if (!FUNC_4(VAR_5))
    FUNC_6(VAR_3, "cache lookup failed for role %u", FUNC_3());
   break;

  case 128:
   VAR_5 = FUNC_5(VAR_1, FUNC_2());
   if (!FUNC_4(VAR_5))
    FUNC_6(VAR_3, "cache lookup failed for role %u", FUNC_2());
   break;

  case 129:
   FUNC_7(VAR_3,
     (FUNC_8(VAR_2),
      FUNC_9("role \"%s\" does not exist", "public")));
   VAR_5 = ((void*)0);
   break;

  default:
   FUNC_6(VAR_3, "unexpected role type %d", VAR_4->roletype);
 }

 return VAR_5;
}
