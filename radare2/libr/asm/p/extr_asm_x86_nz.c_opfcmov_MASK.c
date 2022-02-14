
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {char* mnemonic; int operands_count; TYPE_1__* operands; } ;
struct TYPE_4__ {int type; int reg; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_2, ut8 *VAR_3, const Opcode *VAR_4) {
 int VAR_5 = 0;
 char* VAR_6 = VAR_4->mnemonic + FUNC_1("fcmov");
 switch (VAR_4->operands_count) {
 case 2:
  if ( VAR_4->operands[0].type & VAR_0 & ~VAR_1 && VAR_4->operands[0].reg == 0 &&
       VAR_4->operands[1].type & VAR_0 & ~VAR_1 ) {
   if ( !FUNC_0( VAR_6, "b" ) ) {
    VAR_3[VAR_5++] = 0xda;
    VAR_3[VAR_5++] = 0xc0 | VAR_4->operands[1].reg;
   } else if ( !FUNC_0( VAR_6, "e" ) ) {
    VAR_3[VAR_5++] = 0xda;
    VAR_3[VAR_5++] = 0xc8 | VAR_4->operands[1].reg;
   } else if ( !FUNC_0( VAR_6, "be" ) ) {
    VAR_3[VAR_5++] = 0xda;
    VAR_3[VAR_5++] = 0xd0 | VAR_4->operands[1].reg;
   } else if ( !FUNC_0( VAR_6, "u" ) ) {
    VAR_3[VAR_5++] = 0xda;
    VAR_3[VAR_5++] = 0xd8 | VAR_4->operands[1].reg;
   } else if ( !FUNC_0( VAR_6, "nb" ) ) {
    VAR_3[VAR_5++] = 0xdb;
    VAR_3[VAR_5++] = 0xc0 | VAR_4->operands[1].reg;
   } else if ( !FUNC_0( VAR_6, "ne" ) ) {
    VAR_3[VAR_5++] = 0xdb;
    VAR_3[VAR_5++] = 0xc8 | VAR_4->operands[1].reg;
   } else if ( !FUNC_0( VAR_6, "nbe" ) ) {
    VAR_3[VAR_5++] = 0xdb;
    VAR_3[VAR_5++] = 0xd0 | VAR_4->operands[1].reg;
   } else if ( !FUNC_0( VAR_6, "nu" ) ) {
    VAR_3[VAR_5++] = 0xdb;
    VAR_3[VAR_5++] = 0xd8 | VAR_4->operands[1].reg;
   } else {
    return -1;
   }
  } else {
   return -1;
  }
  break;
 default:
  return -1;
 }
 return VAR_5;
}
