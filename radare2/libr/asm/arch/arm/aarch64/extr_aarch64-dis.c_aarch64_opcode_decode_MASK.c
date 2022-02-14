
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef enum aarch64_opnd { ____Placeholder_aarch64_opnd } aarch64_opnd ;
typedef int bfd_boolean ;
typedef int aarch64_operand_error ;
typedef int aarch64_operand ;
struct TYPE_15__ {int const mask; int const opcode; scalar_t__* operands; int (* verifier ) (TYPE_1__ const*,int const) ;int name; } ;
typedef TYPE_1__ aarch64_opcode ;
struct TYPE_16__ {int value; TYPE_11__* operands; TYPE_1__ const* opcode; } ;
typedef TYPE_2__ aarch64_inst ;
typedef int aarch64_insn ;
struct TYPE_14__ {scalar_t__ type; int idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int const*,TYPE_11__*,int const,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int * VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char,int) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 int FUNC_10 (TYPE_1__ const*,int const) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (const aarch64_opcode *VAR_5, const aarch64_insn VAR_6,
         aarch64_inst *VAR_7, int VAR_8,
         aarch64_operand_error *VAR_9)
{
  int VAR_10;

  FUNC_0 ("enter with %s", VAR_5->name);

  FUNC_4 (VAR_5 && VAR_7);


  FUNC_7 (VAR_7, '\0', sizeof (aarch64_inst));


  if ((VAR_6 & VAR_5->mask) != (VAR_5->opcode & VAR_5->mask))
    {
      FUNC_0 ("base opcode match FAIL");
      goto decode_fail;
    }

  VAR_7->opcode = VAR_5;
  VAR_7->value = VAR_6;


  for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
    {
      if (VAR_5->operands[VAR_10] == VAR_1)
 break;
      VAR_7->operands[VAR_10].type = VAR_5->operands[VAR_10];
      VAR_7->operands[VAR_10].idx = VAR_10;
    }


  if (FUNC_8 (VAR_5) && FUNC_6 (VAR_7) == 0)
    {
      FUNC_0 ("opcode flag-based decoder FAIL");
      goto decode_fail;
    }



  if (!FUNC_1 (VAR_7))
    {
      FUNC_0 ("iclass-based decoder FAIL");
      goto decode_fail;
    }


  for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
    {
      const aarch64_operand *VAR_11;
      enum aarch64_opnd VAR_12;

      VAR_12 = VAR_5->operands[VAR_10];
      if (VAR_12 == VAR_1)
 break;
      VAR_11 = &VAR_4[VAR_12];
      if (FUNC_9 (VAR_11)
   && (! FUNC_2 (VAR_11, &VAR_7->operands[VAR_10], VAR_6, VAR_7,
      VAR_9)))
 {
   FUNC_0 ("operand decoder FAIL at operand %d", VAR_10);
   goto decode_fail;
 }
    }


  if (VAR_5->verifier && ! VAR_5->verifier (VAR_5, VAR_6))
    {
      FUNC_0 ("operand verifier FAIL");
      goto decode_fail;
    }


  if (FUNC_3 (VAR_7, ((void*)0)) == 1)
    {





      if (!VAR_8)
 FUNC_5 (VAR_7, VAR_9);
      FUNC_0 ("SUCCESS");
      return VAR_3;
    }
  else
    {
      FUNC_0 ("constraint matching FAIL");
    }

decode_fail:
  return VAR_2;
}
