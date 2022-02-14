
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int imm; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ op; } ;
typedef TYPE_2__ HexOp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_0(HexOp *VAR_2)
{
 if ((VAR_1 != 1) && (VAR_2->type == VAR_0)) {
  VAR_2->op.imm = ((VAR_2->op.imm) & 0x3F) | (VAR_1);
 }
 VAR_1 = 1;
}
