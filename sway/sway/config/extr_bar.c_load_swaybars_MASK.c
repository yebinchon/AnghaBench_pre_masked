
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bar_config {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bars; } ;
struct TYPE_3__ {int length; struct bar_config** items; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct bar_config*) ;

void FUNC_1(void) {
 for (int VAR_1 = 0; VAR_1 < VAR_0->bars->length; ++VAR_1) {
  struct bar_config *VAR_2 = VAR_0->bars->items[VAR_1];
  FUNC_0(VAR_2);
 }
}
