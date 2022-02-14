
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef enum aarch64_opnd_qualifier { ____Placeholder_aarch64_opnd_qualifier } aarch64_opnd_qualifier ;
struct TYPE_13__ {TYPE_4__* opcode; TYPE_1__* operands; int value; int cond; } ;
typedef TYPE_2__ aarch64_inst ;
typedef int aarch64_insn ;
struct TYPE_14__ {int member_1; int member_0; } ;
typedef TYPE_3__ aarch64_field ;
struct TYPE_15__ {int flags; int * operands; int mask; int qualifiers_list; } ;
struct TYPE_12__ {void* qualifier; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (int ,int ,int,TYPE_3__*) ;
 int FUNC_8 (int) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int,int ,int*) ;
 void* FUNC_11 (int,int*,int) ;
 void* FUNC_12 (int) ;
 void* FUNC_13 (int) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_17 (aarch64_inst *VAR_29)
{
  int VAR_30;
  aarch64_insn VAR_31;

  if (VAR_29->opcode->flags & VAR_18)
    {
      VAR_31 = FUNC_5 (VAR_11, VAR_29->value, 0);
      VAR_29->cond = FUNC_8 (VAR_31);
    }

  if (VAR_29->opcode->flags & VAR_25)
    {
      VAR_30 = FUNC_16 (VAR_29->opcode);
      VAR_31 = FUNC_5 (VAR_15, VAR_29->value, 0);
      VAR_29->operands[VAR_30].qualifier = FUNC_9 (VAR_31);
      if ((VAR_29->opcode->flags & VAR_24)
   && FUNC_5 (VAR_9, VAR_29->value, 0) != VAR_31)
 return 0;
    }

  if (VAR_29->opcode->flags & VAR_22)
    {
      VAR_30 = FUNC_16 (VAR_29->opcode);
      VAR_31 = FUNC_5 (VAR_13, VAR_29->value, 0);
      VAR_29->operands[VAR_30].qualifier = FUNC_9 (VAR_31);
    }

  if (VAR_29->opcode->flags & VAR_26)
    return FUNC_3 (VAR_29);

  if (VAR_29->opcode->flags & VAR_19)
    {
      VAR_30 = FUNC_14 (VAR_29->opcode);
      VAR_31 = FUNC_5 (VAR_17, VAR_29->value, 0);
      switch (VAR_31)
 {
 case 0: VAR_29->operands[VAR_30].qualifier = VAR_5; break;
 case 1: VAR_29->operands[VAR_30].qualifier = VAR_3; break;
 case 3: VAR_29->operands[VAR_30].qualifier = VAR_4; break;
 default: return 0;
 }
    }

  if (VAR_29->opcode->flags & VAR_27)
    {


      aarch64_insn VAR_32;
      enum aarch64_opnd_qualifier VAR_33[VAR_0];
      VAR_30 = FUNC_15 (VAR_29->opcode);
      VAR_31 = FUNC_5 (VAR_16, VAR_29->value, VAR_29->opcode->mask);
      VAR_32 = FUNC_5 (VAR_16, ~VAR_29->opcode->mask, 0);


      if (VAR_32 == 0x3)
 VAR_29->operands[VAR_30].qualifier = FUNC_12 (VAR_31);
      else
 {
   FUNC_10 (VAR_30, VAR_29->opcode->qualifiers_list,
        VAR_33);
   VAR_29->operands[VAR_30].qualifier
     = FUNC_11 (VAR_31, VAR_33, VAR_32);
 }
    }

  if (VAR_29->opcode->flags & VAR_28)
    {

      int VAR_34 = 0;
      unsigned VAR_35, VAR_36;
      FUNC_2 (FUNC_0 (VAR_29->opcode->operands[0])
       == VAR_2);
      VAR_35 = FUNC_5 (VAR_12, VAR_29->value, 0);
      while ((VAR_35 & 0x1) == 0 && ++VAR_34 <= 3)
 VAR_35 >>= 1;
      if (VAR_34 > 3)
 return 0;
      VAR_36 = (unsigned) FUNC_5 (VAR_10, VAR_29->value, VAR_29->opcode->mask);
      VAR_29->operands[0].qualifier =
 FUNC_13 ((VAR_34 << 1) | VAR_36);
    }

  if (VAR_29->opcode->flags & VAR_20)
    {


      VAR_30 = FUNC_1 (VAR_29->opcode->operands, VAR_8);
      if (VAR_30 == -1)
 {


   FUNC_2 (FUNC_0 (VAR_29->opcode->operands[0])
    == VAR_1);
   VAR_30 = 0;
 }
      FUNC_2 (VAR_30 == 0 || VAR_30 == 1);
      VAR_31 = FUNC_5 (VAR_10, VAR_29->value, 0);
      VAR_29->operands[VAR_30].qualifier = FUNC_9 (VAR_31);
    }

  if (VAR_29->opcode->flags & VAR_21)
    {
      aarch64_field VAR_37 = {0, 0};
      FUNC_2 (FUNC_0 (VAR_29->opcode->operands[0])
       == VAR_1);
      FUNC_7 (VAR_14, 0, 1, &VAR_37);
      VAR_31 = FUNC_6 (&VAR_37, VAR_29->value, 0);
      VAR_29->operands[0].qualifier
 = VAR_31 ? VAR_6 : VAR_7;
    }


  if (VAR_29->opcode->flags & VAR_23)
    return FUNC_4 (VAR_29);

  return 1;
}
