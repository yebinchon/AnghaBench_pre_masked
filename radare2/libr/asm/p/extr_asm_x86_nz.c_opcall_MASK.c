
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_9__ {TYPE_1__* operands; } ;
struct TYPE_8__ {int bits; scalar_t__ pc; } ;
struct TYPE_7__ {int type; int reg; int* regs; int offset; int offset_sign; int immediate; int sign; scalar_t__ extended; } ;
typedef TYPE_2__ RAsm ;
typedef TYPE_3__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_3, ut8 *VAR_4, const Opcode *VAR_5) {
 FUNC_0 (VAR_5);
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (VAR_5->operands[0].type & VAR_0) {
  if (VAR_5->operands[0].reg == VAR_2) {
   return -1;
  }
  if (VAR_3->bits == 64 && VAR_5->operands[0].extended) {
   VAR_4[VAR_6++] = 0x41;
  }
  VAR_4[VAR_6++] = 0xff;
  VAR_9 = 3;
  VAR_4[VAR_6++] = VAR_9 << 6 | 2 << 3 | VAR_5->operands[0].reg;
 } else if (VAR_5->operands[0].type & VAR_1) {
  if (VAR_5->operands[0].regs[0] == VAR_2) {
   return -1;
  }
  VAR_4[VAR_6++] = 0xff;
  VAR_8 = VAR_5->operands[0].offset * VAR_5->operands[0].offset_sign;
  if (VAR_8) {
   VAR_9 = 1;
   if (VAR_8 > 127 || VAR_8 < -128) {
    VAR_9 = 2;
   }
  }
  VAR_4[VAR_6++] = VAR_9 << 6 | 2 << 3 | VAR_5->operands[0].regs[0];
  if (VAR_9) {
   VAR_4[VAR_6++] = VAR_8;
   if (VAR_9 == 2) {
    VAR_4[VAR_6++] = VAR_8 >> 8;
    VAR_4[VAR_6++] = VAR_8 >> 16;
    VAR_4[VAR_6++] = VAR_8 >> 24;
   }
  }
 } else {
  ut64 VAR_10 = VAR_3->pc;
  VAR_4[VAR_6++] = 0xe8;
  VAR_7 = VAR_5->operands[0].immediate * VAR_5->operands[0].sign;
  VAR_7 -= VAR_10 + 5;
  VAR_4[VAR_6++] = VAR_7;
  VAR_4[VAR_6++] = VAR_7 >> 8;
  VAR_4[VAR_6++] = VAR_7 >> 16;
  VAR_4[VAR_6++] = VAR_7 >> 24;
 }
 return VAR_6;
}
