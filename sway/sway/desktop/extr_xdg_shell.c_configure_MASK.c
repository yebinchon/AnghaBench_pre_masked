
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sway_xdg_shell_view {int dummy; } ;
struct sway_view {int wlr_xdg_surface; } ;


 int FUNC_0 (int ,int,int) ;
 struct sway_xdg_shell_view* FUNC_1 (struct sway_view*) ;

__attribute__((used)) static uint32_t FUNC_2(struct sway_view *VAR_0, double VAR_1, double VAR_2,
  int VAR_3, int VAR_4) {
 struct sway_xdg_shell_view *VAR_5 =
  FUNC_1(VAR_0);
 if (VAR_5 == ((void*)0)) {
  return 0;
 }
 return FUNC_0(VAR_0->wlr_xdg_surface, VAR_3, VAR_4);
}
