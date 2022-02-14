
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef enum aarch64_opnd { ____Placeholder_aarch64_opnd } aarch64_opnd ;
struct TYPE_11__ {int index; int * error; int kind; } ;
typedef TYPE_2__ aarch64_operand_error ;
struct TYPE_12__ {TYPE_5__* opcode; TYPE_4__* operands; } ;
typedef TYPE_3__ aarch64_inst ;
struct TYPE_14__ {int tied_operand; int* operands; } ;
struct TYPE_10__ {scalar_t__ regno; } ;
struct TYPE_13__ {scalar_t__ skip; TYPE_1__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int,int,TYPE_5__*,TYPE_2__*) ;

int
FUNC_3 (aarch64_inst *VAR_5,
       aarch64_operand_error *VAR_6)
{
  int VAR_7;

  FUNC_0 ("enter");






  VAR_7 = VAR_5->opcode->tied_operand;
  if (VAR_7 > 0 && (VAR_5->operands[0].reg.regno != VAR_5->operands[VAR_7].reg.regno))
    {
      if (VAR_6)
 {
   VAR_6->kind = VAR_2;
   VAR_6->index = VAR_7;
   VAR_6->error = ((void*)0);
 }
      return 0;
    }
  if (FUNC_1 (VAR_5, VAR_4 ) == 0)
    {
      FUNC_0 ("FAIL on operand qualifier matching");
      if (VAR_6)
 {



   VAR_6->kind = VAR_1;
   VAR_6->index = -1;
   VAR_6->error = ((void*)0);
 }
      return 0;
    }


  for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
    {
      enum aarch64_opnd VAR_8 = VAR_5->opcode->operands[VAR_7];
      if (VAR_8 == VAR_3)
 break;
      if (VAR_5->operands[VAR_7].skip)
 {
   FUNC_0 ("skip the incomplete operand %d", VAR_7);
   continue;
 }
      if (FUNC_2 (VAR_5->operands, VAR_7, VAR_8,
         VAR_5->opcode, VAR_6) == 0)
 {
   FUNC_0 ("FAIL on operand %d", VAR_7);
   return 0;
 }
    }

  FUNC_0 ("PASS");

  return 1;
}
