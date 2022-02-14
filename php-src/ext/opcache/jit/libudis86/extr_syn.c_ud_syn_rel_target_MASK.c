
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long const uint64_t ;
struct TYPE_2__ {unsigned long long const sbyte; unsigned long long const sword; unsigned long long const sdword; } ;
struct ud_operand {int size; TYPE_1__ lval; } ;
struct ud {int adr_mode; int opr_mode; unsigned long long const pc; } ;


 int FUNC_0 (int) ;

uint64_t
FUNC_1(struct ud *VAR_0, struct ud_operand *VAR_1)
{

  const uint64_t VAR_2 = 0xffffffffffffffffull >> (64 - VAR_0->adr_mode);



  switch (VAR_1->size) {
  case 8 : return (VAR_0->pc + VAR_1->lval.sbyte) & VAR_2;
  case 16: return (VAR_0->pc + VAR_1->lval.sword) & VAR_2;
  case 32: return (VAR_0->pc + VAR_1->lval.sdword) & VAR_2;
  default: FUNC_0(!"invalid relative offset size.");
    return 0ull;
  }
}
