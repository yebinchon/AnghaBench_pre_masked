
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* view; TYPE_1__* model; } ;
struct TYPE_7__ {int refresh; } ;
struct TYPE_6__ {int cache; } ;
typedef TYPE_3__ RPanel ;
typedef int RCore ;


 int FUNC_0 (int *,TYPE_3__*,int *) ;

void FUNC_1 (RCore *VAR_0, RPanel *VAR_1) {
 VAR_1->model->cache = !VAR_1->model->cache;
 FUNC_0 (VAR_0, VAR_1, ((void*)0));
 VAR_1->view->refresh = 1;
}
