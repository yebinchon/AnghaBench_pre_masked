
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int destroy; } ;
struct sway_output {int enabled; int configured; int * current_mode; TYPE_2__ events; TYPE_1__* wlr_output; } ;
struct TYPE_6__ {int outputs; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct sway_output*) ;
 int FUNC_3 (struct sway_output*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_4 (int ,struct sway_output*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_7 (int *,struct sway_output*) ;

void FUNC_8(struct sway_output *VAR_3) {
 if (!FUNC_5(VAR_3->enabled, "Expected an enabled output")) {
  return;
 }
 FUNC_6(VAR_0, "Disabling output '%s'", VAR_3->wlr_output->name);
 FUNC_7(&VAR_3->events.destroy, VAR_3);

 FUNC_3(VAR_3);

 FUNC_4(VAR_2, VAR_3);

 int VAR_4 = FUNC_2(VAR_1->outputs, VAR_3);
 FUNC_1(VAR_1->outputs, VAR_4);

 VAR_3->enabled = 0;
 VAR_3->configured = 0;
 VAR_3->current_mode = ((void*)0);

 FUNC_0();
}
