
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ bfd_boolean ;
typedef scalar_t__* aarch64_opnd_qualifier_seq_t ;
struct TYPE_7__ {TYPE_1__* operands; TYPE_4__* opcode; } ;
typedef TYPE_2__ aarch64_inst ;
struct TYPE_8__ {int flags; scalar_t__* operands; int qualifiers_list; } ;
struct TYPE_6__ {scalar_t__ qualifier; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,int,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_5 (aarch64_inst *VAR_5, bfd_boolean VAR_6)
{
  int VAR_7, VAR_8;
  aarch64_opnd_qualifier_seq_t VAR_9 = {0};

  if (!FUNC_2 (VAR_5, VAR_5->opcode->qualifiers_list, -1,
          VAR_9))
    {
      FUNC_0 ("matching FAIL");
      return 0;
    }

  if (VAR_5->opcode->flags & VAR_3)
    {

      VAR_8 = FUNC_4 (VAR_5->opcode);
      for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7)
 if (VAR_5->operands[VAR_7].qualifier != VAR_9[VAR_7])
   return VAR_2;
    }


  if (VAR_6 == VAR_4)
    for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
      {
 if (VAR_5->opcode->operands[VAR_7] == VAR_1)
   break;
 FUNC_1 (VAR_5->operands[VAR_7].qualifier != VAR_9[VAR_7],
   "update %s with %s for operand %d",
   FUNC_3 (VAR_5->operands[VAR_7].qualifier),
   FUNC_3 (VAR_9[VAR_7]), VAR_7);
 VAR_5->operands[VAR_7].qualifier = VAR_9[VAR_7];
      }

  FUNC_0 ("matching SUCCESS");
  return 1;
}
