
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int num_loaded; int unloaded_info; int * loaded_info; } ;
struct gcov_info {int dummy; } ;


 int FUNC_0 (struct gcov_info*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct gcov_node*,struct gcov_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct gcov_node*) ;
 int FUNC_5 (struct gcov_node*,struct gcov_info*) ;

__attribute__((used)) static void FUNC_6(struct gcov_node *VAR_1, struct gcov_info *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_3("could not remove '%s' (not found)\n",
   FUNC_0(VAR_2));
  return;
 }
 if (VAR_0)
  FUNC_5(VAR_1, VAR_2);

 VAR_1->loaded_info[VAR_3] = VAR_1->loaded_info[VAR_1->num_loaded - 1];
 VAR_1->num_loaded--;
 if (VAR_1->num_loaded > 0)
  return;

 FUNC_2(VAR_1->loaded_info);
 VAR_1->loaded_info = ((void*)0);
 VAR_1->num_loaded = 0;
 if (!VAR_1->unloaded_info)
  FUNC_4(VAR_1);
}
