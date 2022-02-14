
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* seg; void* off; } ;
struct TYPE_4__ {TYPE_1__ ptr; } ;
struct ud_operand {int size; TYPE_2__ lval; void* type; } ;
struct ud {int opr_mode; } ;


 void* VAR_0 ;
 void* FUNC_0 (struct ud*) ;
 void* FUNC_1 (struct ud*) ;

__attribute__((used)) static void
FUNC_2(struct ud* VAR_1, struct ud_operand *VAR_2)
{
  if (VAR_1->opr_mode == 16) {

    VAR_2->type = VAR_0;
    VAR_2->size = 32;
    VAR_2->lval.ptr.off = FUNC_0(VAR_1);
    VAR_2->lval.ptr.seg = FUNC_0(VAR_1);
  } else {

    VAR_2->type = VAR_0;
    VAR_2->size = 48;
    VAR_2->lval.ptr.off = FUNC_1(VAR_1);
    VAR_2->lval.ptr.seg = FUNC_0(VAR_1);
  }
}
