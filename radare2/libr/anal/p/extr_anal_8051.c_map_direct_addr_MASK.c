
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut32 ;
struct TYPE_3__ {int reg; } ;
typedef TYPE_1__ RAnal ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static ut32 FUNC_1(RAnal *VAR_0, ut8 VAR_1) {
 if (VAR_1 < 0x80) {
  return VAR_1 + FUNC_0 (VAR_0->reg, "_idata");
 } else {
  return VAR_1 + FUNC_0 (VAR_0->reg, "_sfr");
 }
}
