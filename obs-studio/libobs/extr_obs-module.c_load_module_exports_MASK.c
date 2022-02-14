
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_module {int module; void* author; void* description; void* name; void* free_locale; void* set_locale; void* post_load; void* unload; void* ver; void* set_pointer; void* load; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct obs_module *VAR_1, const char *VAR_2)
{
 VAR_1->load = FUNC_0(VAR_1->module, "obs_module_load");
 if (!VAR_1->load)
  return FUNC_1("obs_module_load", VAR_2);

 VAR_1->set_pointer = FUNC_0(VAR_1->module, "obs_module_set_pointer");
 if (!VAR_1->set_pointer)
  return FUNC_1("obs_module_set_pointer", VAR_2);

 VAR_1->ver = FUNC_0(VAR_1->module, "obs_module_ver");
 if (!VAR_1->ver)
  return FUNC_1("obs_module_ver", VAR_2);


 VAR_1->unload = FUNC_0(VAR_1->module, "obs_module_unload");
 VAR_1->post_load = FUNC_0(VAR_1->module, "obs_module_post_load");
 VAR_1->set_locale = FUNC_0(VAR_1->module, "obs_module_set_locale");
 VAR_1->free_locale = FUNC_0(VAR_1->module, "obs_module_free_locale");
 VAR_1->name = FUNC_0(VAR_1->module, "obs_module_name");
 VAR_1->description = FUNC_0(VAR_1->module, "obs_module_description");
 VAR_1->author = FUNC_0(VAR_1->module, "obs_module_author");
 return VAR_0;
}
