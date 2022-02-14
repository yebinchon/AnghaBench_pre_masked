
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct config_string {int * variable; } ;
struct config_real {int * variable; } ;
struct config_int {int * variable; } ;
struct config_generic {int vartype; int extra; } ;
struct config_enum {int * variable; } ;
struct config_bool {int * variable; } ;
struct TYPE_4__ {int enumval; int stringval; int realval; int intval; int boolval; } ;
struct TYPE_5__ {int extra; TYPE_1__ val; } ;
typedef TYPE_2__ config_var_value ;







 int FUNC_0 (struct config_generic*,int *,int ) ;
 int FUNC_1 (struct config_string*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct config_generic *VAR_0, config_var_value *VAR_1)
{
 switch (VAR_0->vartype)
 {
  case 132:
   VAR_1->val.boolval =
    *((struct config_bool *) VAR_0)->variable;
   break;
  case 130:
   VAR_1->val.intval =
    *((struct config_int *) VAR_0)->variable;
   break;
  case 129:
   VAR_1->val.realval =
    *((struct config_real *) VAR_0)->variable;
   break;
  case 128:
   FUNC_1((struct config_string *) VAR_0,
        &(VAR_1->val.stringval),
        *((struct config_string *) VAR_0)->variable);
   break;
  case 131:
   VAR_1->val.enumval =
    *((struct config_enum *) VAR_0)->variable;
   break;
 }
 FUNC_0(VAR_0, &(VAR_1->extra), VAR_0->extra);
}
