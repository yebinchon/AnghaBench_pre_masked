
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container {scalar_t__ border; int border_thickness; int node; scalar_t__ content_height; scalar_t__ height; scalar_t__ content_width; scalar_t__ width; scalar_t__ content_y; scalar_t__ y; scalar_t__ content_x; scalar_t__ x; int view; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sway_container*) ;
 size_t FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(struct sway_container *VAR_3) {
 if (!FUNC_3(VAR_3->view, "Expected a view")) {
  return;
 }
 if (!FUNC_3(FUNC_0(VAR_3), "Expected a floating view")) {
  return;
 }
 size_t VAR_4 = 0;
 size_t VAR_5 = 0;

 if (VAR_3->border != VAR_0) {
  VAR_4 = VAR_3->border_thickness * (VAR_3->border != VAR_1);
  VAR_5 = VAR_3->border == VAR_2 ?
   FUNC_1() : VAR_4;
 }

 VAR_3->x = VAR_3->content_x - VAR_4;
 VAR_3->y = VAR_3->content_y - VAR_5;
 VAR_3->width = VAR_3->content_width + VAR_4 * 2;
 VAR_3->height = VAR_5 + VAR_3->content_height + VAR_4;
 FUNC_2(&VAR_3->node);
}
