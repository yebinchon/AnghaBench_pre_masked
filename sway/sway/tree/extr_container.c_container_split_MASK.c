
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat {int dummy; } ;
struct sway_container {int layout; scalar_t__ fullscreen_mode; int node; int y; int x; int height_fraction; int width_fraction; int height; int width; } ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sway_container*,struct sway_container*) ;
 struct sway_container* FUNC_1 (int *) ;
 int FUNC_2 (struct sway_container*,struct sway_container*) ;
 struct sway_seat* FUNC_3 () ;
 int * FUNC_4 (struct sway_seat*) ;
 int FUNC_5 (struct sway_seat*,int *) ;
 int FUNC_6 (struct sway_seat*,int *) ;

struct sway_container *FUNC_7(struct sway_container *VAR_1,
  enum sway_container_layout VAR_2) {
 struct sway_seat *VAR_3 = FUNC_3();
 bool VAR_4 = (FUNC_4(VAR_3) == &VAR_1->node);

 struct sway_container *VAR_5 = FUNC_1(((void*)0));
 VAR_5->width = VAR_1->width;
 VAR_5->height = VAR_1->height;
 VAR_5->width_fraction = VAR_1->width_fraction;
 VAR_5->height_fraction = VAR_1->height_fraction;
 VAR_5->x = VAR_1->x;
 VAR_5->y = VAR_1->y;
 VAR_5->layout = VAR_2;

 FUNC_2(VAR_1, VAR_5);
 FUNC_0(VAR_5, VAR_1);

 if (VAR_4) {
  FUNC_6(VAR_3, &VAR_5->node);
  if (VAR_5->fullscreen_mode == VAR_0) {
   FUNC_5(VAR_3, &VAR_1->node);
  } else {
   FUNC_6(VAR_3, &VAR_1->node);
  }
 }

 return VAR_5;
}
