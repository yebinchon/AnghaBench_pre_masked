
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_map_table {int map; int spk_mask; } ;


 struct channel_map_table* VAR_0 ;

int FUNC_0(int VAR_1)
{
 struct channel_map_table *VAR_2 = VAR_0;

 for (; VAR_2->map; VAR_2++) {
  if (VAR_2->spk_mask == VAR_1)
   return VAR_2->map;
 }
 return 0;
}
