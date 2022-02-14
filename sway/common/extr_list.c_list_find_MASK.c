
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; void const** items; } ;
typedef TYPE_1__ list_t ;



int FUNC_0(list_t *VAR_0, const void *VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_0->length; VAR_2++) {
  if (VAR_0->items[VAR_2] == VAR_1) {
   return VAR_2;
  }
 }
 return -1;
}
