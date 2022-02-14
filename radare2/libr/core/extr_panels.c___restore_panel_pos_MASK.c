
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* view; } ;
struct TYPE_5__ {int h; int w; int y; int x; } ;
struct TYPE_6__ {TYPE_1__ prevPos; int pos; } ;
typedef TYPE_3__ RPanel ;


 int FUNC_0 (int *,int ,int ,int ,int ) ;

void FUNC_1(RPanel* VAR_0) {
 FUNC_0 (&VAR_0->view->pos, VAR_0->view->prevPos.x, VAR_0->view->prevPos.y,
   VAR_0->view->prevPos.w, VAR_0->view->prevPos.h);
}
