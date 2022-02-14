
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uqword; int udword; int uword; int sbyte; } ;
struct ud_operand {int size; TYPE_1__ lval; int type; } ;
struct ud {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ud*) ;
 int FUNC_1 (struct ud*) ;
 int FUNC_2 (struct ud*) ;
 int FUNC_3 (struct ud*) ;
 int FUNC_4 (struct ud*,unsigned int) ;

__attribute__((used)) static void
FUNC_5(struct ud* VAR_1, unsigned int VAR_2, struct ud_operand *VAR_3)
{
  VAR_3->size = FUNC_4(VAR_1, VAR_2);
  VAR_3->type = VAR_0;

  switch (VAR_3->size) {
  case 8: VAR_3->lval.sbyte = FUNC_3(VAR_1); break;
  case 16: VAR_3->lval.uword = FUNC_0(VAR_1); break;
  case 32: VAR_3->lval.udword = FUNC_1(VAR_1); break;
  case 64: VAR_3->lval.uqword = FUNC_2(VAR_1); break;
  default: return;
  }
}
