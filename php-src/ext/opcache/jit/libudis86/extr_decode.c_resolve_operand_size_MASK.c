
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ud_operand_size_t ;
struct ud {unsigned int opr_mode; int dis_mode; TYPE_1__* itab_entry; int vex_op; } ;
struct TYPE_2__ {int prefix; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;





 int FUNC_1 (int) ;
 int FUNC_2 (struct ud const*) ;

__attribute__((used)) static unsigned int
FUNC_3(const struct ud* VAR_2, ud_operand_size_t VAR_3)
{
  switch (VAR_3) {
  case 131:
    return VAR_2->opr_mode;
  case 128:
    return VAR_2->opr_mode == 16 ? 16 : 32;
  case 129:
    return VAR_2->opr_mode == 16 ? 32 : VAR_2->opr_mode;
  case 132:
    return VAR_2->dis_mode == 64 ? 64 : 32;
  case 130:
    FUNC_1(VAR_2->vex_op != 0);
    return (FUNC_0(VAR_2->itab_entry->prefix) && FUNC_2(VAR_2)) ? VAR_1 : VAR_0;
  default:
    return VAR_3;
  }
}
