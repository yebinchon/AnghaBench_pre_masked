
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
struct TYPE_5__ {scalar_t__ border; scalar_t__ focused; int width; int y; int x; } ;
struct sway_container {TYPE_2__ current; struct wlr_texture* marks_unfocused; struct wlr_texture* title_unfocused; struct wlr_texture* marks_focused; struct wlr_texture* title_focused; struct wlr_texture* marks_urgent; struct wlr_texture* title_urgent; struct sway_view* view; } ;
struct border_colors {int dummy; } ;
typedef int pixman_region32_t ;
struct TYPE_4__ {struct border_colors unfocused; struct border_colors focused; struct border_colors urgent; } ;
struct TYPE_6__ {TYPE_1__ border_colors; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (struct sway_output*,int *,struct sway_container*,scalar_t__) ;
 int FUNC_1 (struct sway_output*,int *,struct sway_container*,int ,int ,int ,struct border_colors*,struct wlr_texture*,struct wlr_texture*) ;
 int FUNC_2 (struct sway_output*,int *,struct sway_container*,struct border_colors*) ;
 int FUNC_3 (struct sway_output*,int *,struct sway_container*,struct border_colors*) ;
 scalar_t__ FUNC_4 (struct sway_view*) ;

__attribute__((used)) static void FUNC_5(struct sway_output *VAR_3,
  pixman_region32_t *VAR_4, struct sway_container *VAR_5) {
 if (VAR_5->view) {
  struct sway_view *VAR_6 = VAR_5->view;
  struct border_colors *VAR_7;
  struct wlr_texture *VAR_8;
  struct wlr_texture *VAR_9;

  if (FUNC_4(VAR_6)) {
   VAR_7 = &VAR_2->border_colors.urgent;
   VAR_8 = VAR_5->title_urgent;
   VAR_9 = VAR_5->marks_urgent;
  } else if (VAR_5->current.focused) {
   VAR_7 = &VAR_2->border_colors.focused;
   VAR_8 = VAR_5->title_focused;
   VAR_9 = VAR_5->marks_focused;
  } else {
   VAR_7 = &VAR_2->border_colors.unfocused;
   VAR_8 = VAR_5->title_unfocused;
   VAR_9 = VAR_5->marks_unfocused;
  }

  if (VAR_5->current.border == VAR_0) {
   FUNC_1(VAR_3, VAR_4, VAR_5, VAR_5->current.x,
     VAR_5->current.y, VAR_5->current.width, VAR_7,
     VAR_8, VAR_9);
  } else if (VAR_5->current.border == VAR_1) {
   FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7);
  }
  FUNC_3(VAR_3, VAR_4, VAR_5, VAR_7);
 } else {
  FUNC_0(VAR_3, VAR_4, VAR_5, VAR_5->current.focused);
 }
}
