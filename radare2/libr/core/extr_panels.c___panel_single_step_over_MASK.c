
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;

void FUNC_3(RCore *VAR_0) {
 bool VAR_1 = FUNC_0 (VAR_0->config, "io.cache");
 FUNC_1 (VAR_0->config, "io.cache", 0);
 if (FUNC_0 (VAR_0->config, "cfg.debug")) {
  FUNC_2 (VAR_0, "dso", 0);
  FUNC_2 (VAR_0, ".dr*", 0);
 } else {
  FUNC_2 (VAR_0, "aeso", 0);
  FUNC_2 (VAR_0, ".ar*", 0);
 }
 FUNC_1 (VAR_0->config, "io.cache", VAR_1);
}
