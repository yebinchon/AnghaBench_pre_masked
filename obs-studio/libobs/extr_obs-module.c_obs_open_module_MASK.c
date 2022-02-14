
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_module {char const* bin_path; char const* file; int (* set_locale ) (int ) ;int (* set_pointer ) (int *) ;int * next; void* data_path; int mod_name; int module; int member_0; } ;
typedef int obs_module_t ;
typedef int mod ;
struct TYPE_2__ {int locale; int * first_module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int * FUNC_2 (struct obs_module*,int) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct obs_module*,char const*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_6 (char const*) ;
 char const* FUNC_7 (char const*,char) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

int FUNC_10(obs_module_t **VAR_6, const char *VAR_7,
      const char *VAR_8)
{
 struct obs_module VAR_9 = {0};
 int VAR_10;

 if (!VAR_6 || !VAR_7 || !VAR_5)
  return VAR_2;
 FUNC_1(VAR_0, "---------------------------------");

 VAR_9.module = FUNC_6(VAR_7);
 if (!VAR_9.module) {
  FUNC_1(VAR_1, "Module '%s' not loaded", VAR_7);
  return VAR_3;
 }

 VAR_10 = FUNC_5(&VAR_9, VAR_7);
 if (VAR_10 != VAR_4)
  return VAR_10;

 VAR_9.bin_path = FUNC_3(VAR_7);
 VAR_9.file = FUNC_7(VAR_9.bin_path, '/');
 VAR_9.file = (!VAR_9.file) ? VAR_9.bin_path : (VAR_9.file + 1);
 VAR_9.mod_name = FUNC_4(VAR_9.file);
 VAR_9.data_path = FUNC_3(VAR_8);
 VAR_9.next = VAR_5->first_module;

 if (VAR_9.file) {
  FUNC_1(VAR_0, "Loading module: %s", VAR_9.file);
 }

 *VAR_6 = FUNC_2(&VAR_9, sizeof(VAR_9));
 VAR_5->first_module = (*VAR_6);
 VAR_9.set_pointer(*VAR_6);

 if (VAR_9.set_locale)
  VAR_9.set_locale(VAR_5->locale);

 return VAR_4;
}
