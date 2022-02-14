
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* sel_widget; } ;
struct TYPE_7__ {int user; int (* cb_task_oneshot ) (int ,int ,int *) ;scalar_t__ event_data; int (* event_resize ) (scalar_t__) ;} ;
struct TYPE_6__ {int selection; scalar_t__ options_len; } ;
typedef TYPE_1__ RSelWidget ;
typedef TYPE_2__ RCons ;


 TYPE_5__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_6() {
 RSelWidget *VAR_3 = VAR_0.sel_widget;
 if (VAR_3) {
  VAR_3->options_len = 0;
  VAR_3->selection = -1;
  FUNC_3 ();
  FUNC_0 (VAR_0.sel_widget);
  RCons *VAR_4 = FUNC_2 ();
  if (VAR_4->event_resize && VAR_4->event_data) {
   VAR_4->event_resize (VAR_4->event_data);
   VAR_4->cb_task_oneshot (VAR_4->user, VAR_2, ((void*)0));
  }
  FUNC_1 ("%s", VAR_1);
 }
}
