
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ acl_ok; } ;
typedef TYPE_1__ VariableStatData ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

bool
FUNC_5(VariableStatData *VAR_1, Oid VAR_2)
{
 if (VAR_1->acl_ok)
  return 1;

 if (!FUNC_0(VAR_2))
  return 0;

 if (FUNC_3(VAR_2))
  return 1;

 FUNC_1(VAR_0,
   (FUNC_2("not using statistics because function \"%s\" is not leak-proof",
        FUNC_4(VAR_2))));
 return 0;
}
