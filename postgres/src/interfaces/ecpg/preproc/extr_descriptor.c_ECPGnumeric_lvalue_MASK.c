
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct variable {TYPE_1__* type; } ;
struct TYPE_2__ {int type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct variable* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,char*,char*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_3)
{
 const struct variable *VAR_4 = FUNC_0(VAR_3);

 switch (VAR_4->type->type)
 {
  case 132:
  case 135:
  case 134:
  case 133:
  case 128:
  case 131:
  case 130:
  case 129:
  case 136:
   FUNC_1(VAR_3, VAR_2);
   break;
  default:
   FUNC_2(VAR_1, VAR_0, "variable \"%s\" must have a numeric type", VAR_3);
   break;
 }
}
