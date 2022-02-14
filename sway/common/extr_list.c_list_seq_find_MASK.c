
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; void** items; } ;
typedef TYPE_1__ list_t ;



int FUNC_0(list_t *VAR_0, int VAR_1(const void *VAR_2, const void *VAR_3), const void *VAR_4) {
 for (int VAR_5 = 0; VAR_5 < VAR_0->length; VAR_5++) {
  void *VAR_6 = VAR_0->items[VAR_5];
  if (VAR_1(VAR_6, VAR_4) == 0) {
   return VAR_5;
  }
 }
 return -1;
}
