
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arc_insn ;


 int FUNC_0 (int) ;

int
FUNC_1(arc_insn VAR_0, int VAR_1)
{

  return ((!VAR_1 && ((VAR_0 & FUNC_0(-1)) == FUNC_0(0x4)) &&
          (((VAR_0 >> 18) & 0xf) == 0x8)) ||
   (VAR_1 && ((VAR_0 & FUNC_0(-1)) == FUNC_0(0xf))) ||
   (!VAR_1 && ((VAR_0 & FUNC_0(-1)) == FUNC_0(0x1))) ||
   (VAR_1 && ((VAR_0 & FUNC_0(-1)) == FUNC_0(0x1f))) ||
   (!VAR_1 && ((VAR_0 & FUNC_0(-1)) == FUNC_0(0x0))) ||
   (VAR_1 && ((VAR_0 & FUNC_0(-1)) == FUNC_0(0x1e))));
}
