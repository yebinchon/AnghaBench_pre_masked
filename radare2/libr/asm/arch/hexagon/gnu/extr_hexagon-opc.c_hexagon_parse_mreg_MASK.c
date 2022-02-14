
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
 int FUNC_1 (int const*,char**,char,int *,int ,int *,char) ;

char *
FUNC_2
(const hexagon_operand *VAR_2, hexagon_insn *VAR_3, const hexagon_opcode *VAR_4,
 char *VAR_5, long *VAR_6, int *VAR_7, char **VAR_8)
{
  int VAR_9;

  VAR_9 = FUNC_1 (VAR_2, &VAR_5, 'm', ((void*)0), 0, ((void*)0), '\0');
  if (VAR_9 < 0)
    return (((void*)0));

  if (FUNC_0
        (VAR_2, VAR_3, VAR_4, VAR_9, ((void*)0), VAR_0, VAR_0, VAR_8))
    {
      if (VAR_7)
        *VAR_7 = VAR_1;

      *VAR_6 = VAR_9;
      return (VAR_5);
    }

  return (((void*)0));
}
