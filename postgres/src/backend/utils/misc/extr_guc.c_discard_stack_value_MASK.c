
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct config_string {int dummy; } ;
struct config_generic {int vartype; } ;
struct TYPE_4__ {int stringval; } ;
struct TYPE_5__ {int extra; TYPE_1__ val; } ;
typedef TYPE_2__ config_var_value ;







 int FUNC_0 (struct config_generic*,int *,int *) ;
 int FUNC_1 (struct config_string*,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct config_generic *VAR_0, config_var_value *VAR_1)
{
 switch (VAR_0->vartype)
 {
  case 132:
  case 130:
  case 129:
  case 131:

   break;
  case 128:
   FUNC_1((struct config_string *) VAR_0,
        &(VAR_1->val.stringval),
        ((void*)0));
   break;
 }
 FUNC_0(VAR_0, &(VAR_1->extra), ((void*)0));
}
