
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_view_child {int mapped; } ;


 struct sway_view_child* VAR_0 ;
 int FUNC_0 (struct sway_view_child*,int) ;
 int VAR_1 ;
 struct sway_view_child* FUNC_1 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct sway_view_child *VAR_4 =
  FUNC_1(VAR_2, VAR_4, VAR_1);
 FUNC_0(VAR_4, 1);
 VAR_4->mapped = 0;
}
