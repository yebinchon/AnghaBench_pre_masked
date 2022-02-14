
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ prefix_len; int node; } ;
typedef TYPE_1__ obs_hotkey_name_map_edge_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(obs_hotkey_name_map_edge_t *VAR_1)
{
 FUNC_1(VAR_1->node, 1);

 if (VAR_1->prefix_len < VAR_0)
  return;

 FUNC_0(FUNC_2(VAR_1));
}
