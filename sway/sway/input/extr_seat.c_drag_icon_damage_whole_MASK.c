
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_drag_icon {int y; int x; TYPE_1__* wlr_drag_icon; } ;
struct TYPE_2__ {int surface; int mapped; } ;


 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct sway_drag_icon *VAR_0) {
 if (!VAR_0->wlr_drag_icon->mapped) {
  return;
 }
 FUNC_0(VAR_0->wlr_drag_icon->surface, VAR_0->x, VAR_0->y, 1);
}
