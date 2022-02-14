
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; TYPE_1__* array; } ;
struct list_data {TYPE_2__ items; } ;
typedef int obs_property_t ;
struct TYPE_3__ {double d; } ;


 int VAR_0 ;
 struct list_data* FUNC_0 (int *,int ) ;

double FUNC_1(obs_property_t *VAR_1, size_t VAR_2)
{
 struct list_data *VAR_3 = FUNC_0(VAR_1, VAR_0);
 return (VAR_3 && VAR_2 < VAR_3->items.num) ? VAR_3->items.array[VAR_2].d : 0.0;
}
