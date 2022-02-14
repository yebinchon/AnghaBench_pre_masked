
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dstr {int array; int member_0; } ;
struct TYPE_4__ {int file; } ;
typedef TYPE_1__ obs_module_t ;
typedef int lookup_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct dstr*,char const*) ;
 int FUNC_4 (struct dstr*,char*) ;
 int FUNC_5 (struct dstr*) ;
 char* FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *,char*) ;
 int * FUNC_8 (char*) ;

lookup_t *FUNC_9(obs_module_t *VAR_1,
     const char *VAR_2, const char *VAR_3)
{
 struct dstr VAR_4 = {0};
 lookup_t *VAR_5 = ((void*)0);

 if (!VAR_1 || !VAR_2 || !VAR_3) {
  FUNC_2(VAR_0, "obs_module_load_locale: Invalid parameters");
  return ((void*)0);
 }

 FUNC_4(&VAR_4, "locale/");
 FUNC_3(&VAR_4, VAR_2);
 FUNC_3(&VAR_4, ".ini");

 char *VAR_6 = FUNC_6(VAR_1, VAR_4.array);
 if (VAR_6)
  VAR_5 = FUNC_8(VAR_6);

 FUNC_1(VAR_6);

 if (!VAR_5) {
  FUNC_2(VAR_0, "Failed to load '%s' text for module: '%s'",
       VAR_2, VAR_1->file);
  goto cleanup;
 }

 if (FUNC_0(VAR_3, VAR_2) == 0)
  goto cleanup;

 FUNC_4(&VAR_4, "/locale/");
 FUNC_3(&VAR_4, VAR_3);
 FUNC_3(&VAR_4, ".ini");

 VAR_6 = FUNC_6(VAR_1, VAR_4.array);

 if (!FUNC_7(VAR_5, VAR_6))
  FUNC_2(VAR_0, "Failed to load '%s' text for module: '%s'",
       VAR_3, VAR_1->file);

 FUNC_1(VAR_6);
cleanup:
 FUNC_5(&VAR_4);
 return VAR_5;
}
