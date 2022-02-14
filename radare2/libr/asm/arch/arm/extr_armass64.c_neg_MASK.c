
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_6__ {int operands_count; TYPE_1__* operands; } ;
struct TYPE_5__ {int reg; } ;
typedef TYPE_2__ ArmOp ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static ut32 FUNC_1(ArmOp *VAR_0) {
 if (VAR_0->operands_count < 2) {
  return -1;
 }
 VAR_0->operands_count++;
 VAR_0->operands[2] = VAR_0->operands[1];
 VAR_0->operands[1].reg = 31;

 return FUNC_0 (VAR_0, 0xd1);
}
