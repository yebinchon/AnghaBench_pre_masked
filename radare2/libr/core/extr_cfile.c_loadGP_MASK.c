
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_6__ {int config; TYPE_1__* anal; int num; int assembler; } ;
struct TYPE_5__ {int reg; } ;
typedef TYPE_2__ RCore ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(RCore *VAR_1) {
 if (FUNC_0 (VAR_1->assembler)) {
  ut64 VAR_2 = FUNC_4 (VAR_1->num, "loc._gp");
  if (!VAR_2 || VAR_2 == VAR_0) {
   FUNC_1 (VAR_1->config, "anal.roregs", "zero");
   FUNC_3 (VAR_1, "10aes@entry0");
   FUNC_1 (VAR_1->config, "anal.roregs", "zero,gp");
   VAR_2 = FUNC_5 (VAR_1->anal->reg, "gp");
  }

  FUNC_2 (VAR_1->config, "anal.gp", VAR_2);
 }
}
