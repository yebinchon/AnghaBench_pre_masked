
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {double x; double y; } ;
struct sway_view {int surface; TYPE_2__ geometry; TYPE_1__* container; } ;
struct sway_output {double lx; double ly; } ;
struct render_data {float alpha; int * damage; } ;
typedef int pixman_region32_t ;
struct TYPE_3__ {double surface_x; double surface_y; } ;


 int FUNC_0 (struct sway_output*,int ,double,double,int ,struct render_data*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct sway_view *VAR_1,
  struct sway_output *VAR_2, pixman_region32_t *VAR_3, float VAR_4) {
 struct render_data VAR_5 = {
  .damage = VAR_3,
  .alpha = VAR_4,
 };

 double VAR_6 = VAR_1->container->surface_x -
  VAR_2->lx - VAR_1->geometry.x;
 double VAR_7 = VAR_1->container->surface_y -
  VAR_2->ly - VAR_1->geometry.y;
 FUNC_0(VAR_2, VAR_1->surface, VAR_6, VAR_7,
   VAR_0, &VAR_5);
}
