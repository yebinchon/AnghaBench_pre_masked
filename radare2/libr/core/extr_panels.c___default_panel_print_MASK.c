
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_2__* print; int panels; } ;
struct TYPE_18__ {TYPE_1__* model; } ;
struct TYPE_17__ {int cur_enabled; } ;
struct TYPE_16__ {int (* print_cb ) (TYPE_4__*,TYPE_3__*) ;scalar_t__ cmd; scalar_t__ readOnly; } ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;

void FUNC_5(RCore *VAR_0, RPanel *VAR_1) {
 bool VAR_2 = VAR_0->print->cur_enabled;
 VAR_0->print->cur_enabled = VAR_2 & (FUNC_0 (VAR_0->panels) == VAR_1);
 if (VAR_1->model->readOnly) {
  FUNC_1 (VAR_0, VAR_1);
  FUNC_2 (VAR_0, VAR_1);
 } else if (VAR_1->model->cmd) {
  VAR_1->model->print_cb (VAR_0, VAR_1);
  FUNC_3 (VAR_0, VAR_1);
 }
 VAR_0->print->cur_enabled = VAR_2;
}
