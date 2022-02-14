
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {TYPE_1__* operands; } ;
struct TYPE_5__ {int type; int offset; int offset_sign; int* regs; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_3, ut8 *VAR_4, const Opcode *VAR_5) {
 FUNC_0 (VAR_5);
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;

 if (VAR_5->operands[0].type & VAR_0) {
  VAR_4[VAR_6++] = 0x0f;
  VAR_4[VAR_6++] = 0xae;
  VAR_7 = VAR_5->operands[0].offset * VAR_5->operands[0].offset_sign;
  if (VAR_7) {
   if (VAR_7 < VAR_2 || VAR_7 > VAR_1) {
    VAR_8 = 2;
   } else {
    VAR_8 = 1;
   }
  }
  VAR_4[VAR_6++] = (VAR_8 << 6) | (7 << 3) | VAR_5->operands[0].regs[0];
  if (VAR_8) {
   VAR_4[VAR_6++] = VAR_7;
   if (VAR_8 == 2) {
    VAR_4[VAR_6++] = VAR_7 >> 8;
    VAR_4[VAR_6++] = VAR_7 >> 16;
    VAR_4[VAR_6++] = VAR_7 >> 24;
   }
  }
 }
 return VAR_6;
}
