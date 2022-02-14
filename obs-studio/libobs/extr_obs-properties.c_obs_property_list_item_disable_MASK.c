
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; TYPE_1__* array; } ;
struct list_data {TYPE_2__ items; } ;
typedef int obs_property_t ;
struct TYPE_3__ {int disabled; } ;


 struct list_data* FUNC_0 (int *) ;

void FUNC_1(obs_property_t *VAR_0, size_t VAR_1,
        bool VAR_2)
{
 struct list_data *VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3 || VAR_1 >= VAR_3->items.num)
  return;
 VAR_3->items.array[VAR_1].disabled = VAR_2;
}
