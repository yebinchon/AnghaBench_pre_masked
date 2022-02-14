
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_value; } ;
struct TYPE_3__ {int config; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RConfigNode ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode*) VAR_1;
 if (FUNC_0 (VAR_2->config, "cfg.debug")) {
  if (VAR_3->i_value) {
   FUNC_1 (VAR_2->config, "cmd.prompt",
    ".dr*; drd; sr PC;pi 1;s-");
  } else {
   FUNC_1 (VAR_2->config, "cmd.prompt", ".dr*");
  }
 }
 return 1;
}
