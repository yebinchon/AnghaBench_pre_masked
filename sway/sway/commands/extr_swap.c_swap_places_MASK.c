
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container {int workspace; scalar_t__ parent; int height_fraction; int width_fraction; int height; int width; int y; int x; } ;


 int FUNC_0 (scalar_t__,struct sway_container*,int) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 struct sway_container* FUNC_4 (int) ;
 int FUNC_5 (int ,struct sway_container*) ;
 int FUNC_6 (int ,struct sway_container*,int) ;

__attribute__((used)) static void FUNC_7(struct sway_container *VAR_0,
  struct sway_container *VAR_1) {
 struct sway_container *VAR_2 = FUNC_4(sizeof(struct sway_container));
 VAR_2->x = VAR_0->x;
 VAR_2->y = VAR_0->y;
 VAR_2->width = VAR_0->width;
 VAR_2->height = VAR_0->height;
 VAR_2->width_fraction = VAR_0->width_fraction;
 VAR_2->height_fraction = VAR_0->height_fraction;
 VAR_2->parent = VAR_0->parent;
 VAR_2->workspace = VAR_0->workspace;
 bool VAR_3 = FUNC_1(VAR_0);

 VAR_0->x = VAR_1->x;
 VAR_0->y = VAR_1->y;
 VAR_0->width = VAR_1->width;
 VAR_0->height = VAR_1->height;
 VAR_0->width_fraction = VAR_1->width_fraction;
 VAR_0->height_fraction = VAR_1->height_fraction;

 VAR_1->x = VAR_2->x;
 VAR_1->y = VAR_2->y;
 VAR_1->width = VAR_2->width;
 VAR_1->height = VAR_2->height;
 VAR_1->width_fraction = VAR_2->width_fraction;
 VAR_1->height_fraction = VAR_2->height_fraction;

 int VAR_4 = FUNC_2(VAR_0);
 if (VAR_1->parent) {
  FUNC_0(VAR_1->parent, VAR_0,
    FUNC_2(VAR_1));
 } else if (FUNC_1(VAR_1)) {
  FUNC_5(VAR_1->workspace, VAR_0);
 } else {
  FUNC_6(VAR_1->workspace, VAR_0,
    FUNC_2(VAR_1));
 }
 if (VAR_2->parent) {
  FUNC_0(VAR_2->parent, VAR_1, VAR_4);
 } else if (VAR_3) {
  FUNC_5(VAR_2->workspace, VAR_1);
 } else {
  FUNC_6(VAR_2->workspace, VAR_1, VAR_4);
 }

 FUNC_3(VAR_2);
}
