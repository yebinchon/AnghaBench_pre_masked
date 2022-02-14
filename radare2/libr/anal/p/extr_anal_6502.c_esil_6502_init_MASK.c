
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* anal; } ;
struct TYPE_4__ {scalar_t__ reg; } ;
typedef TYPE_2__ RAnalEsil ;


 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_2 (RAnalEsil *VAR_0) {
 if (VAR_0->anal && VAR_0->anal->reg) {
  FUNC_1 (VAR_0->anal->reg, FUNC_0 (VAR_0->anal->reg, "pc", -1), 0x0000);
  FUNC_1 (VAR_0->anal->reg, FUNC_0 (VAR_0->anal->reg, "sp", -1), 0xff);
  FUNC_1 (VAR_0->anal->reg, FUNC_0 (VAR_0->anal->reg, "a", -1), 0x00);
  FUNC_1 (VAR_0->anal->reg, FUNC_0 (VAR_0->anal->reg, "x", -1), 0x00);
  FUNC_1 (VAR_0->anal->reg, FUNC_0 (VAR_0->anal->reg, "y", -1), 0x00);
  FUNC_1 (VAR_0->anal->reg, FUNC_0 (VAR_0->anal->reg, "flags", -1), 0x00);
 }
 return 1;
}
