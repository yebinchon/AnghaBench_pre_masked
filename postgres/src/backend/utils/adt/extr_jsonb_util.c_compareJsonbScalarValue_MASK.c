
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int val; } ;
struct TYPE_7__ {int boolean; int numeric; TYPE_1__ string; } ;
struct TYPE_8__ {int type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;




 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(JsonbValue *VAR_3, JsonbValue *VAR_4)
{
 if (VAR_3->type == VAR_4->type)
 {
  switch (VAR_3->type)
  {
   case 130:
    return 0;
   case 128:
    return FUNC_4(VAR_3->val.string.val,
          VAR_3->val.string.len,
          VAR_4->val.string.val,
          VAR_4->val.string.len,
          VAR_0);
   case 129:
    return FUNC_0(FUNC_1(VAR_2,
               FUNC_2(VAR_3->val.numeric),
               FUNC_2(VAR_4->val.numeric)));
   case 131:
    if (VAR_3->val.boolean == VAR_4->val.boolean)
     return 0;
    else if (VAR_3->val.boolean > VAR_4->val.boolean)
     return 1;
    else
     return -1;
   default:
    FUNC_3(VAR_1, "invalid jsonb scalar type");
  }
 }
 FUNC_3(VAR_1, "jsonb scalar type mismatch");
 return -1;
}
