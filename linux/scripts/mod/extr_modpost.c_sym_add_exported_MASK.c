
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int export; scalar_t__ kernel; scalar_t__ vmlinux; scalar_t__ preloaded; struct module* module; } ;
struct module {int name; } ;
typedef enum export { ____Placeholder_export } export ;


 struct symbol* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct symbol* FUNC_2 (char const*,struct module*,int) ;
 int FUNC_3 (char*,int ,char const*,int ,char*) ;

__attribute__((used)) static struct symbol *FUNC_4(const char *VAR_0, struct module *VAR_1,
           enum export VAR_2)
{
 struct symbol *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3) {
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 } else {
  if (!VAR_3->preloaded) {
   FUNC_3("%s: '%s' exported twice. Previous export was in %s%s\n",
        VAR_1->name, VAR_0, VAR_3->module->name,
        FUNC_1(VAR_3->module->name) ? "" : ".ko");
  } else {

   VAR_3->module = VAR_1;
  }
 }
 VAR_3->preloaded = 0;
 VAR_3->vmlinux = FUNC_1(VAR_1->name);
 VAR_3->kernel = 0;
 VAR_3->export = VAR_2;
 return VAR_3;
}
