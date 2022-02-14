
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_output {int enabled; } ;


 int VAR_0 ;
 struct sway_output* VAR_1 ;
 int FUNC_0 (struct sway_output*) ;
 int FUNC_1 () ;
 struct sway_output* FUNC_2 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_output *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_0);
 if (!VAR_4->enabled) {
  return;
 }
 FUNC_0(VAR_4);
 FUNC_1();
}
