
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
struct TYPE_4__ {scalar_t__ type; int reg; int immediate; } ;
typedef TYPE_2__ ArmOp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static ut32 FUNC_1(ArmOp *VAR_3, ut64 VAR_4, ut32 VAR_5) {
 ut64 VAR_6 = 0LL;
 ut32 VAR_7 = VAR_5;
 if (VAR_3->operands[0].type == VAR_1) {
  VAR_7 += ((VAR_3->operands[0].reg & 0xff) << 24);
 } else {
  FUNC_0 ("Usage: adrp x0, addr\n");
  return VAR_2;
 }
 if (VAR_3->operands[1].type == VAR_0) {

  VAR_6 = VAR_3->operands[1].immediate - VAR_4;
  VAR_6 /= 4;
 } else {
  FUNC_0 ("Usage: adrp, x0, addr\n");
  return VAR_2;
 }
 ut8 VAR_8 = VAR_6;
 ut8 VAR_9 = (VAR_6 >> 3) & 0xff;







 VAR_7 += VAR_8 << 16;
 VAR_7 += VAR_9 << 8;
 return VAR_7;
}
