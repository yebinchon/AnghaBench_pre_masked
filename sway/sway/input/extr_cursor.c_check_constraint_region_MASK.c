
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_pointer_constraint_v1 {scalar_t__ type; int surface; int region; } ;
struct TYPE_5__ {double x; double y; } ;
struct sway_view {TYPE_1__ geometry; struct sway_container* container; } ;
struct sway_cursor {int confine; TYPE_3__* cursor; struct wlr_pointer_constraint_v1* active_constraint; } ;
struct sway_container {double content_x; double content_y; } ;
typedef int pixman_region32_t ;
struct TYPE_6__ {int x1; int x2; int y1; int y2; } ;
typedef TYPE_2__ pixman_box32_t ;
struct TYPE_7__ {double x; double y; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (double) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 TYPE_2__* FUNC_4 (int *,int*) ;
 struct sway_view* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int *,double,double) ;

__attribute__((used)) static void FUNC_7(struct sway_cursor *VAR_1) {
 struct wlr_pointer_constraint_v1 *VAR_2 = VAR_1->active_constraint;
 pixman_region32_t *VAR_3 = &VAR_2->region;
 struct sway_view *VAR_4 = FUNC_5(VAR_2->surface);
 if (VAR_4) {
  struct sway_container *VAR_5 = VAR_4->container;

  double VAR_6 = VAR_1->cursor->x - VAR_5->content_x + VAR_4->geometry.x;
  double VAR_7 = VAR_1->cursor->y - VAR_5->content_y + VAR_4->geometry.y;

  if (!FUNC_2(VAR_3,
    FUNC_0(VAR_6), FUNC_0(VAR_7), ((void*)0))) {
   int VAR_8;
   pixman_box32_t *VAR_9 = FUNC_4(VAR_3, &VAR_8);
   if (VAR_8 > 0) {
    double VAR_10 = (VAR_9[0].x1 + VAR_9[0].x2) / 2.;
    double VAR_11 = (VAR_9[0].y1 + VAR_9[0].y2) / 2.;

    FUNC_6(VAR_1->cursor, ((void*)0),
     VAR_10 + VAR_5->content_x - VAR_4->geometry.x,
     VAR_11 + VAR_5->content_y - VAR_4->geometry.y);
   }
  }
 }


 if (VAR_2->type == VAR_0) {
  FUNC_3(&VAR_1->confine, VAR_3);
 } else {
  FUNC_1(&VAR_1->confine);
 }
}
