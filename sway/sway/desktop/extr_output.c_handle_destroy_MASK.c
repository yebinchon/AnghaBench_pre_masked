
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct sway_server {int dummy; } ;
struct TYPE_16__ {int link; } ;
struct TYPE_15__ {int link; } ;
struct TYPE_14__ {int link; } ;
struct TYPE_13__ {int link; } ;
struct TYPE_12__ {int link; } ;
struct TYPE_11__ {int link; } ;
struct TYPE_10__ {int link; } ;
struct TYPE_9__ {int destroy; } ;
struct sway_output {TYPE_8__ damage_frame; TYPE_7__ damage_destroy; TYPE_6__ present; TYPE_5__ scale; TYPE_4__ transform; TYPE_3__ mode; TYPE_2__ destroy; scalar_t__ enabled; TYPE_1__ events; struct sway_server* server; } ;


 int VAR_0 ;
 struct sway_output* VAR_1 ;
 int FUNC_0 (struct sway_output*) ;
 int FUNC_1 (struct sway_output*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sway_server*) ;
 struct sway_output* FUNC_4 (struct wl_listener*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sway_output*) ;

__attribute__((used)) static void FUNC_7(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_output *VAR_4 = FUNC_4(VAR_2, VAR_4, VAR_0);
 struct sway_server *VAR_5 = VAR_4->server;
 FUNC_6(&VAR_4->events.destroy, VAR_4);

 if (VAR_4->enabled) {
  FUNC_1(VAR_4);
 }
 FUNC_0(VAR_4);

 FUNC_5(&VAR_4->destroy.link);
 FUNC_5(&VAR_4->mode.link);
 FUNC_5(&VAR_4->transform.link);
 FUNC_5(&VAR_4->scale.link);
 FUNC_5(&VAR_4->present.link);
 FUNC_5(&VAR_4->damage_destroy.link);
 FUNC_5(&VAR_4->damage_frame.link);

 FUNC_2();

 FUNC_3(VAR_5);
}
