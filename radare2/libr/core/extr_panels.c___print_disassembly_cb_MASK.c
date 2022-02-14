
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_20__ {int offset; int config; TYPE_1__* print; } ;
struct TYPE_19__ {TYPE_4__* model; TYPE_3__* view; } ;
struct TYPE_18__ {char* cmd; int addr; } ;
struct TYPE_16__ {scalar_t__ h; } ;
struct TYPE_17__ {TYPE_2__ pos; } ;
struct TYPE_15__ {long long screen_bounds; } ;
typedef TYPE_5__ RPanel ;
typedef TYPE_6__ RCore ;


 char* FUNC_0 (TYPE_6__*,TYPE_5__*) ;
 char* FUNC_1 (TYPE_6__*,TYPE_5__*,int) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_6__*,char*,int ) ;
 int FUNC_6 (TYPE_6__*,int ,int) ;
 char* FUNC_7 (char*,char*,scalar_t__) ;

void FUNC_8(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 RPanel *VAR_3 = (RPanel *)VAR_1;
 VAR_2->print->screen_bounds = 1LL;
 char *VAR_4 = FUNC_0 (VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_2 (VAR_2, VAR_3, VAR_4);
  return;
 }
 char *VAR_5 = VAR_3->model->cmd;
 VAR_3->model->cmd = FUNC_7 ("%s %d", VAR_3->model->cmd, VAR_3->view->pos.h - 3);
 ut64 VAR_6 = VAR_2->offset;
 VAR_2->offset = VAR_3->model->addr;
 FUNC_6 (VAR_2, VAR_3->model->addr, 1);
 if (FUNC_4 (VAR_2->config, "cfg.debug")) {
  FUNC_5 (VAR_2, ".dr*", 0);
 }
 VAR_4 = FUNC_1 (VAR_2, VAR_3, 0);
 VAR_2->offset = VAR_6;
 FUNC_3 (VAR_3->model->cmd);
 VAR_3->model->cmd = VAR_5;
 FUNC_2 (VAR_2, VAR_3, VAR_4);
}
