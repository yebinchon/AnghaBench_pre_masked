
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int link; } ;
struct TYPE_9__ {int link; } ;
struct TYPE_8__ {int link; } ;
struct TYPE_7__ {int link; } ;
struct TYPE_12__ {int link; } ;
struct TYPE_11__ {int link; } ;
struct sway_tablet_pad {TYPE_4__ tablet_destroy; TYPE_3__ surface_destroy; TYPE_2__ ring; TYPE_1__ strip; TYPE_6__ button; TYPE_5__ attach; int link; } ;


 int FUNC_0 (struct sway_tablet_pad*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sway_tablet_pad *VAR_0) {
 if (!VAR_0) {
  return;
 }

 FUNC_1(&VAR_0->link);
 FUNC_1(&VAR_0->attach.link);
 FUNC_1(&VAR_0->button.link);
 FUNC_1(&VAR_0->strip.link);
 FUNC_1(&VAR_0->ring.link);
 FUNC_1(&VAR_0->surface_destroy.link);
 FUNC_1(&VAR_0->tablet_destroy.link);

 FUNC_0(VAR_0);
}
