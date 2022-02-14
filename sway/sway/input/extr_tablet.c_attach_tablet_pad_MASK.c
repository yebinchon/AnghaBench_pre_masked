
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


struct TYPE_16__ {int notify; int link; } ;
struct sway_tablet_pad {TYPE_8__ tablet_destroy; struct sway_tablet* tablet; TYPE_6__* seat_device; } ;
struct sway_tablet {TYPE_4__* seat_device; } ;
struct TYPE_15__ {TYPE_5__* wlr_device; } ;
struct TYPE_14__ {TYPE_7__* input_device; } ;
struct TYPE_13__ {int name; } ;
struct TYPE_12__ {TYPE_3__* input_device; } ;
struct TYPE_11__ {TYPE_2__* wlr_device; } ;
struct TYPE_9__ {int destroy; } ;
struct TYPE_10__ {TYPE_1__ events; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_8__*) ;

__attribute__((used)) static void FUNC_3(struct sway_tablet_pad *VAR_2,
  struct sway_tablet *VAR_3) {
 FUNC_0(VAR_0, "Attaching tablet pad \"%s\" to tablet tool \"%s\"",
  VAR_2->seat_device->input_device->wlr_device->name,
  VAR_3->seat_device->input_device->wlr_device->name);

 VAR_2->tablet = VAR_3;

 FUNC_1(&VAR_2->tablet_destroy.link);
 VAR_2->tablet_destroy.notify = VAR_1;
 FUNC_2(&VAR_3->seat_device->input_device->wlr_device->events.destroy,
  &VAR_2->tablet_destroy);
}
