
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ op; int src0_reg; } ;
typedef TYPE_1__ RAsmLm32Instruction ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(RAsmLm32Instruction *VAR_1) {
 return (VAR_1->op == VAR_0) && !VAR_1->src0_reg;
}
