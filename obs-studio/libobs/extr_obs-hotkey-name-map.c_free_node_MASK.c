
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t num; int * array; } ;
struct TYPE_5__ {int is_leaf; TYPE_3__ children; } ;
typedef TYPE_1__ obs_hotkey_name_map_node_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(obs_hotkey_name_map_node_t *VAR_0, bool VAR_1)
{
 if (!VAR_0->is_leaf) {
  for (size_t VAR_2 = 0; VAR_2 < VAR_0->children.num; VAR_2++)
   FUNC_2(&VAR_0->children.array[VAR_2]);

  FUNC_1(VAR_0->children);
 }

 if (VAR_1 && !VAR_0->is_leaf)
  FUNC_0(VAR_0);
}
