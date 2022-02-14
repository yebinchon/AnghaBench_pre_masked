
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ud_operand {int dummy; } ;
struct ud {int vex_op; int vex_b2; int vex_b1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ud*,struct ud_operand*,int ,int,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct ud *VAR_1, struct ud_operand *VAR_2, unsigned VAR_3)
{
  uint8_t VAR_4;
  FUNC_0(VAR_1->vex_op != 0);
  VAR_4 = ((VAR_1->vex_op == 0xc4 ? VAR_1->vex_b2 : VAR_1->vex_b1) >> 3) & 0xf;
  FUNC_1(VAR_1, VAR_2, VAR_0, (0xf & ~VAR_4), VAR_3);
}
