
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_5__ {int csr_reg_str; int csr; int dest_reg_str; int dest_reg; int src0_reg_str; int src0_reg; int src1_reg_str; int src1_reg; TYPE_1__ op_decode; } ;
typedef TYPE_2__ RAsmLm32Instruction ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;



__attribute__((used)) static int FUNC_2(RAsmLm32Instruction *VAR_0) {
 switch (VAR_0->op_decode.type) {
 case 132:
 case 133:
 case 131:
 case 130:
 case 128:
  if (FUNC_1 (VAR_0->dest_reg, VAR_0->dest_reg_str)) {
   return -1;
  }
  if (FUNC_1 (VAR_0->src0_reg, VAR_0->src0_reg_str)) {
   return -1;
  }
  break;
 case 136:
  if (FUNC_1 (VAR_0->src0_reg, VAR_0->src0_reg_str)) {
   return -1;
  }
  break;
 case 129:
  if (FUNC_1 (VAR_0->dest_reg, VAR_0->dest_reg_str)) {
   return -1;
  }
  if (FUNC_1 (VAR_0->src0_reg, VAR_0->src0_reg_str)) {
   return -1;
  }
  if (FUNC_1 (VAR_0->src1_reg, VAR_0->src1_reg_str)) {
   return -1;
  }
  break;
 case 134:
  if (FUNC_1 (VAR_0->src0_reg, VAR_0->src0_reg_str)) {
   return -1;
  }
  if (FUNC_0 (VAR_0->csr, VAR_0->csr_reg_str)) {
   return -1;
  }
  break;
 case 138:
  if (FUNC_1 (VAR_0->dest_reg, VAR_0->dest_reg_str)) {
   return -1;
  }
  if (FUNC_0 (VAR_0->csr, VAR_0->csr_reg_str)) {
   return -1;
  }
  break;
 case 135:
 case 137:
  break;
 default:
  return -1;
 }
 return 0;
}
