
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {int type; int immediate; int reg; } ;
typedef TYPE_2__ ArmOp ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ut32 FUNC_0(ArmOp *VAR_2, int VAR_3) {
 ut32 VAR_4 = VAR_1;
 ut64 VAR_5 = 0LL;

 if (VAR_2->operands[1].type & VAR_0) {

  VAR_5 = VAR_2->operands[1].immediate - VAR_3;
  VAR_5 /= 4;
 }
 VAR_4 = 0x00000030;
 VAR_4 += 0x01000000 * VAR_2->operands[0].reg;
 ut8 VAR_6 = VAR_5;
 ut8 VAR_7 = (VAR_5 >> 3) & 0xff;
 ut8 VAR_8 = (VAR_5 >> (8 + 7)) & 0xff;
 VAR_4 += VAR_6 << 29;
 VAR_4 += VAR_7 << 16;
 VAR_4 += VAR_8 << 24;
 return VAR_4;
}
