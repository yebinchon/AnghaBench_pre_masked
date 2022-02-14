
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* anal; int config; } ;
struct TYPE_4__ {int * esil; int reg; } ;
typedef TYPE_2__ RCore ;
typedef int RConfigHold ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*,char*,char*,char*,int *) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static bool FUNC_6(RCore *VAR_2, RConfigHold *VAR_3) {
 FUNC_1 (VAR_3, "esil.romem", "asm.trace", "dbg.trace",
   "esil.nonull", "dbg.follow", ((void*)0));
 FUNC_2 (VAR_2->config, "esil.romem", "true");
 FUNC_2 (VAR_2->config, "asm.trace", "true");
 FUNC_2 (VAR_2->config, "dbg.trace", "true");
 FUNC_2 (VAR_2->config, "esil.nonull", "true");
 FUNC_3 (VAR_2->config, "dbg.follow", 0);
 const char *VAR_4 = FUNC_4 (VAR_2->anal->reg, VAR_0);
 const char *VAR_5 = FUNC_4 (VAR_2->anal->reg, VAR_1);
 if ((VAR_4 && !FUNC_5 (VAR_2->anal->reg, VAR_4)) && (VAR_5 && !FUNC_5 (VAR_2->anal->reg, VAR_5))) {
  FUNC_0 ("Stack isn't initialized.\n");
  FUNC_0 ("Try running aei and aeim commands before aft for default stack initialization\n");
  return 0;
 }
 return (VAR_2->anal->esil != ((void*)0));
}
