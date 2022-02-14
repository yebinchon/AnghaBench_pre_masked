
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_texture {int dummy; } ;
struct sway_view {int dummy; } ;
struct sway_output {int dummy; } ;
struct sway_container_state {scalar_t__ border; scalar_t__ focused; int width; int y; int x; } ;
struct sway_container {struct sway_container_state current; struct wlr_texture* marks_unfocused; struct wlr_texture* title_unfocused; struct wlr_texture* marks_focused_inactive; struct wlr_texture* title_focused_inactive; struct wlr_texture* marks_focused; struct wlr_texture* title_focused; struct wlr_texture* marks_urgent; struct wlr_texture* title_urgent; struct sway_view* view; } ;
struct parent_data {scalar_t__ focused; struct sway_container* active_child; TYPE_1__* children; } ;
struct border_colors {int dummy; } ;
typedef int pixman_region32_t ;
struct TYPE_5__ {struct border_colors unfocused; struct border_colors focused_inactive; struct border_colors focused; struct border_colors urgent; } ;
struct TYPE_6__ {TYPE_2__ border_colors; } ;
struct TYPE_4__ {int length; struct sway_container** items; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (struct sway_output*,int *,struct sway_container*,int) ;
 int FUNC_1 (struct sway_output*,int *,struct sway_container*,int ,int ,int ,struct border_colors*,struct wlr_texture*,struct wlr_texture*) ;
 int FUNC_2 (struct sway_output*,int *,struct sway_container*,struct border_colors*) ;
 int FUNC_3 (struct sway_output*,int *,struct sway_container*,struct border_colors*) ;
 scalar_t__ FUNC_4 (struct sway_view*) ;

__attribute__((used)) static void FUNC_5(struct sway_output *VAR_3,
  pixman_region32_t *VAR_4, struct parent_data *VAR_5) {
 for (int VAR_6 = 0; VAR_6 < VAR_5->children->length; ++VAR_6) {
  struct sway_container *VAR_7 = VAR_5->children->items[VAR_6];

  if (VAR_7->view) {
   struct sway_view *VAR_8 = VAR_7->view;
   struct border_colors *VAR_9;
   struct wlr_texture *VAR_10;
   struct wlr_texture *VAR_11;
   struct sway_container_state *VAR_12 = &VAR_7->current;

   if (FUNC_4(VAR_8)) {
    VAR_9 = &VAR_2->border_colors.urgent;
    VAR_10 = VAR_7->title_urgent;
    VAR_11 = VAR_7->marks_urgent;
   } else if (VAR_12->focused || VAR_5->focused) {
    VAR_9 = &VAR_2->border_colors.focused;
    VAR_10 = VAR_7->title_focused;
    VAR_11 = VAR_7->marks_focused;
   } else if (VAR_7 == VAR_5->active_child) {
    VAR_9 = &VAR_2->border_colors.focused_inactive;
    VAR_10 = VAR_7->title_focused_inactive;
    VAR_11 = VAR_7->marks_focused_inactive;
   } else {
    VAR_9 = &VAR_2->border_colors.unfocused;
    VAR_10 = VAR_7->title_unfocused;
    VAR_11 = VAR_7->marks_unfocused;
   }

   if (VAR_12->border == VAR_0) {
    FUNC_1(VAR_3, VAR_4, VAR_7, VAR_12->x,
      VAR_12->y, VAR_12->width, VAR_9,
      VAR_10, VAR_11);
   } else if (VAR_12->border == VAR_1) {
    FUNC_2(VAR_3, VAR_4, VAR_7, VAR_9);
   }
   FUNC_3(VAR_3, VAR_4, VAR_7, VAR_9);
  } else {
   FUNC_0(VAR_3, VAR_4, VAR_7,
     VAR_5->focused || VAR_7->current.focused);
  }
 }
}
