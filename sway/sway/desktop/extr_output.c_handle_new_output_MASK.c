
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int present; int scale; int transform; int mode; int destroy; } ;
struct wlr_output {TYPE_1__ events; int name; } ;
struct wl_listener {int dummy; } ;
struct sway_server {int dummy; } ;
struct TYPE_8__ {int notify; } ;
struct sway_output {int wlr_output; TYPE_4__ damage_destroy; TYPE_3__* damage; TYPE_4__ damage_frame; TYPE_4__ present; TYPE_4__ scale; TYPE_4__ transform; TYPE_4__ mode; TYPE_4__ destroy; struct sway_server* server; } ;
struct output_config {scalar_t__ enabled; } ;
struct TYPE_6__ {int destroy; int frame; } ;
struct TYPE_7__ {TYPE_2__ events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct output_config* FUNC_0 (struct sway_output*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sway_output* FUNC_1 (struct wlr_output*) ;
 int FUNC_2 (struct sway_output*,struct output_config*) ;
 struct sway_server* VAR_9 ;
 int FUNC_3 (int ,char*,struct wlr_output*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sway_server*) ;
 struct sway_server* FUNC_6 (struct wl_listener*,int ,int ) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 TYPE_3__* FUNC_8 (struct wlr_output*) ;
 int FUNC_9 (int ,int) ;

void FUNC_10(struct wl_listener *VAR_10, void *VAR_11) {
 struct sway_server *VAR_12 = FUNC_6(VAR_10, VAR_12, VAR_8);
 struct wlr_output *VAR_13 = VAR_11;
 FUNC_3(VAR_0, "New output %p: %s", VAR_13, VAR_13->name);

 struct sway_output *VAR_14 = FUNC_1(VAR_13);
 if (!VAR_14) {
  return;
 }
 VAR_14->server = VAR_12;
 VAR_14->damage = FUNC_8(VAR_13);

 FUNC_7(&VAR_13->events.destroy, &VAR_14->destroy);
 VAR_14->destroy.notify = VAR_3;
 FUNC_7(&VAR_13->events.mode, &VAR_14->mode);
 VAR_14->mode.notify = VAR_4;
 FUNC_7(&VAR_13->events.transform, &VAR_14->transform);
 VAR_14->transform.notify = VAR_7;
 FUNC_7(&VAR_13->events.scale, &VAR_14->scale);
 VAR_14->scale.notify = VAR_6;
 FUNC_7(&VAR_13->events.present, &VAR_14->present);
 VAR_14->present.notify = VAR_5;
 FUNC_7(&VAR_14->damage->events.frame, &VAR_14->damage_frame);
 VAR_14->damage_frame.notify = VAR_2;
 FUNC_7(&VAR_14->damage->events.destroy, &VAR_14->damage_destroy);
 VAR_14->damage_destroy.notify = VAR_1;

 struct output_config *VAR_15 = FUNC_0(VAR_14);
 if (!VAR_15 || VAR_15->enabled) {
  FUNC_2(VAR_14, VAR_15);
 } else {
  FUNC_9(VAR_14->wlr_output, 0);
 }

 FUNC_4();

 FUNC_5(VAR_12);
}
