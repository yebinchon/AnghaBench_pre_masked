
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {int typid; int value; } ;
struct TYPE_7__ {int len; int val; } ;
struct TYPE_9__ {TYPE_2__ datetime; TYPE_1__ string; int numeric; int boolean; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_3__ val; } ;
typedef TYPE_4__ JsonbValue ;
typedef int JsonPathBool ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int,int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static JsonPathBool
FUNC_5(int32 VAR_4, JsonbValue *VAR_5, JsonbValue *VAR_6, bool VAR_7)
{
 int VAR_8;
 bool VAR_9;

 if (VAR_5->type != VAR_6->type)
 {
  if (VAR_5->type == 137 || VAR_6->type == 137)





   return VAR_4 == 128 ? VAR_2 : VAR_1;


  return VAR_3;
 }

 switch (VAR_5->type)
 {
  case 137:
   VAR_8 = 0;
   break;
  case 139:
   VAR_8 = VAR_5->val.boolean == VAR_6->val.boolean ? 0 :
    VAR_5->val.boolean ? 1 : -1;
   break;
  case 136:
   VAR_8 = FUNC_1(VAR_5->val.numeric, VAR_6->val.numeric);
   break;
  case 134:
   if (VAR_4 == 133)
    return VAR_5->val.string.len != VAR_6->val.string.len ||
     FUNC_4(VAR_5->val.string.val,
         VAR_6->val.string.val,
         VAR_5->val.string.len) ? VAR_1 : VAR_2;

   VAR_8 = FUNC_2(VAR_5->val.string.val, VAR_5->val.string.len,
         VAR_6->val.string.val, VAR_6->val.string.len);
   break;
  case 138:
   {
    bool VAR_10;

    VAR_8 = FUNC_0(VAR_5->val.datetime.value,
           VAR_5->val.datetime.typid,
           VAR_6->val.datetime.value,
           VAR_6->val.datetime.typid,
           VAR_7,
           &VAR_10);

    if (VAR_10)
     return VAR_3;
   }
   break;

  case 140:
  case 141:
  case 135:
   return VAR_3;

  default:
   FUNC_3(VAR_0, "invalid jsonb value type %d", VAR_5->type);
 }

 switch (VAR_4)
 {
  case 133:
   VAR_9 = (VAR_8 == 0);
   break;
  case 128:
   VAR_9 = (VAR_8 != 0);
   break;
  case 130:
   VAR_9 = (VAR_8 < 0);
   break;
  case 132:
   VAR_9 = (VAR_8 > 0);
   break;
  case 129:
   VAR_9 = (VAR_8 <= 0);
   break;
  case 131:
   VAR_9 = (VAR_8 >= 0);
   break;
  default:
   FUNC_3(VAR_0, "unrecognized jsonpath operation: %d", VAR_4);
   return VAR_3;
 }

 return VAR_9 ? VAR_2 : VAR_1;
}
