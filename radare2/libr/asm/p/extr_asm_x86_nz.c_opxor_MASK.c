
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_9__ {int type; scalar_t__ reg; } ;
struct TYPE_8__ {int operands_count; TYPE_7__* operands; } ;
typedef int RAsm ;
typedef TYPE_1__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int *,int *,TYPE_1__ const*,int) ;
 int FUNC_3 (int *,int *,TYPE_1__ const*,int) ;
 int FUNC_4 (int *,int *,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_5(RAsm *VAR_4, ut8 * VAR_5, const Opcode *VAR_6) {
 FUNC_1 (VAR_6);
 if (VAR_6->operands_count < 2) {
  return -1;
 }
 if (VAR_6->operands[0].type == 0x80 && VAR_6->operands[0].reg == VAR_3) {
  return -1;
 }
 if (VAR_6->operands[1].type == 0x80 && VAR_6->operands[0].reg == VAR_3) {
  return -1;
 }
 if (VAR_6->operands[1].type & VAR_0) {
  if (VAR_6->operands[0].type & VAR_1 &&
      VAR_6->operands[0].type & VAR_2) {
   return FUNC_2 (VAR_4, VAR_5, VAR_6, 0x30);
  }
  if (!FUNC_0 (&VAR_6->operands[0])) {
   return FUNC_4 (VAR_4, VAR_5, VAR_6);
  }
 }
 return FUNC_3 (VAR_4, VAR_5, VAR_6, 0x30);
}
