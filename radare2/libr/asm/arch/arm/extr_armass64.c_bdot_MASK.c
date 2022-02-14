
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef int ut32 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {int immediate; } ;
typedef TYPE_2__ ArmOp ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static ut32 FUNC_1(ArmOp *VAR_1, ut64 VAR_2, int VAR_3) {
 ut32 VAR_4 = VAR_0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 VAR_5 = VAR_1->operands[0].immediate;


 if (!(VAR_5 & 0x3 || VAR_5 > 0x7ffffff)) {
  VAR_5 -= VAR_2;
  VAR_4 = VAR_3;
  if (VAR_5 < 0) {
   VAR_5 *= -1;
   VAR_6 = (VAR_5 << 3) - 1;
   VAR_4 |= (0xff - VAR_6) << 24;

   VAR_6 = FUNC_0(VAR_5, 5);
   VAR_4 |= VAR_6 << 16;

   VAR_6 = FUNC_0(VAR_5, 13);
   VAR_4 |= VAR_6 << 8;
  } else {
   VAR_4 |= (VAR_5 & 31) << 27;
   VAR_4 |= (0xff & (VAR_5 >> 5)) << 16;
   VAR_4 |= (0xff & (VAR_5 >> 13)) << 8;
  }
 }

 return VAR_4;
}
