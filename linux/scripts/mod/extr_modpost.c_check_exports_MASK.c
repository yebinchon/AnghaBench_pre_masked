
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int name; int export; int namespace; int weak; struct module* module; struct symbol* next; } ;
struct module {char* name; int gpl_compatible; int required_namespaces; struct symbol* unres; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int ,char const*,int ) ;
 struct symbol* FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (struct module*,int ) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char const*,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct module *VAR_3)
{
 struct symbol *VAR_4, *VAR_5;
 int VAR_6 = 0;

 for (VAR_4 = VAR_3->unres; VAR_4; VAR_4 = VAR_4->next) {
  const char *VAR_7;
  VAR_5 = FUNC_3(VAR_4->name);
  if (!VAR_5 || VAR_5->module == VAR_3) {
   if (VAR_0 && !VAR_4->weak) {
    if (VAR_1) {
     FUNC_7("\"%s\" [%s.ko] undefined!\n",
          VAR_4->name, VAR_3->name);
    } else {
     FUNC_4("\"%s\" [%s.ko] undefined!\n",
            VAR_4->name, VAR_3->name);
     VAR_6 = 1;
    }
   }
   continue;
  }
  VAR_7 = FUNC_6(VAR_3->name, '/');
  if (VAR_7)
   VAR_7++;
  else
   VAR_7 = VAR_3->name;

  if (VAR_5->namespace) {
   FUNC_0(&VAR_3->required_namespaces,
          VAR_5->namespace);

   if (!VAR_2 &&
       !FUNC_5(VAR_3, VAR_5->namespace)) {
    FUNC_7("module %s uses symbol %s from namespace %s, but does not import it.\n",
         VAR_7, VAR_5->name, VAR_5->namespace);
   }
  }

  if (!VAR_3->gpl_compatible)
   FUNC_1(VAR_5->export, VAR_7, VAR_5->name);
  FUNC_2(VAR_5->export, VAR_7, VAR_5->name);
 }

 return VAR_6;
}
