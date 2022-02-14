
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wlr_surface_iterator_func_t ;
struct sway_view {int wlr_xdg_surface; } ;


 int FUNC_0 (int ,int ,void*) ;
 int * FUNC_1 (struct sway_view*) ;

__attribute__((used)) static void FUNC_2(struct sway_view *VAR_0,
  wlr_surface_iterator_func_t VAR_1, void *VAR_2) {
 if (FUNC_1(VAR_0) == ((void*)0)) {
  return;
 }
 FUNC_0(VAR_0->wlr_xdg_surface, VAR_1,
  VAR_2);
}
