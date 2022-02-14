
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_module {struct obs_module* data_path; struct obs_module* bin_path; struct obs_module* mod_name; int (* unload ) () ;scalar_t__ loaded; int (* free_locale ) () ;scalar_t__ module; } ;


 int FUNC_0 (struct obs_module*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct obs_module *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->module) {
  if (VAR_0->free_locale)
   VAR_0->free_locale();

  if (VAR_0->loaded && VAR_0->unload)
   VAR_0->unload();




 }

 FUNC_0(VAR_0->mod_name);
 FUNC_0(VAR_0->bin_path);
 FUNC_0(VAR_0->data_path);
 FUNC_0(VAR_0);
}
