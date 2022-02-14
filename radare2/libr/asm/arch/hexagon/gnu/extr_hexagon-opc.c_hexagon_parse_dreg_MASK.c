
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
 int FUNC_2 (char*,char*,int,...) ;

__attribute__((used)) static char *
FUNC_3
(const hexagon_operand *VAR_4, hexagon_insn *VAR_5, const hexagon_opcode *VAR_6,
 char *VAR_7, long *VAR_8, int *VAR_9, char **VAR_10)
{
  int VAR_11;
  int VAR_12;

  VAR_11 = FUNC_1 (VAR_4, &VAR_7, 'r', VAR_2, VAR_3, ((void*)0), '\0');
  VAR_12 = FUNC_1 (VAR_4, &VAR_7, ':', VAR_2, VAR_3, ((void*)0), '\0');
  if (VAR_11 < 0 || VAR_12 < 0)
    return (((void*)0));


  if (VAR_11 % 2 != 1)
    {
      if (VAR_10)
        {
            static char VAR_13 [100];
            FUNC_2 (VAR_13, "invalid odd register number: %d", VAR_11);
            *VAR_10 = VAR_13;
        }
      return ((void*)0);
    }


  if (VAR_12 % 2 != 0)
    {
      if (VAR_10)
        {
            static char VAR_14 [100];
            FUNC_2 (VAR_14, "invalid even register number: %d", VAR_12);
            *VAR_10 = VAR_14;
        }
      return ((void*)0);
    }


  if (VAR_11 != VAR_12 + 1)
    {
      if (VAR_10)
        {
            static char VAR_15 [100];
            FUNC_2 (VAR_15, "registers must be consecutive: %d:%d",
                      VAR_11, VAR_12);
            *VAR_10 = VAR_15;
        }
      return ((void*)0);
    }

  if (FUNC_0
        (VAR_4, VAR_5, VAR_6, VAR_12, ((void*)0), VAR_0, VAR_0, VAR_10))
    {
      if (VAR_9)
        *VAR_9 = VAR_1;

      *VAR_8 = VAR_12;
      return (VAR_7);
    }

  return ((void*)0);
}
