
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ud_operand {int dummy; } ;
struct ud {int dis_mode; scalar_t__ vex_op; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ud*) ;
 int FUNC_2 (struct ud*,struct ud_operand*,int ,int,unsigned int) ;
 int FUNC_3 (struct ud*) ;

__attribute__((used)) static int
FUNC_4(struct ud *VAR_1, struct ud_operand *VAR_2, unsigned VAR_3)
{
  uint8_t VAR_4 = FUNC_3(VAR_1);
  uint8_t VAR_5 = VAR_1->dis_mode == 64 ? 0xf : 0x7;
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->vex_op != 0);
  FUNC_2(VAR_1, VAR_2, VAR_0, VAR_5 & (VAR_4 >> 4), VAR_3);
  return 0;
}
