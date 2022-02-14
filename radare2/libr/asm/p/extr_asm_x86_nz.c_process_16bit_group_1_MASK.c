
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {TYPE_1__* operands; } ;
struct TYPE_5__ {int immediate; int sign; int reg; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_1, ut8 *VAR_2, const Opcode *VAR_3, int VAR_4) {
 FUNC_0 (VAR_3);
 int VAR_5 = 0;
 int VAR_6 = VAR_3->operands[1].immediate * VAR_3->operands[1].sign;

 VAR_2[VAR_5++] = 0x66;
 if (VAR_3->operands[1].immediate < 128) {
  VAR_2[VAR_5++] = 0x83;
  VAR_2[VAR_5++] = VAR_3->operands[0].reg | (0xc0 + VAR_4 + VAR_3->operands[0].reg);
 } else {
  if (VAR_3->operands[0].reg == VAR_0) {
   VAR_2[VAR_5++] = 0x05 + VAR_4;
  } else {
   VAR_2[VAR_5++] = 0x81;
   VAR_2[VAR_5++] = (0xc0 + VAR_4) | VAR_3->operands[0].reg;
  }
 }
 VAR_2[VAR_5++] = VAR_6;
 if (VAR_3->operands[1].immediate > 127) {
  VAR_2[VAR_5++] = VAR_6 >> 8;
 }

 return VAR_5;
}
