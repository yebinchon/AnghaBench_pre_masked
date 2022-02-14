
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t num; TYPE_4__* array; } ;
struct TYPE_9__ {int val; TYPE_1__ children; int is_leaf; } ;
struct TYPE_8__ {TYPE_3__ root; } ;
typedef TYPE_2__ obs_hotkey_name_map_t ;
typedef TYPE_3__ obs_hotkey_name_map_node_t ;
struct TYPE_10__ {size_t prefix_len; TYPE_3__* node; } ;
typedef TYPE_4__ obs_hotkey_name_map_edge_t ;






 int FUNC_0 (TYPE_4__*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static bool FUNC_2(obs_hotkey_name_map_t *VAR_0,
           const char *VAR_1, int *VAR_2)
{
 if (!VAR_0 || !VAR_1)
  return 0;

 size_t VAR_3 = FUNC_1(VAR_1);
 obs_hotkey_name_map_node_t *VAR_4 = &VAR_0->root;

 size_t VAR_5 = 0;
 for (; VAR_5 < VAR_4->children.num;) {
  obs_hotkey_name_map_edge_t *VAR_6 = &VAR_4->children.array[VAR_5];

  switch (FUNC_0(VAR_6, VAR_1, VAR_3)) {
  case 129:
   VAR_5++;
   continue;

  case 131:
   return 0;

  case 128:
   VAR_1 += VAR_6->prefix_len;
   VAR_3 -= VAR_6->prefix_len;
   VAR_4 = VAR_6->node;
   VAR_5 = 0;
   continue;

  case 130:
   VAR_4 = VAR_6->node;
   if (!VAR_4->is_leaf) {
    for (size_t VAR_7 = 0; VAR_7 < VAR_4->children.num; VAR_7++) {
     if (VAR_4->children.array[VAR_7].prefix_len)
      continue;

     if (VAR_2)
      *VAR_2 = VAR_4->children.array[VAR_7]
            .node->val;
     return 1;
    }
    return 0;
   }

   if (VAR_2)
    *VAR_2 = VAR_4->val;
   return 1;
  }
 }

 return 0;
}
