
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct TYPE_2__ {int link; } ;
struct sway_tablet_pad {TYPE_1__ tablet_destroy; int * tablet; } ;


 struct sway_tablet_pad* VAR_0 ;
 int VAR_1 ;
 struct sway_tablet_pad* FUNC_0 (struct wl_listener*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_tablet_pad *VAR_4 =
  FUNC_0(VAR_2, VAR_4, VAR_1);

 VAR_4->tablet = ((void*)0);

 FUNC_2(&VAR_4->tablet_destroy.link);
 FUNC_1(&VAR_4->tablet_destroy.link);
}
