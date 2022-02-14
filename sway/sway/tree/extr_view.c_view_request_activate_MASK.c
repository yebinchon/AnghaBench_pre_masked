
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_view {TYPE_1__* container; } ;
struct sway_seat {int dummy; } ;
struct TYPE_4__ {int focus_on_window_activation; } ;
struct TYPE_3__ {struct sway_workspace* workspace; } ;






 TYPE_2__* VAR_0 ;
 struct sway_seat* FUNC_0 () ;
 int FUNC_1 (struct sway_seat*,TYPE_1__*) ;
 int FUNC_2 (struct sway_view*,int) ;
 int FUNC_3 (struct sway_workspace*) ;

void FUNC_4(struct sway_view *VAR_1) {
 struct sway_workspace *VAR_2 = VAR_1->container->workspace;
 if (!VAR_2) {
  return;
 }
 struct sway_seat *VAR_3 = FUNC_0();

 switch (VAR_0->focus_on_window_activation) {
 case 129:
  if (FUNC_3(VAR_2)) {
   FUNC_1(VAR_3, VAR_1->container);
  } else {
   FUNC_2(VAR_1, 1);
  }
  break;
 case 128:
  FUNC_2(VAR_1, 1);
  break;
 case 131:
  FUNC_1(VAR_3, VAR_1->container);
  break;
 case 130:
  break;
 }
}
