
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_box {int height; int width; int y; int x; } ;
struct sway_container {int height; int width; int y; int x; } ;



void FUNC_0(struct sway_container *VAR_0, struct wlr_box *VAR_1) {
 VAR_1->x = VAR_0->x;
 VAR_1->y = VAR_0->y;
 VAR_1->width = VAR_0->width;
 VAR_1->height = VAR_0->height;
}
