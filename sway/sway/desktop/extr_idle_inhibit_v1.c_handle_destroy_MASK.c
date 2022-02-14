
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_idle_inhibitor_v1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sway_idle_inhibitor_v1*) ;
 struct sway_idle_inhibitor_v1* VAR_2 ;
 int FUNC_1 (int ,char*) ;
 struct sway_idle_inhibitor_v1* FUNC_2 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_idle_inhibitor_v1 *VAR_5 =
  FUNC_2(VAR_3, VAR_5, VAR_1);
 FUNC_1(VAR_0, "Sway idle inhibitor destroyed");
 FUNC_0(VAR_5);
}
