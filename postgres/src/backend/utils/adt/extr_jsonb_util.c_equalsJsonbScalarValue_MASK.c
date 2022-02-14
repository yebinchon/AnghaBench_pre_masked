
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int boolean; int numeric; } ;
struct TYPE_8__ {int type; TYPE_1__ val; } ;
typedef TYPE_2__ JsonbValue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;




 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_5(JsonbValue *VAR_2, JsonbValue *VAR_3)
{
 if (VAR_2->type == VAR_3->type)
 {
  switch (VAR_2->type)
  {
   case 130:
    return 1;
   case 128:
    return FUNC_4(VAR_2, VAR_3) == 0;
   case 129:
    return FUNC_0(FUNC_1(VAR_1,
              FUNC_2(VAR_2->val.numeric),
              FUNC_2(VAR_3->val.numeric)));
   case 131:
    return VAR_2->val.boolean == VAR_3->val.boolean;

   default:
    FUNC_3(VAR_0, "invalid jsonb scalar type");
  }
 }
 FUNC_3(VAR_0, "jsonb scalar type mismatch");
 return 0;
}
