
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int x; int width; int y; int height; } ;
struct sway_container {int width; int height; scalar_t__ y; scalar_t__ x; struct sway_workspace* workspace; } ;


 int FUNC_0 (struct sway_container*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct sway_container *VAR_0) {
 if (!FUNC_2(FUNC_1(VAR_0),
   "Expected a floating container")) {
  return;
 }
 struct sway_workspace *VAR_1 = VAR_0->workspace;
 double VAR_2 = VAR_1->x + (VAR_1->width - VAR_0->width) / 2;
 double VAR_3 = VAR_1->y + (VAR_1->height - VAR_0->height) / 2;
 FUNC_0(VAR_0, VAR_2 - VAR_0->x, VAR_3 - VAR_0->y);
}
