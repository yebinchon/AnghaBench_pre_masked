
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {TYPE_1__* marks; } ;
struct TYPE_2__ {int length; char** items; } ;


 scalar_t__ FUNC_0 (char*,char*) ;

bool FUNC_1(struct sway_container *VAR_0, char *VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_0->marks->length; ++VAR_2) {
  char *VAR_3 = VAR_0->marks->items[VAR_2];
  if (FUNC_0(VAR_3, VAR_1) == 0) {
   return 1;
  }
 }
 return 0;
}
