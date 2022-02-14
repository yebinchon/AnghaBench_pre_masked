
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uqword; int udword; int uword; int ubyte; } ;
struct ud_operand {int offset; TYPE_1__ lval; } ;
struct ud {int dummy; } ;


 int FUNC_0 (struct ud*) ;
 int FUNC_1 (struct ud*) ;
 int FUNC_2 (struct ud*) ;
 int FUNC_3 (struct ud*) ;

__attribute__((used)) static void
FUNC_4(struct ud* VAR_0, unsigned int VAR_1, struct ud_operand *VAR_2)
{
  switch (VAR_1) {
  case 8:
    VAR_2->offset = 8;
    VAR_2->lval.ubyte = FUNC_3(VAR_0);
    break;
  case 16:
    VAR_2->offset = 16;
    VAR_2->lval.uword = FUNC_0(VAR_0);
    break;
  case 32:
    VAR_2->offset = 32;
    VAR_2->lval.udword = FUNC_1(VAR_0);
    break;
  case 64:
    VAR_2->offset = 64;
    VAR_2->lval.uqword = FUNC_2(VAR_0);
    break;
  default:
      return;
  }
}
