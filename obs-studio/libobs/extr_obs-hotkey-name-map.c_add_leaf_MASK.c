
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int children; } ;
typedef TYPE_1__ obs_hotkey_name_map_node_t ;
struct TYPE_9__ {TYPE_4__* node; } ;
typedef TYPE_2__ obs_hotkey_name_map_edge_t ;
struct TYPE_10__ {int val; } ;


 TYPE_2__* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,char const*,size_t) ;

__attribute__((used)) static obs_hotkey_name_map_edge_t *FUNC_3(obs_hotkey_name_map_node_t *VAR_0,
         const char *VAR_1, size_t VAR_2, int VAR_3)
{
 obs_hotkey_name_map_edge_t *VAR_4 = FUNC_0(VAR_0->children);

 FUNC_2(VAR_4, VAR_1, VAR_2);

 VAR_4->node = FUNC_1();
 VAR_4->node->val = VAR_3;

 return VAR_4;
}
