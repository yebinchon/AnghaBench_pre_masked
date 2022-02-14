
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ECPGtype* element; struct ECPGstruct_member* members; } ;
struct ECPGtype {int type; TYPE_1__ u; } ;
struct ECPGstruct_member {struct ECPGtype* type; struct ECPGstruct_member* next; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;

void
FUNC_1(struct ECPGtype *VAR_2)
{

 switch (VAR_2->type)
 {
   struct ECPGstruct_member *VAR_3;

  case 134:
  case 137:
  case 136:
  case 135:
  case 128:
  case 131:
  case 130:
  case 129:
   break;

  case 133:
  case 132:
   for (VAR_3 = VAR_2->u.members; VAR_3; VAR_3 = VAR_3->next)
    FUNC_1(VAR_3->type);
   break;

  case 138:
   FUNC_1(VAR_2->u.element);
   break;
  default:
   FUNC_0(VAR_1, VAR_0, "indicator variable must have an integer type");
   break;
 }
}
