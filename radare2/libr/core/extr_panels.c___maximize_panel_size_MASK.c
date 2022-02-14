
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* view; } ;
struct TYPE_10__ {TYPE_1__* can; } ;
struct TYPE_9__ {int refresh; int pos; } ;
struct TYPE_8__ {scalar_t__ h; int w; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ,int,int ,scalar_t__) ;

void FUNC_2(RPanels *VAR_0) {
 RPanel *VAR_1 = FUNC_0 (VAR_0);
 FUNC_1 (&VAR_1->view->pos, 0, 1, VAR_0->can->w, VAR_0->can->h - 1);
 VAR_1->view->refresh = 1;
}
