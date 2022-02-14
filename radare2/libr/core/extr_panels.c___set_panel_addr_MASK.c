
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_13__ {TYPE_2__* panels; } ;
struct TYPE_12__ {TYPE_3__* view; TYPE_1__* model; } ;
struct TYPE_11__ {int refresh; } ;
struct TYPE_10__ {scalar_t__ autoUpdate; } ;
struct TYPE_9__ {int addr; } ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;


 int FUNC_0 (TYPE_5__*,int,int) ;

void FUNC_1(RCore *VAR_0, RPanel *VAR_1, ut64 VAR_2) {
 VAR_1->model->addr = VAR_2;

 if (VAR_0->panels->autoUpdate) {
  FUNC_0 (VAR_0, 0, 0);
  return;
 }
 VAR_1->view->refresh = 1;
}
