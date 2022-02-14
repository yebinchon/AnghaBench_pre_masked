
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riscv_opcode {int dummy; } ;
typedef int insn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct riscv_opcode const*,int) ;

__attribute__((used)) static int FUNC_1(const struct riscv_opcode *VAR_4, insn_t VAR_5)
{
  int VAR_6 = (VAR_5 & VAR_0) >> VAR_2;
  int VAR_7 = (VAR_5 & VAR_1) >> VAR_3;
  return FUNC_0 (VAR_4, VAR_5) && VAR_6 == VAR_7;
}
