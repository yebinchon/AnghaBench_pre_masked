
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_xdg_popup {int child; } ;


 int VAR_0 ;
 struct sway_xdg_popup* VAR_1 ;
 int FUNC_0 (int *) ;
 struct sway_xdg_popup* FUNC_1 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xdg_popup *VAR_4 = FUNC_1(VAR_2, VAR_4, VAR_0);
 FUNC_0(&VAR_4->child);
}
