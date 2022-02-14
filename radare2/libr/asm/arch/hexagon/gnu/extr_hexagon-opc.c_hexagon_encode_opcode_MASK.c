
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hexagon_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

hexagon_insn
FUNC_4
(const char *VAR_4)
{
  hexagon_insn VAR_5;
  int VAR_6;
  int VAR_7;

  for (VAR_5 = 0, VAR_6 = 0, VAR_7 = 0; *VAR_4; VAR_4++)
    {
      while (FUNC_1 (*VAR_4))
        VAR_4++;

      if (!*VAR_4)
        break;

      VAR_5 = (VAR_5 << 1) + ((*VAR_4 == '1')? 1: 0);

      VAR_6++;

      VAR_7 |= ((VAR_4 [0] == 'E' && VAR_4 [1] == 'E'));
    }

  if (VAR_6 != VAR_3 * 8)
    {
      FUNC_3 ("invalid number of bits: %d\n", VAR_6);
      FUNC_2 (VAR_0);
    }

  return (FUNC_0 (VAR_5, VAR_7? VAR_2: VAR_1));
}
