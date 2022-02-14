
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct TYPE_2__ {int link; } ;
struct sway_tablet_pad {int * current_surface; TYPE_1__ surface_destroy; int tablet_v2_pad; } ;


 int VAR_0 ;
 struct sway_tablet_pad* VAR_1 ;
 struct sway_tablet_pad* FUNC_0 (struct wl_listener*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct sway_tablet_pad *VAR_4 =
  FUNC_0(VAR_2, VAR_4, VAR_0);

 FUNC_3(VAR_4->tablet_v2_pad,
  VAR_4->current_surface);
 FUNC_2(&VAR_4->surface_destroy.link);
 FUNC_1(&VAR_4->surface_destroy.link);
 VAR_4->current_surface = ((void*)0);
}
