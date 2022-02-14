
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zxdg_output_v1 {int dummy; } ;
struct swaybar_output {int surface; int link; int * name; struct swaybar* bar; } ;
struct swaybar {TYPE_1__* config; scalar_t__ running; int compositor; int outputs; int unused_outputs; } ;
struct TYPE_2__ {scalar_t__ workspace_buttons; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct swaybar_output*) ;
 int FUNC_2 (struct swaybar*,int) ;
 int FUNC_3 (struct swaybar*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_0,
  struct zxdg_output_v1 *VAR_1) {
 struct swaybar_output *VAR_2 = VAR_0;
 struct swaybar *VAR_3 = VAR_2->bar;

 if (!FUNC_5(&VAR_2->link)) {
  return;
 }

 FUNC_0(VAR_2->name != ((void*)0));
 if (!FUNC_1(VAR_2)) {
  FUNC_7(&VAR_2->link);
  FUNC_6(&VAR_3->unused_outputs, &VAR_2->link);
  return;
 }

 FUNC_7(&VAR_2->link);
 FUNC_6(&VAR_3->outputs, &VAR_2->link);

 VAR_2->surface = FUNC_4(VAR_3->compositor);
 FUNC_0(VAR_2->surface);

 FUNC_2(VAR_3, 0);

 if (VAR_3->running && VAR_3->config->workspace_buttons) {
  FUNC_3(VAR_3);
 }
}
