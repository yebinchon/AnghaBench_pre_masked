
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {size_t prefix_len; } ;
typedef TYPE_1__ obs_hotkey_name_map_edge_t ;
typedef enum obs_hotkey_name_map_edge_compare_result { ____Placeholder_obs_hotkey_name_map_edge_compare_result } obs_hotkey_name_map_edge_compare_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static enum obs_hotkey_name_map_edge_compare_result
FUNC_1(obs_hotkey_name_map_edge_t *VAR_4, const char *VAR_5, size_t VAR_6)
{
 uint8_t VAR_7 = VAR_4->prefix_len;
 const char *VAR_8 = FUNC_0(VAR_4);
 size_t VAR_9 = 0;

 for (; VAR_9 < VAR_6 && VAR_9 < VAR_7; VAR_9++)
  if (VAR_8[VAR_9] != VAR_5[VAR_9])
   break;

 if (VAR_9 != 0 && VAR_7 == VAR_9)
  return VAR_6 == VAR_9 ? VAR_1 : VAR_3;
 if (VAR_9 != 0)
  return VAR_7 == VAR_9 ? VAR_3 : VAR_0;
 return VAR_2;
}
