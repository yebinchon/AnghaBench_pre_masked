
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {TYPE_1__* floating; } ;
struct sway_output {int dummy; } ;
struct sway_container {int dummy; } ;
struct TYPE_2__ {struct sway_container** items; scalar_t__ length; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*,char*) ;
 struct sway_workspace* FUNC_4 (struct sway_output*) ;
 int FUNC_5 (struct sway_workspace*,char*) ;
 int FUNC_6 (struct sway_workspace*,struct sway_container*) ;
 int FUNC_7 (struct sway_workspace*) ;

__attribute__((used)) static void FUNC_8(struct sway_workspace *VAR_0,
  struct sway_output *VAR_1) {
 struct sway_workspace *VAR_2 = FUNC_4(VAR_1);
 if (!FUNC_5(VAR_2, "New output does not have a workspace")) {
  return;
 }
 while (VAR_0->floating->length) {
  struct sway_container *VAR_3 = VAR_0->floating->items[0];
  FUNC_0(VAR_3);
  FUNC_6(VAR_2, VAR_3);
  FUNC_2(VAR_3);
  FUNC_1(VAR_3);
  FUNC_3(VAR_3, "move");
 }
 FUNC_7(VAR_2);
}
