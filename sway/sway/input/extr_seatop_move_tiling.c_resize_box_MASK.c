
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_box {int height; int width; int x; int y; } ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
__attribute__((used)) static void FUNC_0(struct wlr_box *VAR_0, enum wlr_edges VAR_1,
  int VAR_2) {
 switch (VAR_1) {
 case 128:
  VAR_0->height = VAR_2;
  break;
 case 131:
  VAR_0->width = VAR_2;
  break;
 case 129:
  VAR_0->x = VAR_0->x + VAR_0->width - VAR_2;
  VAR_0->width = VAR_2;
  break;
 case 132:
  VAR_0->y = VAR_0->y + VAR_0->height - VAR_2;
  VAR_0->height = VAR_2;
  break;
 case 130:
  VAR_0->x += VAR_2;
  VAR_0->y += VAR_2;
  VAR_0->width -= VAR_2 * 2;
  VAR_0->height -= VAR_2 * 2;
  break;
 }
}
