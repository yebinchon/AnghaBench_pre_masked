
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int children; } ;
typedef TYPE_1__ obs_hotkey_name_map_node_t ;
struct TYPE_13__ {scalar_t__ prefix_len; TYPE_1__* node; } ;
typedef TYPE_2__ obs_hotkey_name_map_edge_t ;


 int FUNC_0 (TYPE_1__*,char const*,size_t,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 char* FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,char const*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,size_t) ;

__attribute__((used)) static void FUNC_7(obs_hotkey_name_map_edge_t *VAR_0, const char *VAR_1,
   size_t VAR_2, int VAR_3)
{
 const char *VAR_4 = FUNC_3(VAR_0), *VAR_5 = VAR_1;
 size_t VAR_6 = 0;
 while (*VAR_4 == *VAR_5) {
  VAR_6 += 1;
  VAR_4 += 1;
  VAR_5 += 1;
 }

 obs_hotkey_name_map_node_t *VAR_7 = FUNC_4();
 obs_hotkey_name_map_edge_t *VAR_8 =
  FUNC_2(VAR_7->children);

 FUNC_1(VAR_8, VAR_0->node);
 FUNC_5(VAR_8, VAR_4, VAR_0->prefix_len - VAR_6);

 FUNC_0(VAR_7, VAR_5, VAR_2 - VAR_6, VAR_3);

 FUNC_1(VAR_0, VAR_7);
 FUNC_6(VAR_0, VAR_6);
}
