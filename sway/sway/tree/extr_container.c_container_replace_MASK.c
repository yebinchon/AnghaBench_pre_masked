
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int dummy; } ;
struct sway_container {int fullscreen_mode; int scratchpad; float width_fraction; float height_fraction; struct sway_workspace* workspace; scalar_t__ parent; } ;
typedef enum sway_fullscreen_mode { ____Placeholder_sway_fullscreen_mode } sway_fullscreen_mode ;





 int FUNC_0 (struct sway_container*,struct sway_container*,int) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*) ;
 int FUNC_5 (struct sway_container*,struct sway_workspace*) ;
 int FUNC_6 (struct sway_container*) ;
 int FUNC_7 (struct sway_container*) ;

void FUNC_8(struct sway_container *VAR_0,
  struct sway_container *VAR_1) {
 enum sway_fullscreen_mode VAR_2 = VAR_0->fullscreen_mode;
 bool VAR_3 = VAR_0->scratchpad;
 struct sway_workspace *VAR_4 = ((void*)0);
 if (VAR_2 != 129) {
  FUNC_2(VAR_0);
 }
 if (VAR_3) {
  VAR_4 = VAR_0->workspace;
  FUNC_7(VAR_0);
  FUNC_6(VAR_0);
 }
 if (VAR_0->parent || VAR_0->workspace) {
  float VAR_5 = VAR_0->width_fraction;
  float VAR_6 = VAR_0->height_fraction;
  FUNC_0(VAR_0, VAR_1, 1);
  FUNC_1(VAR_0);
  VAR_1->width_fraction = VAR_5;
  VAR_1->height_fraction = VAR_6;
 }
 if (VAR_3) {
  FUNC_5(VAR_1, VAR_4);
 }
 switch (VAR_2) {
 case 128:
  FUNC_4(VAR_1);
  break;
 case 130:
  FUNC_3(VAR_1);
  break;
 case 129:

  break;
 }
}
