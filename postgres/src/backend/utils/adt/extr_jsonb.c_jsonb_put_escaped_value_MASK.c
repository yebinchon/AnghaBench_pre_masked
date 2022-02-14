
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int val; } ;
struct TYPE_6__ {int boolean; int numeric; TYPE_1__ string; } ;
struct TYPE_7__ {int type; TYPE_2__ val; } ;
typedef int StringInfo ;
typedef TYPE_3__ JsonbValue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;




 int VAR_1 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(StringInfo VAR_2, JsonbValue *VAR_3)
{
 switch (VAR_3->type)
 {
  case 130:
   FUNC_3(VAR_2, "null", 4);
   break;
  case 128:
   FUNC_6(VAR_2, FUNC_7(VAR_3->val.string.val, VAR_3->val.string.len));
   break;
  case 129:
   FUNC_4(VAR_2,
           FUNC_0(FUNC_1(VAR_1,
                    FUNC_2(VAR_3->val.numeric))));
   break;
  case 131:
   if (VAR_3->val.boolean)
    FUNC_3(VAR_2, "true", 4);
   else
    FUNC_3(VAR_2, "false", 5);
   break;
  default:
   FUNC_5(VAR_0, "unknown jsonb scalar type");
 }
}
