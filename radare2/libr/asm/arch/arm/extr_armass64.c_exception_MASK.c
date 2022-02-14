
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {scalar_t__ type; int immediate; } ;
typedef TYPE_2__ ArmOp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ut32 FUNC_0(ArmOp *VAR_2, ut32 VAR_3) {
 ut32 VAR_4 = VAR_1;

 if (VAR_2->operands[0].type == VAR_0) {
  int VAR_5 = VAR_2->operands[0].immediate;
  VAR_4 = VAR_3;
  VAR_4 += (((VAR_5 / 8) & 0xff) << 16);
  VAR_4 += VAR_5 << 29;
 }
 return VAR_4;
}
