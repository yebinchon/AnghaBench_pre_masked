
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum aarch64_opnd_qualifier { ____Placeholder_aarch64_opnd_qualifier } aarch64_opnd_qualifier ;
typedef enum aarch64_field_kind { ____Placeholder_aarch64_field_kind } aarch64_field_kind ;
struct TYPE_6__ {int value; TYPE_1__* operands; TYPE_4__* opcode; } ;
typedef TYPE_2__ aarch64_inst ;
typedef int aarch64_insn ;
struct TYPE_7__ {scalar_t__ iclass; int mask; int qualifiers_list; } ;
struct TYPE_5__ {int qualifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int,int,int,int,int ) ;
 int FUNC_4 (int,int ,int*) ;
 int FUNC_5 (int,int*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7 (aarch64_inst *VAR_10)
{
  int VAR_11;
  enum aarch64_opnd_qualifier VAR_12;
  aarch64_insn VAR_13;
  aarch64_insn VAR_14, VAR_15;
  enum aarch64_field_kind VAR_16;
  enum aarch64_opnd_qualifier VAR_17[VAR_0];

  if (VAR_10->opcode->iclass == VAR_5
     || VAR_10->opcode->iclass == VAR_6
     || VAR_10->opcode->iclass == VAR_7
     || VAR_10->opcode->iclass == VAR_8)
    VAR_16 = VAR_4;
  else
    VAR_16 = VAR_3;

  VAR_13 = VAR_10->value;
  VAR_14 = FUNC_3 (VAR_13, VAR_10->opcode->mask, 2, VAR_16, VAR_2);



  VAR_15 = FUNC_3 (~VAR_10->opcode->mask, 0, 2, VAR_16, VAR_2);




  VAR_11 = FUNC_2 (VAR_10->opcode);
  FUNC_0 ("key idx: %d", VAR_11);



  if (VAR_15 == 0x7)
    {
      VAR_10->operands[VAR_11].qualifier = FUNC_6 (VAR_14);
      return 1;
    }

  FUNC_4 (VAR_11, VAR_10->opcode->qualifiers_list,
       VAR_17);
  VAR_12 = FUNC_5 (VAR_14, VAR_17, VAR_15);

  if (VAR_12 == VAR_1)
    return 0;

  VAR_10->operands[VAR_11].qualifier = VAR_12;
  return 1;
}
