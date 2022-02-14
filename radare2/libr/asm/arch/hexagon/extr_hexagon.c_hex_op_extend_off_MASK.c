
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int imm; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ op; } ;
typedef TYPE_2__ HexOp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(HexOp *VAR_2, int VAR_3)
{
 if ((VAR_1 != 1) && (VAR_2->type == VAR_0)) {
  VAR_2->op.imm = (VAR_2->op.imm) >> VAR_3;
  FUNC_0(VAR_2);
 }
}
