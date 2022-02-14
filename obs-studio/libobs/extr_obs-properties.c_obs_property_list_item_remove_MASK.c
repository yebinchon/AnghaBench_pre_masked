
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; scalar_t__ array; } ;
struct list_data {TYPE_1__ items; } ;
typedef int obs_property_t ;


 int FUNC_0 (TYPE_1__,size_t) ;
 struct list_data* FUNC_1 (int *) ;
 int FUNC_2 (struct list_data*,scalar_t__) ;

void FUNC_3(obs_property_t *VAR_0, size_t VAR_1)
{
 struct list_data *VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 && VAR_1 < VAR_2->items.num) {
  FUNC_2(VAR_2, VAR_2->items.array + VAR_1);
  FUNC_0(VAR_2->items, VAR_1);
 }
}
