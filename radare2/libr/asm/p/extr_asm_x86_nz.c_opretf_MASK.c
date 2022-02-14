
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
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(RAsm *VAR_2, ut8 *VAR_3, const Opcode *VAR_4) {
 int VAR_5 = 0;
 st32 VAR_6 = 0;
 if (VAR_4->operands[0].type & VAR_0) {
  VAR_6 = VAR_4->operands[0].immediate * VAR_4->operands[0].sign;
  VAR_3[VAR_5++] = 0xca;
  VAR_3[VAR_5++] = VAR_6;
  VAR_3[VAR_5++] = VAR_6 >> 8;
 } else if (VAR_4->operands[0].type == VAR_1) {
  VAR_3[VAR_5++] = 0xcb;
 }
 return VAR_5;
}
