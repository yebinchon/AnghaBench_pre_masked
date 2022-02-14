
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {double x; double y; double content_x; double content_y; int node; TYPE_1__* children; } ;
struct TYPE_2__ {int length; struct sway_container** items; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct sway_container *VAR_0,
  double VAR_1, double VAR_2) {
 VAR_0->x += VAR_1;
 VAR_0->y += VAR_2;
 VAR_0->content_x += VAR_1;
 VAR_0->content_y += VAR_2;

 if (VAR_0->children) {
  for (int VAR_3 = 0; VAR_3 < VAR_0->children->length; ++VAR_3) {
   struct sway_container *VAR_4 = VAR_0->children->items[VAR_3];
   FUNC_1(VAR_4, VAR_1, VAR_2);
  }
 }

 FUNC_0(&VAR_0->node);
}
