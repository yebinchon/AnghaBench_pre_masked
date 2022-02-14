
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* view; TYPE_1__* model; } ;
struct TYPE_8__ {int refresh; } ;
struct TYPE_7__ {char** filter; int n_filter; } ;
typedef TYPE_3__ RPanel ;
typedef int RCore ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*,int *) ;
 char* FUNC_2 (int *,char*) ;

void FUNC_3(RCore *VAR_0, RPanel *VAR_1) {
 if (!VAR_1->model->filter) {
  return;
 }
 char *VAR_2 = FUNC_2 (VAR_0, "filter word: ");
 if (VAR_2) {
  VAR_1->model->filter[VAR_1->model->n_filter++] = VAR_2;
  FUNC_1 (VAR_0, VAR_1, ((void*)0));
  VAR_1->view->refresh = 1;
 }
 FUNC_0 (VAR_1);
}
