
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int st32 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {int type; int immediate; int sign; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(RAsm *VAR_1, ut8 *VAR_2, const Opcode *VAR_3) {
 int VAR_4 = 0;
 if (VAR_3->operands[0].type & VAR_0) {
  st32 VAR_5 = VAR_3->operands[0].immediate * VAR_3->operands[0].sign;
  if (VAR_5 <= 255 && VAR_5 >= -128) {
   VAR_2[VAR_4++] = 0xcd;
   VAR_2[VAR_4++] = VAR_5;
  }
 }
 return VAR_4;
}
