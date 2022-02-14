
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** items; } ;
typedef TYPE_1__ list_t ;



__attribute__((used)) static void FUNC_0(list_t *VAR_0, int VAR_1, int VAR_2) {
 void *VAR_3 = VAR_0->items[VAR_2];

 while (VAR_2 > VAR_1) {
  VAR_0->items[VAR_2] = VAR_0->items[VAR_2 - 1];
  VAR_2--;
 }

 VAR_0->items[VAR_1] = VAR_3;
}
