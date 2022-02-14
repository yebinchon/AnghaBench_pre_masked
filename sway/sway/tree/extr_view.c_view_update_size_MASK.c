
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_view {struct sway_container* container; } ;
struct TYPE_2__ {int content_width; int content_height; } ;
struct sway_container {int content_width; int content_height; int surface_width; int surface_height; void* content_y; void* surface_y; void* content_x; void* surface_x; TYPE_1__ current; } ;


 scalar_t__ FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 void* FUNC_2 (void*,void*) ;

void FUNC_3(struct sway_view *VAR_0, int VAR_1, int VAR_2) {
 struct sway_container *VAR_3 = VAR_0->container;

 if (FUNC_0(VAR_3)) {
  VAR_3->content_width = VAR_1;
  VAR_3->content_height = VAR_2;
  VAR_3->current.content_width = VAR_1;
  VAR_3->current.content_height = VAR_2;
  FUNC_1(VAR_3);
 } else {
  VAR_3->surface_x = VAR_3->content_x + (VAR_3->content_width - VAR_1) / 2;
  VAR_3->surface_y = VAR_3->content_y + (VAR_3->content_height - VAR_2) / 2;
  VAR_3->surface_x = FUNC_2(VAR_3->surface_x, VAR_3->content_x);
  VAR_3->surface_y = FUNC_2(VAR_3->surface_y, VAR_3->content_y);
 }
 VAR_3->surface_width = VAR_1;
 VAR_3->surface_height = VAR_2;
}
