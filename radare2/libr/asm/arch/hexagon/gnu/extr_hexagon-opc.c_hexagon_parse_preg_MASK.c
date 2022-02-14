
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hexagon_operand ;
typedef int hexagon_opcode ;
typedef int hexagon_insn ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int *,int const*,int,int *,int ,int ,char**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,char**,char,int ,int ,int *,char) ;

char *
FUNC_2
(const hexagon_operand *VAR_4, hexagon_insn *VAR_5, const hexagon_opcode *VAR_6,
 char *VAR_7, long *VAR_8, int *VAR_9, char **VAR_10)
{
  int VAR_11;

  VAR_11 = FUNC_1 (VAR_4, &VAR_7, 'p', VAR_2, VAR_3, ((void*)0), '\0');
  if (VAR_11 < 0)
    return (((void*)0));

  if (FUNC_0
        (VAR_4, VAR_5, VAR_6, VAR_11, ((void*)0), VAR_0, VAR_0, VAR_10))
    {
      if (VAR_9)
        *VAR_9 = VAR_1;

      *VAR_8 = VAR_11;
      return (VAR_7);
    }

  return (((void*)0));
}
