
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int imm; } ;
struct TYPE_8__ {TYPE_2__ offset; scalar_t__ preind; scalar_t__ writeback; } ;
struct TYPE_6__ {scalar_t__ kind; scalar_t__ operator_present; } ;
struct TYPE_9__ {TYPE_3__ addr; TYPE_1__ shifter; } ;
typedef TYPE_4__ aarch64_opnd_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_1, size_t VAR_2,
    const aarch64_opnd_info *VAR_3,
    const char *VAR_4)
{
  if (VAR_3->addr.writeback)
    {
      if (VAR_3->addr.preind)
 FUNC_1 (VAR_1, VAR_2, "[%s, #%d]!", VAR_4, VAR_3->addr.offset.imm);
      else
 FUNC_1 (VAR_1, VAR_2, "[%s], #%d", VAR_4, VAR_3->addr.offset.imm);
    }
  else
    {
      if (VAR_3->shifter.operator_present)
 {
   FUNC_0 (VAR_3->shifter.kind == VAR_0);
   FUNC_1 (VAR_1, VAR_2, "[%s, #%d, mul vl]",
      VAR_4, VAR_3->addr.offset.imm);
 }
      else if (VAR_3->addr.offset.imm)
 FUNC_1 (VAR_1, VAR_2, "[%s, #%d]", VAR_4, VAR_3->addr.offset.imm);
      else
 FUNC_1 (VAR_1, VAR_2, "[%s]", VAR_4);
    }
}
