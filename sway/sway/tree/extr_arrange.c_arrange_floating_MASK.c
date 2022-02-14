
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {int dummy; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (struct sway_container*) ;

__attribute__((used)) static void FUNC_1(list_t *VAR_0) {
 for (int VAR_1 = 0; VAR_1 < VAR_0->length; ++VAR_1) {
  struct sway_container *VAR_2 = VAR_0->items[VAR_1];
  FUNC_0(VAR_2);
 }
}
