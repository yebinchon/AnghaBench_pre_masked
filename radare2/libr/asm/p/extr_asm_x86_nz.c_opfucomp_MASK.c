
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int operands_count; TYPE_1__* operands; } ;
struct TYPE_4__ {int type; int reg; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(RAsm *VAR_2, ut8 *VAR_3, const Opcode *VAR_4) {
 int VAR_5 = 0;
 switch (VAR_4->operands_count) {
 case 1:
  if ( VAR_4->operands[0].type & VAR_0 & ~VAR_1 ) {
   VAR_3[VAR_5++] = 0xdd;
   VAR_3[VAR_5++] = 0xe8 | VAR_4->operands[0].reg;
  } else {
   return -1;
  }
  break;
 case 0:
  VAR_3[VAR_5++] = 0xdd;
  VAR_3[VAR_5++] = 0xe9;
  break;
 default:
  return -1;
 }
 return VAR_5;
}
