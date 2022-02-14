
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int num_loaded; struct gcov_info** loaded_info; struct gcov_info* unloaded_info; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gcov_info*) ;
 int FUNC_1 (struct gcov_info*) ;
 int FUNC_2 (struct gcov_info*,struct gcov_info*) ;
 struct gcov_info** FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct gcov_info**) ;
 int FUNC_5 (struct gcov_info**,struct gcov_info**,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(struct gcov_node *VAR_1, struct gcov_info *VAR_2)
{
 struct gcov_info **VAR_3;
 int VAR_4 = VAR_1->num_loaded;






 VAR_3 = FUNC_3(VAR_4 + 1, sizeof(struct gcov_info *), VAR_0);
 if (!VAR_3) {
  FUNC_6("could not add '%s' (out of memory)\n",
   FUNC_0(VAR_2));
  return;
 }
 FUNC_5(VAR_3, VAR_1->loaded_info,
        VAR_4 * sizeof(struct gcov_info *));
 VAR_3[VAR_4] = VAR_2;

 if (VAR_4 == 0) {




  if (!FUNC_2(VAR_1->unloaded_info, VAR_2)) {
   FUNC_6("discarding saved data for %s "
    "(incompatible version)\n",
    FUNC_0(VAR_2));
   FUNC_1(VAR_1->unloaded_info);
   VAR_1->unloaded_info = ((void*)0);
  }
 } else {




  if (!FUNC_2(VAR_1->loaded_info[0], VAR_2)) {
   FUNC_6("could not add '%s' (incompatible "
    "version)\n", FUNC_0(VAR_2));
   FUNC_4(VAR_3);
   return;
  }
 }

 FUNC_4(VAR_1->loaded_info);
 VAR_1->loaded_info = VAR_3;
 VAR_1->num_loaded = VAR_4 + 1;
}
