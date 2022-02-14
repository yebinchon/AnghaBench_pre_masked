
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_26__ {int n_panels; } ;
struct TYPE_25__ {TYPE_7__* panels; int config; TYPE_1__* anal; scalar_t__ const offset; } ;
struct TYPE_24__ {TYPE_2__* view; TYPE_3__* model; } ;
struct TYPE_23__ {scalar_t__ baseAddr; void* cmd; void* title; int * funcName; int * rotateCb; scalar_t__ rotate; int type; } ;
struct TYPE_22__ {int refresh; scalar_t__ curpos; } ;
struct TYPE_21__ {int reg; } ;
typedef TYPE_2__ RPanelView ;
typedef TYPE_3__ RPanelModel ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,scalar_t__ const) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 scalar_t__ const FUNC_9 (int ,char*) ;
 char* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,char const*) ;
 void* FUNC_12 (void*,char const*) ;

void FUNC_13(RCore *VAR_3, RPanel *VAR_4, const char *VAR_5, const char *VAR_6) {
 RPanelModel *VAR_7 = VAR_4->model;
 RPanelView *VAR_8 = VAR_4->view;
 VAR_7->type = VAR_1;
 VAR_7->rotate = 0;
 VAR_8->curpos = 0;
 FUNC_5 (VAR_3, VAR_4, VAR_3->offset);
 VAR_7->rotateCb = ((void*)0);
 FUNC_3 (VAR_3, VAR_4, ((void*)0));
 FUNC_8(VAR_4, ((void*)0));
 VAR_7->funcName = ((void*)0);
 VAR_8->refresh = 1;
 if (VAR_5) {
  VAR_7->title = FUNC_12 (VAR_7->title, VAR_5);
  if (VAR_6) {
   VAR_7->cmd = FUNC_12 (VAR_7->cmd, VAR_6);
  } else {
   VAR_7->cmd = FUNC_12 (VAR_7->cmd, "");
  }
 } else if (VAR_6) {
  VAR_7->title = FUNC_12 (VAR_7->title, VAR_6);
  VAR_7->cmd = FUNC_12 (VAR_7->cmd, VAR_6);
 } else {
  VAR_7->title = FUNC_12 (VAR_7->title, "");
  VAR_7->cmd = FUNC_12 (VAR_7->cmd, "");
 }
 FUNC_6 (VAR_4);
 if (FUNC_0 (VAR_7->cmd)) {
  FUNC_4 (VAR_3, VAR_4);
  FUNC_7 (VAR_3->panels, VAR_4);
  if (FUNC_2 (VAR_4, VAR_0)) {
   const char *VAR_9 = FUNC_10 (VAR_3->anal->reg, VAR_2);
   const ut64 VAR_10 = FUNC_11 (VAR_3->anal->reg, VAR_9);
   VAR_7->baseAddr = VAR_10;
   FUNC_5 (VAR_3, VAR_4, VAR_10 - FUNC_9 (VAR_3->config, "stack.delta"));
  }
 }
 VAR_3->panels->n_panels++;
 FUNC_1 (VAR_3, VAR_4);
 return;
}
