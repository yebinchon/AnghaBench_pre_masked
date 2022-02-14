
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hexagon_insn ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int) ;

hexagon_insn
FUNC_2
(char *VAR_1)
{
  hexagon_insn VAR_2;
  int VAR_3;

  for (VAR_2 = 0, VAR_3 = 0; *VAR_1; VAR_1++)
    {
      while (FUNC_0 (*VAR_1))
        VAR_1++;

      if (!*VAR_1)
        break;

      VAR_2 = (VAR_2 << 1) + ((*VAR_1 == '1' || *VAR_1 == '0')? 1: 0);

      VAR_3++;
    }

  FUNC_1 (VAR_3 == VAR_0 * 8);
  return (VAR_2);
}
