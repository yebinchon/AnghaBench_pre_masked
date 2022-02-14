
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riscv_opcode {int match; int mask; } ;
typedef int insn_t ;



__attribute__((used)) static int FUNC_0(const struct riscv_opcode *VAR_0, insn_t VAR_1)
{
  return ((VAR_1 ^ VAR_0->match) & VAR_0->mask) == 0;
}
