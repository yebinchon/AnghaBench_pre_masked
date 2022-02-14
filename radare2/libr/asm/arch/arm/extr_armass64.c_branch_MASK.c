
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {int type; int immediate; int reg; } ;
typedef TYPE_2__ ArmOp ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ut32 FUNC_0(ArmOp *VAR_2, ut64 VAR_3, int VAR_4) {
 ut32 VAR_5 = VAR_1;
 int VAR_6 = 0;
 if (VAR_2->operands[0].type & VAR_0) {
  VAR_6 = VAR_2->operands[0].immediate;
  if (!(VAR_6 & 0x3 || VAR_6 > 0x7ffffff)) {
   if (VAR_6 >= VAR_3) {
    VAR_6 -= VAR_3;
   } else {
    VAR_6 -= VAR_3;
    VAR_6 = VAR_6 & 0xfffffff;
    VAR_4 |= 3;
   }
   VAR_6 = VAR_6 >> 2;
   int VAR_7 = VAR_6 >> 24;
   int VAR_8 = VAR_6 >> 16;
   int VAR_9 = (VAR_6 & 0xff00) >> 8;
   VAR_6 &= 0xff;
   VAR_5 = VAR_4;
   VAR_5 |= VAR_6 << 24;
   VAR_5 |= VAR_9 << 16;
   VAR_5 |= VAR_8 << 8;
   VAR_5 |= VAR_7;
  }
 } else {
  VAR_6 = VAR_2->operands[0].reg;
  if (VAR_6 < 0 || VAR_6 > 31) {
   return -1;
  }
  VAR_6 = VAR_6 << 5;
  int VAR_10 = VAR_6 >> 8;
  VAR_6 &= 0xff;
  VAR_5 = VAR_4;
  VAR_5 |= VAR_6 << 24;
  VAR_5 |= VAR_10 << 16;
 }
 return VAR_5;
}
