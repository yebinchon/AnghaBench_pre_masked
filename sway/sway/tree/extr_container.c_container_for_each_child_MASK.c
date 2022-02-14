
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {TYPE_1__* children; } ;
struct TYPE_2__ {int length; struct sway_container** items; } ;



void FUNC_0(struct sway_container *VAR_0,
  void (*VAR_1)(struct sway_container *VAR_2, void *VAR_3),
  void *VAR_4) {
 if (VAR_0->children) {
  for (int VAR_5 = 0; VAR_5 < VAR_0->children->length; ++VAR_5) {
   struct sway_container *VAR_6 = VAR_0->children->items[VAR_5];
   VAR_1(VAR_6, VAR_4);
   FUNC_0(VAR_6, VAR_1, VAR_4);
  }
 }
}
