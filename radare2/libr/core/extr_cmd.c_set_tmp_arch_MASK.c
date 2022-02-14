
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fixedarch; int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(RCore *VAR_0, char *VAR_1, char **VAR_2) {
 if (!VAR_2) {
  FUNC_0 ("tmparch should be set\n");
 }
 *VAR_2 = FUNC_3 (FUNC_1 (VAR_0->config, "asm.arch"));
 FUNC_2 (VAR_0->config, "asm.arch", VAR_1);
 VAR_0->fixedarch = 1;
 return 1;
}
