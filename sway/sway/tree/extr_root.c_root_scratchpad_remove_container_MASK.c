
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {int scratchpad; } ;
struct TYPE_2__ {int scratchpad; } ;


 int FUNC_0 (struct sway_container*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct sway_container*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int,char*) ;

void FUNC_4(struct sway_container *VAR_1) {
 if (!FUNC_3(VAR_1->scratchpad, "Container is not in scratchpad")) {
  return;
 }
 VAR_1->scratchpad = 0;
 int VAR_2 = FUNC_2(VAR_0->scratchpad, VAR_1);
 if (VAR_2 != -1) {
  FUNC_1(VAR_0->scratchpad, VAR_2);
  FUNC_0(VAR_1, "move");
 }
}
