
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int config; TYPE_1__* print; } ;
struct TYPE_5__ {scalar_t__ cur_enabled; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static void FUNC_3(RCore *VAR_0) {
 bool VAR_1 = FUNC_0 (VAR_0->config, "io.cache");
 FUNC_1 (VAR_0->config, "io.cache", 0);
 if (FUNC_0 (VAR_0->config, "cfg.debug")) {
  if (VAR_0->print->cur_enabled) {
   FUNC_2 (VAR_0, "dcr", 0);
   VAR_0->print->cur_enabled = 0;
  } else {
   FUNC_2 (VAR_0, "dso", 0);
   FUNC_2 (VAR_0, ".dr*", 0);
  }
 } else {
  FUNC_2 (VAR_0, "aeso", 0);
  FUNC_2 (VAR_0, ".ar*", 0);
 }
 FUNC_1 (VAR_0->config, "io.cache", VAR_1);
}
