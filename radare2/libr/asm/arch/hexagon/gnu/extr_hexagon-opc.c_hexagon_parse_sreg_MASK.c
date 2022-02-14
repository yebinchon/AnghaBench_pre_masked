
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ hexagon_operand ;
typedef int hexagon_opcode ;
typedef int hexagon_insn ;
struct TYPE_8__ {int flags; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int *,int const*,int,int *,int ,int ,char**) ;
 int FUNC_1 (TYPE_1__ const*,char**,char,TYPE_2__*,int ,size_t*,char) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static char *
FUNC_3
(const hexagon_operand *VAR_8, hexagon_insn *VAR_9, const hexagon_opcode *VAR_10,
 char *VAR_11, long *VAR_12, int *VAR_13, char **VAR_14)
{
  size_t VAR_15;
  int VAR_16;
  static char VAR_17 [150];

  VAR_16 = FUNC_1 (VAR_8, &VAR_11, '\0', VAR_5, VAR_6, &VAR_15, '\0');
  if (VAR_16 < 0)
    return (((void*)0));

  if (VAR_13)
    *VAR_13 = 0;

  if (!VAR_7)
    if ((VAR_8->flags & VAR_3)
        && (VAR_5 [VAR_15].flags & VAR_4))
      {
        if (VAR_14)
          {
            FUNC_2 (VAR_17, "cannot write to read-only register `%s'.",
                     VAR_5 [VAR_15].name);
            *VAR_14 = VAR_17;
          }
        if (VAR_13)
          *VAR_13 |= VAR_1;
      }

  if (FUNC_0
        (VAR_8, VAR_9, VAR_10, VAR_16, ((void*)0), VAR_0, VAR_0, VAR_14))
    {
      if (VAR_13)
        *VAR_13 |= VAR_2;

      *VAR_12 = VAR_16;
      return (VAR_11);
    }

  return (((void*)0));
}
