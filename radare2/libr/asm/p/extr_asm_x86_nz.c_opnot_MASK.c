
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {TYPE_1__* operands; } ;
struct TYPE_5__ {int reg; int type; int dest_size; scalar_t__ extended; scalar_t__ explicit_size; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_3, ut8 * VAR_4, const Opcode *VAR_5) {
 FUNC_0 (VAR_5);
 int VAR_6 = 0;

 if (VAR_5->operands[0].reg == VAR_2) {
  return -1;
 }

 int VAR_7 = VAR_5->operands[0].type & VAR_0;
 if (VAR_5->operands[0].explicit_size) {
  VAR_7 = VAR_5->operands[0].dest_size;
 }

 int VAR_8 = 1 << 6;
 bool VAR_9 = 0;
 if (VAR_7 & VAR_1) {
  VAR_9 = 1;
  VAR_8 |= 1 << 3;
 }
 if (VAR_5->operands[0].extended) {
  VAR_9 = 1;
  VAR_8 |= 1;
 }

 if (VAR_9) {
  VAR_4[VAR_6++] = VAR_8;
 }
 VAR_4[VAR_6++] = 0xf7;
 VAR_4[VAR_6++] = 0xd0 | VAR_5->operands[0].reg;

 return VAR_6;
}
