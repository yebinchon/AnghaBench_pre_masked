
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_texture {int dummy; } ;
struct sway_view {int dummy; } ;
struct sway_output {int dummy; } ;
struct sway_container_state {scalar_t__ focused; } ;
struct sway_container {struct sway_container_state current; struct sway_view* view; struct wlr_texture* marks_unfocused; struct wlr_texture* title_unfocused; struct wlr_texture* marks_focused_inactive; struct wlr_texture* title_focused_inactive; struct wlr_texture* marks_focused; struct wlr_texture* title_focused; struct wlr_texture* marks_urgent; struct wlr_texture* title_urgent; } ;
struct TYPE_7__ {size_t y; int width; int x; } ;
struct parent_data {scalar_t__ focused; TYPE_3__ box; struct sway_container* active_child; TYPE_1__* children; } ;
struct border_colors {int dummy; } ;
typedef int pixman_region32_t ;
struct TYPE_6__ {struct border_colors unfocused; struct border_colors focused_inactive; struct border_colors focused; struct border_colors urgent; } ;
struct TYPE_8__ {TYPE_2__ border_colors; } ;
struct TYPE_5__ {int length; struct sway_container** items; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (struct sway_container*) ;
 size_t FUNC_1 () ;
 int FUNC_2 (struct sway_output*,int *,struct sway_container*,int) ;
 int FUNC_3 (struct sway_output*,int *,struct sway_container*,int ,int,int ,struct border_colors*,struct wlr_texture*,struct wlr_texture*) ;
 int FUNC_4 (struct sway_output*,int *,struct sway_container*,struct border_colors*) ;
 int FUNC_5 (struct sway_view*) ;

__attribute__((used)) static void FUNC_6(struct sway_output *VAR_1,
  pixman_region32_t *VAR_2, struct parent_data *VAR_3) {
 if (!VAR_3->children->length) {
  return;
 }
 struct sway_container *VAR_4 = VAR_3->active_child;
 struct border_colors *VAR_5 = &VAR_0->border_colors.unfocused;
 size_t VAR_6 = FUNC_1();


 for (int VAR_7 = 0; VAR_7 < VAR_3->children->length; ++VAR_7) {
  struct sway_container *VAR_8 = VAR_3->children->items[VAR_7];
  struct sway_view *VAR_9 = VAR_8->view;
  struct sway_container_state *VAR_10 = &VAR_8->current;
  struct border_colors *VAR_11;
  struct wlr_texture *VAR_12;
  struct wlr_texture *VAR_13;
  bool VAR_14 = VAR_9 ?
   FUNC_5(VAR_9) : FUNC_0(VAR_8);

  if (VAR_14) {
   VAR_11 = &VAR_0->border_colors.urgent;
   VAR_12 = VAR_8->title_urgent;
   VAR_13 = VAR_8->marks_urgent;
  } else if (VAR_10->focused || VAR_3->focused) {
   VAR_11 = &VAR_0->border_colors.focused;
   VAR_12 = VAR_8->title_focused;
   VAR_13 = VAR_8->marks_focused;
  } else if (VAR_8 == VAR_3->active_child) {
   VAR_11 = &VAR_0->border_colors.focused_inactive;
   VAR_12 = VAR_8->title_focused_inactive;
   VAR_13 = VAR_8->marks_focused_inactive;
  } else {
   VAR_11 = &VAR_0->border_colors.unfocused;
   VAR_12 = VAR_8->title_unfocused;
   VAR_13 = VAR_8->marks_unfocused;
  }

  int VAR_15 = VAR_3->box.y + VAR_6 * VAR_7;
  FUNC_3(VAR_1, VAR_2, VAR_8, VAR_3->box.x, VAR_15,
    VAR_3->box.width, VAR_11, VAR_12, VAR_13);

  if (VAR_8 == VAR_4) {
   VAR_5 = VAR_11;
  }
 }


 if (VAR_4->view) {
  FUNC_4(VAR_1, VAR_2, VAR_4, VAR_5);
 } else {
  FUNC_2(VAR_1, VAR_2, VAR_4,
    VAR_3->focused || VAR_4->current.focused);
 }
}
