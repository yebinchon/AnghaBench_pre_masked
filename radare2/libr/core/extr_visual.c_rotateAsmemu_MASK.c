
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static const char *FUNC_2(RCore *VAR_0) {
 const bool VAR_1 = FUNC_0 (VAR_0->config, "emu.str");
 const bool VAR_2 = FUNC_0 (VAR_0->config, "asm.emu");
 if (VAR_2) {
  if (VAR_1) {
   FUNC_1 (VAR_0->config, "emu.str", "false");
  } else {
   FUNC_1 (VAR_0->config, "asm.emu", "false");
  }
 } else {
  FUNC_1 (VAR_0->config, "emu.str", "true");
 }
 return "pd";
}
