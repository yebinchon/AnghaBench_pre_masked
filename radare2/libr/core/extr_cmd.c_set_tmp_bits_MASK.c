
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fixedbits; int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(RCore *VAR_0, int VAR_1, char **VAR_2) {
 if (!VAR_2) {
  FUNC_0 ("tmpbits should be set\n");
 }
 *VAR_2 = FUNC_3 (FUNC_1 (VAR_0->config, "asm.bits"));
 FUNC_2 (VAR_0->config, "asm.bits", VAR_1);
 VAR_0->fixedbits = 1;
 return 1;
}
