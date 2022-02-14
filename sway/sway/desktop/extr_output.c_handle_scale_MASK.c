
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_output {int server; int configured; int enabled; } ;


 int FUNC_0 (struct sway_output*) ;
 int FUNC_1 (struct sway_output*) ;
 struct sway_output* VAR_0 ;
 int FUNC_2 (struct sway_output*,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 struct sway_output* FUNC_5 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_output *VAR_5 = FUNC_5(VAR_3, VAR_5, VAR_1);
 if (!VAR_5->enabled || !VAR_5->configured) {
  return;
 }
 FUNC_0(VAR_5);
 FUNC_2(VAR_5, VAR_2, ((void*)0));
 FUNC_1(VAR_5);
 FUNC_3();

 FUNC_4(VAR_5->server);
}
