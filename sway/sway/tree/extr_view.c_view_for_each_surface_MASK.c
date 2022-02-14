
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wlr_surface_iterator_func_t ;
struct sway_view {int surface; TYPE_1__* impl; } ;
struct TYPE_2__ {int (* for_each_surface ) (struct sway_view*,int ,void*) ;} ;


 int FUNC_0 (struct sway_view*,int ,void*) ;
 int FUNC_1 (int ,int ,void*) ;

void FUNC_2(struct sway_view *VAR_0,
  wlr_surface_iterator_func_t VAR_1, void *VAR_2) {
 if (!VAR_0->surface) {
  return;
 }
 if (VAR_0->impl->for_each_surface) {
  VAR_0->impl->for_each_surface(VAR_0, VAR_1, VAR_2);
 } else {
  FUNC_1(VAR_0->surface, VAR_1, VAR_2);
 }
}
