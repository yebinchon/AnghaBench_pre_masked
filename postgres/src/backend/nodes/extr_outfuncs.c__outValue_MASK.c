
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* str; int ival; } ;
struct TYPE_5__ {int type; TYPE_1__ val; } ;
typedef TYPE_2__ Value ;
typedef int StringInfo ;


 int VAR_0 ;





 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(StringInfo VAR_1, const Value *VAR_2)
{
 switch (VAR_2->type)
 {
  case 130:
   FUNC_0(VAR_1, "%d", VAR_2->val.ival);
   break;
  case 131:





   FUNC_2(VAR_1, VAR_2->val.str);
   break;
  case 128:





   FUNC_1(VAR_1, '"');
   if (VAR_2->val.str[0] != '\0')
    FUNC_4(VAR_1, VAR_2->val.str);
   FUNC_1(VAR_1, '"');
   break;
  case 132:

   FUNC_2(VAR_1, VAR_2->val.str);
   break;
  case 129:

   FUNC_2(VAR_1, "NULL");
   break;
  default:
   FUNC_3(VAR_0, "unrecognized node type: %d", (int) VAR_2->type);
   break;
 }
}
