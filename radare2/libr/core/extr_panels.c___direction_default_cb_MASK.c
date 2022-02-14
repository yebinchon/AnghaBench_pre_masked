
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int panels; } ;
struct TYPE_6__ {TYPE_1__* view; } ;
struct TYPE_5__ {int refresh; int sy; int sx; } ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;
typedef int Direction ;






 TYPE_2__* FUNC_0 (int ) ;

void FUNC_1(void *VAR_0, int VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 RPanel *VAR_3 = FUNC_0 (VAR_2->panels);
 VAR_3->view->refresh = 1;
 switch ((Direction)VAR_1) {
 case 130:
  if (VAR_3->view->sx > 0) {
   VAR_3->view->sx--;
  }
  return;
 case 129:
  VAR_3->view->sx++;
  return;
 case 128:
  if (VAR_3->view->sy > 0) {
   VAR_3->view->sy--;
  }
  return;
 case 131:
  VAR_3->view->sy++;
  return;
 }
}
