
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; } ;
struct list_data {TYPE_1__ items; } ;
typedef int obs_property_t ;


 struct list_data* FUNC_0 (int *) ;

size_t FUNC_1(obs_property_t *VAR_0)
{
 struct list_data *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->items.num : 0;
}
