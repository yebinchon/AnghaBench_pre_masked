
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {int border; TYPE_1__* view; } ;
struct TYPE_2__ {int xdg_decoration; scalar_t__ using_csd; } ;






 int FUNC_0 (struct sway_container*,int const) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void FUNC_2(struct sway_container *VAR_0) {
 if (VAR_0->view && VAR_0->view->using_csd) {
  FUNC_0(VAR_0, 130);
  return;
 }
 switch (VAR_0->border) {
 case 130:
  FUNC_0(VAR_0, 128);
  break;
 case 128:
  FUNC_0(VAR_0, 129);
  break;
 case 129:
  if (VAR_0->view && VAR_0->view->xdg_decoration) {
   FUNC_0(VAR_0, 131);
  } else {
   FUNC_0(VAR_0, 130);
  }
  break;
 case 131:

  FUNC_1(0, "Unreachable");
  break;
 }
}
