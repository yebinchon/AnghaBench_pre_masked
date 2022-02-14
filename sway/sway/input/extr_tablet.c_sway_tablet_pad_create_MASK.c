
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int link; } ;
struct TYPE_12__ {int link; } ;
struct TYPE_11__ {int link; } ;
struct TYPE_10__ {int link; } ;
struct TYPE_9__ {int link; } ;
struct TYPE_8__ {int link; } ;
struct sway_tablet_pad {int link; TYPE_6__ tablet_destroy; TYPE_5__ surface_destroy; TYPE_4__ ring; TYPE_3__ strip; TYPE_2__ button; TYPE_1__ attach; struct sway_seat_device* seat_device; } ;
struct sway_seat_device {int dummy; } ;
struct sway_seat {TYPE_7__* cursor; } ;
struct TYPE_14__ {int tablet_pads; } ;


 struct sway_tablet_pad* FUNC_0 (int,int) ;
 int FUNC_1 (struct sway_tablet_pad*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

struct sway_tablet_pad *FUNC_4(struct sway_seat *VAR_0,
  struct sway_seat_device *VAR_1) {
 struct sway_tablet_pad *VAR_2 =
  FUNC_0(1, sizeof(struct sway_tablet_pad));
 if (!FUNC_1(VAR_2, "could not allocate sway tablet")) {
  return ((void*)0);
 }

 VAR_2->seat_device = VAR_1;
 FUNC_2(&VAR_2->attach.link);
 FUNC_2(&VAR_2->button.link);
 FUNC_2(&VAR_2->strip.link);
 FUNC_2(&VAR_2->ring.link);
 FUNC_2(&VAR_2->surface_destroy.link);
 FUNC_2(&VAR_2->tablet_destroy.link);

 FUNC_3(&VAR_0->cursor->tablet_pads, &VAR_2->link);

 return VAR_2;
}
