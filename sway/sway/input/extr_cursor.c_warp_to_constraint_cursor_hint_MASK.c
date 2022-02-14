
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double x; double y; } ;
struct TYPE_5__ {int committed; TYPE_1__ cursor_hint; } ;
struct wlr_pointer_constraint_v1 {int surface; TYPE_2__ current; } ;
struct TYPE_6__ {double x; double y; } ;
struct sway_view {TYPE_3__ geometry; struct sway_container* container; } ;
struct sway_cursor {int cursor; struct wlr_pointer_constraint_v1* active_constraint; } ;
struct sway_container {double content_x; double content_y; } ;


 int VAR_0 ;
 struct sway_view* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,double,double) ;

__attribute__((used)) static void FUNC_2(struct sway_cursor *VAR_1) {
 struct wlr_pointer_constraint_v1 *VAR_2 = VAR_1->active_constraint;

 if (VAR_2->current.committed &
   VAR_0) {
  double VAR_3 = VAR_2->current.cursor_hint.x;
  double VAR_4 = VAR_2->current.cursor_hint.y;

  struct sway_view *VAR_5 = FUNC_0(VAR_2->surface);
  struct sway_container *VAR_6 = VAR_5->container;

  double VAR_7 = VAR_3 + VAR_6->content_x - VAR_5->geometry.x;
  double VAR_8 = VAR_4 + VAR_6->content_y - VAR_5->geometry.y;

  FUNC_1(VAR_1->cursor, ((void*)0), VAR_7, VAR_8);
 }
}
