
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {TYPE_1__* module; struct symbol* next; } ;
struct module {struct symbol* unres; } ;
struct buffer {int dummy; } ;
struct TYPE_2__ {int seen; char* name; } ;


 int FUNC_0 (struct buffer*,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void FUNC_3(struct buffer *VAR_0, struct module *VAR_1)
{
 struct symbol *VAR_2;
 int VAR_3 = 1;


 for (VAR_2 = VAR_1->unres; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->module)
   VAR_2->module->seen = FUNC_1(VAR_2->module->name);

 FUNC_0(VAR_0, "\n");
 FUNC_0(VAR_0, "MODULE_INFO(depends, \"");
 for (VAR_2 = VAR_1->unres; VAR_2; VAR_2 = VAR_2->next) {
  const char *VAR_4;
  if (!VAR_2->module)
   continue;

  if (VAR_2->module->seen)
   continue;

  VAR_2->module->seen = 1;
  VAR_4 = FUNC_2(VAR_2->module->name, '/');
  if (VAR_4)
   VAR_4++;
  else
   VAR_4 = VAR_2->module->name;
  FUNC_0(VAR_0, "%s%s", VAR_3 ? "" : ",", VAR_4);
  VAR_3 = 0;
 }
 FUNC_0(VAR_0, "\");\n");
}
