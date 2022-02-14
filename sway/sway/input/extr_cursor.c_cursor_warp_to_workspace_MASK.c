
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {double x; double width; double y; double height; } ;
struct sway_cursor {int cursor; } ;


 int FUNC_0 (int ,int *,double,double) ;

void FUNC_1(struct sway_cursor *VAR_0,
  struct sway_workspace *VAR_1) {
 if (!VAR_1) {
  return;
 }

 double VAR_2 = VAR_1->x + VAR_1->width / 2.0;
 double VAR_3 = VAR_1->y + VAR_1->height / 2.0;

 FUNC_0(VAR_0->cursor, ((void*)0), VAR_2, VAR_3);
}
