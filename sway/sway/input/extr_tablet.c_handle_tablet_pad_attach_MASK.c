
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_tablet_tool {struct sway_tablet_tool* data; } ;
struct wl_listener {int dummy; } ;
struct sway_tablet_tool {int tablet; } ;
struct sway_tablet_pad {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_tablet_pad*,int ) ;
 struct sway_tablet_pad* VAR_1 ;
 struct sway_tablet_pad* FUNC_1 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct sway_tablet_pad *VAR_4 = FUNC_1(VAR_2, VAR_4, VAR_0);
 struct wlr_tablet_tool *VAR_5 = VAR_3;
 struct sway_tablet_tool *VAR_6 = VAR_5->data;

 if (!VAR_6) {
  return;
 }

 FUNC_0(VAR_4, VAR_6->tablet);
}
