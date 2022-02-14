
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int enc; scalar_t__ map; } ;
typedef TYPE_1__ hexagon_opcode ;
typedef int hexagon_insn ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int) ;

const hexagon_opcode *
FUNC_5
(hexagon_insn VAR_0)
{
  const hexagon_opcode *VAR_1;
  hexagon_insn VAR_2;
  hexagon_insn VAR_3;


  VAR_0 = FUNC_1 (VAR_0);

  for (VAR_1 = FUNC_4 (VAR_0);
       VAR_1;
       VAR_1 = FUNC_0 (VAR_1))
    {
      if (VAR_1->map)
        continue;

      VAR_2 = FUNC_3 (VAR_1->enc);
      VAR_3 = FUNC_2 (VAR_1->enc);

      if ((VAR_0 & VAR_3) == (VAR_2 & VAR_3))
        return (VAR_1);
    }

  return ((void*)0);
}
