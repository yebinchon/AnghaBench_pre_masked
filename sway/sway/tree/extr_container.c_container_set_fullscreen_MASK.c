
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {int fullscreen_mode; TYPE_1__* workspace; } ;
typedef enum sway_fullscreen_mode { ____Placeholder_sway_fullscreen_mode } sway_fullscreen_mode ;
struct TYPE_4__ {struct sway_container* fullscreen_global; } ;
struct TYPE_3__ {struct sway_container* fullscreen; } ;





 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 TYPE_2__* VAR_0 ;

void FUNC_3(struct sway_container *VAR_1,
  enum sway_fullscreen_mode VAR_2) {
 if (VAR_1->fullscreen_mode == VAR_2) {
  return;
 }

 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_1);
  break;
 case 128:
  if (VAR_0->fullscreen_global) {
   FUNC_0(VAR_0->fullscreen_global);
  }
  if (VAR_1->workspace && VAR_1->workspace->fullscreen) {
   FUNC_0(VAR_1->workspace->fullscreen);
  }
  FUNC_2(VAR_1);
  break;
 case 130:
  if (VAR_0->fullscreen_global) {
   FUNC_0(VAR_0->fullscreen_global);
  }
  if (VAR_1->fullscreen_mode == 128) {
   FUNC_0(VAR_1);
  }
  FUNC_1(VAR_1);
  break;
 }
}
