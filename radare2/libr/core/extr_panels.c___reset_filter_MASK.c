
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* view; TYPE_1__* model; } ;
struct TYPE_9__ {int refresh; } ;
struct TYPE_8__ {int * filter; } ;
typedef TYPE_3__ RPanel ;
typedef int RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(RCore *VAR_1, RPanel *VAR_2) {
 FUNC_3 (VAR_2->model->filter);
 VAR_2->model->filter = ((void*)0);
 FUNC_0 (VAR_2, VAR_0);
 FUNC_2 (VAR_1, VAR_2, ((void*)0));
 VAR_2->view->refresh = 1;
 FUNC_1 (VAR_2);
}
