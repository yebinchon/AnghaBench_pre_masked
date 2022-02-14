
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int typid; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_8__ {TYPE_2__ datetime; TYPE_1__ binary; } ;
struct TYPE_9__ {int type; TYPE_3__ val; } ;
typedef TYPE_4__ JsonbValue ;



 int VAR_0 ;
 char const* FUNC_0 (int ) ;




 int FUNC_1 (int ,char*,int) ;
const char *
FUNC_2(JsonbValue *VAR_1)
{
 switch (VAR_1->type)
 {
  case 134:
   return FUNC_0(VAR_1->val.binary.data);
  case 129:
   return "object";
  case 135:
   return "array";
  case 130:
   return "number";
  case 128:
   return "string";
  case 133:
   return "boolean";
  case 131:
   return "null";
  case 132:
   switch (VAR_1->val.datetime.typid)
   {
    case 140:
     return "date";
    case 139:
     return "time without time zone";
    case 136:
     return "time with time zone";
    case 138:
     return "timestamp without time zone";
    case 137:
     return "timestamp with time zone";
    default:
     FUNC_1(VAR_0, "unrecognized jsonb value datetime type: %d",
       VAR_1->val.datetime.typid);
   }
   return "unknown";
  default:
   FUNC_1(VAR_0, "unrecognized jsonb value type: %d", VAR_1->type);
   return "unknown";
 }
}
