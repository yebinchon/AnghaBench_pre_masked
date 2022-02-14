
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_output {int server; int configured; int enabled; } ;


 int FUNC_0 (struct sway_output*) ;
 int FUNC_1 (struct sway_output*) ;
 struct sway_output* VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 struct sway_output* FUNC_4 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_output *VAR_4 = FUNC_4(VAR_2, VAR_4, VAR_1);
 if (!VAR_4->enabled || !VAR_4->configured) {
  return;
 }
 FUNC_0(VAR_4);
 FUNC_1(VAR_4);
 FUNC_2();

 FUNC_3(VAR_4->server);
}
