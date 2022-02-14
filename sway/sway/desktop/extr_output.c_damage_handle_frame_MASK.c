
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct timespec {int dummy; } ;
struct TYPE_7__ {struct sway_container* fullscreen; } ;
struct sway_workspace {TYPE_3__ current; } ;
struct TYPE_6__ {struct sway_workspace* active_workspace; } ;
struct sway_output {int damage; TYPE_2__ current; TYPE_1__* wlr_output; int enabled; } ;
struct sway_container {scalar_t__ view; } ;
typedef int pixman_region32_t ;
struct TYPE_8__ {struct sway_container* fullscreen_global; } ;
struct TYPE_5__ {int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;
 int VAR_2 ;
 struct sway_output* VAR_3 ;
 int FUNC_1 (struct sway_output*,struct timespec*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_4__* VAR_4 ;
 int FUNC_4 (struct sway_output*,scalar_t__) ;
 int FUNC_5 (struct sway_output*,struct timespec*) ;
 int FUNC_6 (int ,char*) ;
 struct sway_output* FUNC_7 (struct wl_listener*,int ,int ) ;
 int FUNC_8 (int ,int*,int *) ;

__attribute__((used)) static void FUNC_9(struct wl_listener *VAR_5, void *VAR_6) {
 struct sway_output *VAR_7 =
  FUNC_7(VAR_5, VAR_7, VAR_2);
 if (!VAR_7->enabled || !VAR_7->wlr_output->enabled) {
  return;
 }

 struct timespec VAR_8;
 FUNC_0(VAR_0, &VAR_8);

 struct sway_workspace *VAR_9 = VAR_7->current.active_workspace;
 if (VAR_9 == ((void*)0)) {
  return;
 }

 struct sway_container *VAR_10 = VAR_4->fullscreen_global;
 if (!VAR_10) {
  VAR_10 = VAR_9->current.fullscreen;
 }

 if (VAR_10 && VAR_10->view) {

  static bool VAR_11 = 0;
  bool VAR_12 =
   FUNC_4(VAR_7, VAR_10->view);

  if (VAR_12 && !VAR_11) {
   FUNC_6(VAR_1, "Scanning out fullscreen view");
  }
  if (VAR_11 && !VAR_12) {
   FUNC_6(VAR_1, "Stopping fullscreen view scan out");
  }
  VAR_11 = VAR_12;

  if (VAR_12) {
   goto frame_done;
  }
 }

 bool VAR_13;
 pixman_region32_t VAR_14;
 FUNC_3(&VAR_14);
 if (!FUNC_8(VAR_7->damage,
   &VAR_13, &VAR_14)) {
  return;
 }

 if (VAR_13) {
  FUNC_1(VAR_7, &VAR_8, &VAR_14);
 }

 FUNC_2(&VAR_14);

frame_done:

 FUNC_5(VAR_7, &VAR_8);
}
