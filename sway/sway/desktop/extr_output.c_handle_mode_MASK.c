
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct sway_output {int server; int configured; int enabled; TYPE_1__* wlr_output; } ;
struct output_config {scalar_t__ enabled; } ;
struct TYPE_2__ {int name; int * current_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct output_config*,struct sway_output*) ;
 int FUNC_1 (struct sway_output*) ;
 int FUNC_2 (struct sway_output*) ;
 struct output_config* FUNC_3 (struct sway_output*) ;
 int VAR_1 ;
 struct sway_output* VAR_2 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 struct sway_output* FUNC_7 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_output *VAR_5 = FUNC_7(VAR_3, VAR_5, VAR_1);
 if (!VAR_5->configured && !VAR_5->enabled) {
  struct output_config *VAR_6 = FUNC_3(VAR_5);
  if (VAR_5->wlr_output->current_mode != ((void*)0) &&
    (!VAR_6 || VAR_6->enabled)) {



   FUNC_4(VAR_0, "Output %s has gained a CRTC, "
    "trying to enable it", VAR_5->wlr_output->name);
   FUNC_0(VAR_6, VAR_5);
  }
  return;
 }
 if (!VAR_5->enabled || !VAR_5->configured) {
  return;
 }
 FUNC_1(VAR_5);
 FUNC_2(VAR_5);
 FUNC_5();

 FUNC_6(VAR_5->server);
}
