
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crush_choose_arg_map {int size; int weight_set_size; struct crush_choose_arg_map* args; struct crush_choose_arg_map* ids; struct crush_choose_arg_map* weight_set; struct crush_choose_arg_map* weights; int node; } ;
struct crush_choose_arg {int size; int weight_set_size; struct crush_choose_arg* args; struct crush_choose_arg* ids; struct crush_choose_arg* weight_set; struct crush_choose_arg* weights; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct crush_choose_arg_map*) ;

__attribute__((used)) static void FUNC_3(struct crush_choose_arg_map *VAR_0)
{
 if (VAR_0) {
  int VAR_1, VAR_2;

  FUNC_1(!FUNC_0(&VAR_0->node));

  for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++) {
   struct crush_choose_arg *VAR_3 = &VAR_0->args[VAR_1];

   for (VAR_2 = 0; VAR_2 < VAR_3->weight_set_size; VAR_2++)
    FUNC_2(VAR_3->weight_set[VAR_2].weights);
   FUNC_2(VAR_3->weight_set);
   FUNC_2(VAR_3->ids);
  }
  FUNC_2(VAR_0->args);
  FUNC_2(VAR_0);
 }
}
