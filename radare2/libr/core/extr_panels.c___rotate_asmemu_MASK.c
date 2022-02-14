
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int config; } ;
struct TYPE_7__ {TYPE_1__* view; } ;
struct TYPE_6__ {int refresh; } ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;

void FUNC_2(RCore *VAR_0, RPanel *VAR_1) {
 const bool VAR_2 = FUNC_0 (VAR_0->config, "emu.str");
 const bool VAR_3 = FUNC_0 (VAR_0->config, "asm.emu");
 if (VAR_3) {
  if (VAR_2) {
   FUNC_1 (VAR_0->config, "emu.str", "false");
  } else {
   FUNC_1 (VAR_0->config, "asm.emu", "false");
  }
 } else {
  FUNC_1 (VAR_0->config, "emu.str", "true");
 }
 VAR_1->view->refresh = 1;
}
