
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tmp ;
typedef int replace ;
struct TYPE_14__ {int panels; } ;
struct TYPE_13__ {TYPE_2__* view; TYPE_1__* model; } ;
struct TYPE_12__ {int refresh; } ;
struct TYPE_11__ {int rotate; int cmd; } ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int *) ;
 char* FUNC_3 (int ,char const*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,char*,int) ;
 int FUNC_6 (char*,int,char*,char const*,char const*) ;

void FUNC_7(RCore *VAR_0, const char **VAR_1, const int VAR_2, const char *VAR_3, bool VAR_4) {
 if (!VAR_2) {
  return;
 }
 RPanel *VAR_5 = FUNC_0 (VAR_0->panels);
 FUNC_1 (VAR_0, VAR_5);
 if (VAR_4) {
  if (!VAR_5->model->rotate) {
   VAR_5->model->rotate = VAR_2 - 1;
  } else {
   VAR_5->model->rotate--;
  }
 } else {
  VAR_5->model->rotate++;
 }
 char VAR_6[64], *VAR_7;
 int VAR_8 = VAR_5->model->rotate % VAR_2;
 FUNC_6 (VAR_6, sizeof (VAR_6), "%s%s", VAR_3, VAR_1[VAR_8]);
 VAR_7 = FUNC_3 (VAR_5->model->cmd, VAR_3, " ");
 if (VAR_7) {
  char VAR_9[64];
  FUNC_6 (VAR_9, sizeof (VAR_9), "%s%s", VAR_3, VAR_7);
  VAR_5->model->cmd = FUNC_5 (VAR_5->model->cmd, VAR_9, VAR_6, 1);
 } else {
  VAR_5->model->cmd = FUNC_4 (VAR_5->model->cmd, VAR_6);
 }
 FUNC_2 (VAR_0, VAR_5, ((void*)0));
 VAR_5->view->refresh = 1;
}
