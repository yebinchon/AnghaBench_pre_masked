
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct TYPE_4__ {int link; } ;
struct TYPE_3__ {int link; } ;
struct sway_tablet_tool {TYPE_2__ set_cursor; TYPE_1__ tool_destroy; } ;


 int FUNC_0 (struct sway_tablet_tool*) ;
 struct sway_tablet_tool* VAR_0 ;
 int VAR_1 ;
 struct sway_tablet_tool* FUNC_1 (struct wl_listener*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_tablet_tool *VAR_4 =
  FUNC_1(VAR_2, VAR_4, VAR_1);

 FUNC_2(&VAR_4->tool_destroy.link);
 FUNC_2(&VAR_4->set_cursor.link);

 FUNC_0(VAR_4);
}
