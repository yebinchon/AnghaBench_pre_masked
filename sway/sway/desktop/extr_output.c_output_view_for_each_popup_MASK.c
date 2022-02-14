
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sway_surface_iterator_func_t ;
struct TYPE_3__ {scalar_t__ y; scalar_t__ x; } ;
struct sway_view {TYPE_2__* container; TYPE_1__ geometry; } ;
struct sway_output {scalar_t__ ly; scalar_t__ lx; } ;
struct surface_iterator_data {void* user_data; int rotation; int height; int width; scalar_t__ oy; scalar_t__ ox; struct sway_output* output; int user_iterator; } ;
struct TYPE_4__ {int surface_height; int surface_width; scalar_t__ surface_y; scalar_t__ surface_x; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_view*,int ,struct surface_iterator_data*) ;

void FUNC_1(struct sway_output *VAR_1,
  struct sway_view *VAR_2, sway_surface_iterator_func_t VAR_3,
  void *VAR_4) {
 struct surface_iterator_data VAR_5 = {
  .user_iterator = VAR_3,
  .user_data = VAR_4,
  .output = VAR_1,
  .ox = VAR_2->container->surface_x - VAR_1->lx
   - VAR_2->geometry.x,
  .oy = VAR_2->container->surface_y - VAR_1->ly
   - VAR_2->geometry.y,
  .width = VAR_2->container->surface_width,
  .height = VAR_2->container->surface_height,
  .rotation = 0,
 };

 FUNC_0(VAR_2, VAR_0, &VAR_5);
}
