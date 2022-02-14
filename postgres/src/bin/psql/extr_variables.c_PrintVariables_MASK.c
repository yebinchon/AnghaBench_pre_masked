
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _variable {char* value; char* name; struct _variable* next; } ;
typedef TYPE_1__* VariableSpace ;
struct TYPE_3__ {struct _variable* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

void
FUNC_1(VariableSpace VAR_1)
{
 struct _variable *VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = VAR_1->next; VAR_2; VAR_2 = VAR_2->next)
 {
  if (VAR_2->value)
   FUNC_0("%s = '%s'\n", VAR_2->name, VAR_2->value);
  if (VAR_0)
   break;
 }
}
