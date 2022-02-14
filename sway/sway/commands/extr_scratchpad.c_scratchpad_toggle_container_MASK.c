
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int dummy; } ;
struct sway_seat {int dummy; } ;
struct sway_container {struct sway_workspace* workspace; int scratchpad; } ;


 struct sway_seat* FUNC_0 () ;
 int FUNC_1 (struct sway_container*,char*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 struct sway_workspace* FUNC_4 (struct sway_seat*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct sway_container *VAR_0) {
 if (!FUNC_5(VAR_0->scratchpad, "Container isn't in the scratchpad")) {
  return;
 }

 struct sway_seat *VAR_1 = FUNC_0();
 struct sway_workspace *VAR_2 = FUNC_4(VAR_1);

 if (VAR_0->workspace && VAR_2 == VAR_0->workspace) {
  FUNC_2(VAR_0);
  return;
 }

 FUNC_3(VAR_0);
 FUNC_1(VAR_0, "move");
}
