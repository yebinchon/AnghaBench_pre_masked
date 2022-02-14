
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {size_t num; TYPE_2__* array; } ;
struct TYPE_13__ {int val; TYPE_8__ children; scalar_t__ is_leaf; } ;
typedef TYPE_1__ obs_hotkey_name_map_node_t ;
struct TYPE_14__ {int prefix_len; TYPE_1__* node; } ;
typedef TYPE_2__ obs_hotkey_name_map_edge_t ;






 int FUNC_0 (TYPE_1__*,char const*,size_t,int) ;
 int FUNC_1 (TYPE_2__*,char const*,size_t) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_8__) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,char const*,size_t,int) ;

__attribute__((used)) static void FUNC_6(obs_hotkey_name_map_edge_t *VAR_0,
     obs_hotkey_name_map_node_t *VAR_1, const char *VAR_2, size_t VAR_3,
     int VAR_4)
{
 if (VAR_1->is_leaf && VAR_3 > 0) {
  obs_hotkey_name_map_node_t *VAR_5 = FUNC_4();
  FUNC_2(VAR_0, VAR_5);

  obs_hotkey_name_map_edge_t *VAR_6 =
   FUNC_3(VAR_5->children);
  FUNC_2(VAR_6, VAR_1);
  FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
  return;
 }

 if (VAR_1->is_leaf && VAR_3 == 0) {
  VAR_1->val = VAR_4;
  return;
 }

 for (size_t VAR_7 = 0; VAR_7 < VAR_1->children.num; VAR_7++) {
  obs_hotkey_name_map_edge_t *VAR_8 = &VAR_1->children.array[VAR_7];

  switch (FUNC_1(VAR_8, VAR_2, VAR_3)) {
  case 129:
   continue;

  case 130:
  case 128:
   FUNC_6(VAR_8, VAR_8->node, VAR_2 + VAR_8->prefix_len,
          VAR_3 - VAR_8->prefix_len, VAR_4);
   return;

  case 131:
   FUNC_5(VAR_8, VAR_2, VAR_3, VAR_4);
   return;
  }
 }

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
