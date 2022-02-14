
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ reloc_kxed; scalar_t__ reloc_type; int fmt; int enc_letter; } ;
typedef TYPE_1__ hexagon_operand ;
struct TYPE_7__ {int attributes; int syntax; } ;
typedef TYPE_2__ hexagon_opcode ;
typedef scalar_t__ bfd_reloc_code_real_type ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_3 ;
 TYPE_1__ const* VAR_4 ;
 int FUNC_2 (int ,int ) ;

const hexagon_operand *
FUNC_3
(bfd_reloc_code_real_type VAR_5, int VAR_6, const hexagon_opcode *VAR_7)
{
  bfd_reloc_code_real_type VAR_8;
  size_t VAR_9;

  if (VAR_5 == VAR_0 || !VAR_7)
    return ((void*)0);

  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
    {
      if (VAR_6 & VAR_2)
        {
          if (VAR_4 [VAR_9].flags & VAR_1)
            switch (VAR_7->attributes
                    & (129
                       | 128))
              {
              case 129:
                if (VAR_4 [VAR_9].enc_letter
                    != FUNC_0 (VAR_4 [VAR_9].enc_letter)
                    || !FUNC_2 (VAR_7->syntax, VAR_4 [VAR_9].fmt))
                  continue;

                break;

              case 128:
                if (VAR_4 [VAR_9].enc_letter
                    != FUNC_1 (VAR_4 [VAR_9].enc_letter)
                    || !FUNC_2 (VAR_7->syntax, VAR_4 [VAR_9].fmt))
                  continue;

                break;
              }

          VAR_8 = VAR_4 [VAR_9].reloc_kxed;
        }
      else
        VAR_8 = VAR_4 [VAR_9].reloc_type;

      if (VAR_8 == VAR_5)
        return (VAR_4 + VAR_9);
    }

  return ((void*)0);
}
