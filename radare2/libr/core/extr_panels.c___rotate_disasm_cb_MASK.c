
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int panels; } ;
struct TYPE_9__ {TYPE_1__* model; } ;
struct TYPE_8__ {int rotate; int cmd; } ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(void *VAR_2, bool VAR_3) {
 RCore *VAR_4 = (RCore *)VAR_2;
 RPanel *VAR_5 = FUNC_0 (VAR_4->panels);


 if (!FUNC_3 (VAR_5->model->cmd, VAR_0) ||
   !FUNC_3 (VAR_5->model->cmd, VAR_1)) {
  return;
 }

 if (VAR_3) {
  if (!VAR_5->model->rotate) {
   VAR_5->model->rotate = 4;
  } else {
   VAR_5->model->rotate--;
  }
 } else {
  VAR_5->model->rotate++;
 }
 FUNC_2 (VAR_4, VAR_5->model->rotate);
 FUNC_1 (VAR_4, VAR_5);
}
