
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* panels; } ;
struct TYPE_16__ {TYPE_1__* view; } ;
struct TYPE_15__ {scalar_t__ mode; scalar_t__ fun; scalar_t__ curnode; scalar_t__ n_panels; } ;
struct TYPE_14__ {int refresh; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int,int) ;
 int FUNC_7 (int) ;

void FUNC_8(RCore *VAR_6, bool VAR_7) {
 FUNC_4 (VAR_6, 0);
 RPanels *VAR_8 = VAR_6->panels;
 RPanel *VAR_9 = FUNC_1 (VAR_8);
 FUNC_7 (0);
 VAR_9->view->refresh = 1;
 if (!VAR_7) {
  if (VAR_8->mode == VAR_4) {
   FUNC_3 (VAR_6, 0);
   FUNC_5 (VAR_6, VAR_3);
  } else if (VAR_8->mode == VAR_5) {
   FUNC_3 (VAR_6, ++VAR_8->curnode);
  } else {
   FUNC_3 (VAR_6, ++VAR_8->curnode);
  }
 } else {
  if (VAR_8->mode == VAR_4) {
   FUNC_3 (VAR_6, VAR_8->n_panels - 1);
   FUNC_5 (VAR_6, VAR_3);
  } else if (VAR_8->mode == VAR_5) {
   FUNC_3 (VAR_6, --VAR_8->curnode);
  } else {
   FUNC_3 (VAR_6, --VAR_8->curnode);
  }
 }
 VAR_9 = FUNC_1 (VAR_8);
 if (FUNC_0 (VAR_9, VAR_0)) {
  FUNC_6 (VAR_6, 0, 0);
  return;
 }
 VAR_9->view->refresh = 1;
 if (VAR_8->fun == VAR_2 || VAR_8->fun == VAR_1) {
  FUNC_2 (VAR_8);
 }
}
