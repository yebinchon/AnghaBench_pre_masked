
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arc_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

int
FUNC_3 (arc_insn VAR_2)
{
  int VAR_3 = 0;



  if ((VAR_2 & (FUNC_2(-1) | FUNC_1(-1) | FUNC_0(-1))) ==
      (FUNC_2(2) | FUNC_1(VAR_1) | FUNC_0(VAR_0)))
    {
      VAR_3 = VAR_2 & 0x1ff;
      if (VAR_3 & 0x100) {
       VAR_3 |= ~0x1ff;
      }
    }
  return -VAR_3;
}
